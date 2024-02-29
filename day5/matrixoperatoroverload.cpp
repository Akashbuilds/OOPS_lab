#include <iostream>
using namespace std;

class Matrix
{
    int r, c, **arr;

public:
    void intialize();
    void display();
    Matrix(int, int);
    friend Matrix operator*(Matrix &, Matrix &);
};
Matrix::Matrix(int r, int c)
{
    this->r = r;
    this->c = c;
    arr = new int *[r];
    for (int i = 0; i < r; i++)
        arr[i] = new int[c];
}
void Matrix::intialize()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void Matrix::display()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix operator*(Matrix &ob1, Matrix &ob2)
{
    int i, j, k;
    Matrix temp(ob1.r, ob2.c);
    for (int i = 0; i < ob1.r; i++)
    {
        for (int j = 0; j < ob2.c; j++)
        {
            temp.arr[i][j] = 0;
            for (int k = 0; k < ob2.r; k++)
            {
                temp.arr[i][j] += ob1.arr[i][k] * ob2.arr[k][j];
            }
        }
    }
    return temp;
}

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter the number rows in the first matrix";
    cin >> r1;
    cout << "Enter the number columns in the first matrix";
    cin >> c1;
    cout << "Enter the number rows in the second matrix";
    cin >> r2;
    cout << "Enter the number columns in the second matrix";
    cin >> c2;
    Matrix m1(r1, c1), m2(r2, c2);
    cout << "Enter first matrix" << endl;
    m1.intialize();
    cout << "Enter second matrix" << endl;
    m2.intialize();
    cout << "First matrix is " << endl;
    m1.display();
    cout << "second matrix is" << endl;
    m2.display();
    if (c1 == r2)
    {
        Matrix m3(r1, c2);
        m3 = m1 * m2;
        cout << "Multiplied matrix is" << endl;
        m3.display();
    }
    else
        cout << "Matrix multiplication is not possible";

    return 0;
}
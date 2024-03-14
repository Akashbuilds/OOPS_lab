#include <iostream>
using namespace std;

class Matrix
{
    int r, c, **arr;

public:
    void intialize();
    void display();
    Matrix(int, int);
    friend Matrix operator*(int, Matrix &);
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
            cout << "enter the value of i , j : " << i << j << " : ";
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

Matrix operator*(int x, Matrix &obj)
{
    int i, j, k;
    Matrix temp(obj.r, obj.c);
    for (int i = 0; i < obj.r; i++)
    {
        for (int j = 0; j < obj.c; j++)
        {
            temp.arr[i][j] = x * obj.arr[i][j];
        }
    }
    return temp;
}

int main()
{
    int r1, c1, x;
    cout << "Enter the number rows in the first matrix";
    cin >> r1;
    cout << "Enter the number columns in the first matrix";
    cin >> c1;
    Matrix m1(r1, c1);
    cout << "Enter matrix" << endl;
    m1.intialize();
    cout << "Your matrix is " << endl;
    m1.display();
    cout << "enter the value of x" << endl;
    cin >> x;
    Matrix mat(r1, c1);
    mat = x * m1;
    cout << "the multiplied matrix is " << endl;
    mat.display();
    return 0;
}
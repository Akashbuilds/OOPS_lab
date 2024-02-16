// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Sample
{
private:
    int x;
    double y;

public:
    Sample();
    Sample(int);
    Sample(int, int);
    Sample(int, double);
    Sample(const Sample &);
    void display();
};
Sample::Sample() : x(0), y(0){};
Sample::Sample(int x1) : x(x1), y(0){};
Sample::Sample(int x2, int y2) : x(x2), y(y2){};
Sample::Sample(int x3, double y3) : x(x3), y(y3){};
Sample::Sample(const Sample &obj)
{
    x = obj.x;
    y = obj.y;
    cout << "Copy constructor is called " << endl;
}

void Sample::display()
{
    cout << "x is: " << x << " y is :" << y << endl;
}

int main()
{
    // Write C++ code here
    int xt1, xt2, xt3, yt2;
    double yt3;
    Sample s1;
    cout << "Enter the details of the second constructor:" << endl;
    cout << "Enter the value of x:";
    cin >> xt1;
    Sample s2(xt1);
    cout << "Enter the details of the third constructor" << endl;
    cout << "Enter the value of x";
    cin >> xt2;
    cout << "Enter the value of y:";
    cin >> yt2;
    Sample s3(xt2, yt2);
    cout << "Enter the details of the 4th constructor:";
    cout << "Enter x:";
    cin >> xt3;
    cout << "Enter the value of y:";
    cin >> yt3;
    Sample s4(xt3, yt3);
    Sample s5(s4);
    cout << "details from first constructor  ";
    s1.display();
    cout << "details from second constructor ";
    s2.display();
    cout << "details from third constructor ";
    s3.display();
    cout << "details from fourth constructor ";
    s4.display();
    cout << "details from fifth constructor";
    s5.display();

    return 0;
}
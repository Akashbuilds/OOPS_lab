#include <iostream>
using namespace std;
class dist
{
    int feet, inch;

public:
    dist();
    dist(int, int);
    void show();
    dist operator+(dist &);
};

dist dist::operator+(dist &obj)
{
    int x1, x2;
    x1 = feet + obj.feet;
    x2 = inch + obj.inch;
    if (x2 == 12)
    {
        x2 = 0;
        x1++;
    }
    else if (x2 > 12)
    {
        x2 = x2 - 12;
        x1++;
    }
    return dist(x1, x2);
}

dist::dist()
{
    feet = 0;
    inch = 0;
}

dist::dist(int f, int i)
{
    feet = f;
    inch = i;
}

void dist::show()
{
    cout << "Feet : " << feet << endl;
    cout << "Inch : " << inch << endl;
}

int main()
{
    int f1, i1, f2, i2;
    cout << "Enter feet for first : " << endl;
    cin >> f1;
    cout << "enter the inch for the first :" << endl;
    cin >> i1;
    dist d1(f1, i1);
    cout << "your distance 1 is";
    d1.show();
    cout << "enter the feet for second : " << endl;
    cin >> f2;
    cout << "enter the inch for the second :" << endl;
    cin >> i2;
    dist d2(f2, i2);
    cout<< "your distance 2 is";
    d2.show();
    dist d3;
    cout << "sum of the distance is : " << endl;
    d3 = d1 + d2;
    d3.show();
    return 0;
}
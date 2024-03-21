#include <iostream>
#include <cmath>
using namespace std;
class Compute
{
public:
    int abso(int);
    float abso(float);
    float avg(int, float);
    float avg(float, float);
    float avg(int, int);
    float avg(float, int);
};
int Compute::abso(int a)
{
    if (a >= 0)
        return a;
    else
        return -1 * a;
}
float Compute::abso(float b)
{
    if (b >= 0)
        return b;
    else
        return -1 * b;
}
float Compute::avg(int a, float b)
{
    return (a + b) / 2;
}
float Compute::avg(float a, float b)
{
    return (a + b) / 2;
}
float Compute::avg(int a, int b)
{
    return (a + b) / 2;
}
float Compute::avg(float a, int b)
{
    return (a + b) / 2;
}
int main()
{
    int n = -5;
    int n3 = 7;
    float n1 = -2.75;
    float n2 = 4.5;
    Compute ob;
    cout << "Absolute value of " << n << " is " << ob.abso(n) << endl;
    cout << "Absolute value of " << n1 << " is " << ob.abso(n1) << endl;
    cout << "Average value of " << n << " and " << n1 << " is " << ob.avg(n, n1) << endl;
    cout << "Average value of " << n1 << " and " << n2 << " is " << ob.avg(n1, n2) << endl;
    cout << "Average value of " << n << " and " << n3 << " is " << ob.avg(n, n3) << endl;
    cout << "Average value of " << n2 << " and " << n3 << " is " << ob.avg(n2, n3) << endl;
    return 0;
}
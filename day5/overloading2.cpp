#include<iostream>
using namespace std;
class dist{
    int feet, inch;
    public:
        dist(int, int);
        void show();
        bool operator>(dist &d);
        dist operator++();
        dist operator++(int);
};
dist :: dist(int f, int i):feet(f), inch(i){}
bool dist::operator>(dist &ob){
    int x1, x2;
    x1=feet*12+inch;
    x2=feet*12+inch;
    if(x1>x2)
        return true;
    else
        return false;
}
dist dist::operator++(){
    inch++;
    if(inch==12){
        inch=0;
        feet++;
    }
    return dist(feet, inch);
}
dist dist::operator++(int x){
    dist t(feet, inch);
    if(inch==12){
        inch=0;
        feet++;
    }
    return t;
}
void dist::show(){
    cout<<"Feet: "<<feet<<endl;
    cout<<"Inch: "<<inch<<endl;
}
int main(){
    int f1,i1,f2,i2;
    cout<<"Enter first distance:"<<endl;
    cout<<"Enter the feet: ";
    cin>>f1;
    cout<<"Enter the inches: ";
    cin>>i1;
    cout<<"Enter second distance:"<<endl;
    cout<<"Enter the feet: ";
    cin>>f2;
    cout<<"Enter the inches: ";
    cin>>i2;
    dist d1(f1,i1);
    cout<<"Distance 1 is"<<endl;
    d1.show();
    dist d2(f2,i2);
    cout<<"Distance 2 is"<<endl;
    d2.show();
    if(d1>d2)
        cout<<"d1 is greater"<<endl;
    else
        cout<<"d2 is greater"<<endl;
    cout<<"Distance before pre-increment"<<endl;
    d2.show();
    ++d2;
    cout<<"Distance after pre-increment"<<endl;
    d2.show();
    cout<<"Distance before post-increment"<<endl;
    d2.show();
    d2++;
    cout<<"Distance after post-increment"<<endl;
    d2.show();
    return 0;
}
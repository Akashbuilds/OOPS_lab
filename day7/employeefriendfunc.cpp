#include <iostream>
using namespace std;
class Employee;
class Hod
{
    string name, dept, desig;
    int emp_id, salary;

public:
    void show_details();
    Hod(string, string, string, int, int);
    void enhance_sal(Employee &, int);
};
class Employee
{
    string name, dept, desig;
    int emp_id, salary;

public:
    Employee(string, string, string, int, int);
    void show_details();
    friend void Hod::enhance_sal(Employee &, int);
};
Employee::Employee(string n, string d, string des, int id, int sal) : name(n), dept(d), desig(des), emp_id(id), salary(sal) {}
void Employee::show_details()
{
    cout << "Name of employee is: " << name << endl;
    cout << "Department: " << dept << endl;
    cout << "Designation: " << desig << endl;
    cout << "Employee id: " << emp_id << endl;
    cout << "Salary: " << salary << endl;
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl
         << endl;
}
Hod::Hod(string n, string d, string des, int id, int sal) : name(n), desig(des), dept(d), emp_id(id), salary(sal) {}
void Hod::show_details()
{
    cout << "Name of employee is: " << name << endl;
    cout << "Department: " << dept << endl;
    cout << "Designation: " << desig << endl;
    cout << "Employee id: " << emp_id << endl;
    cout << "Salary: " << salary << endl;
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl
         << endl;
}
void Hod::enhance_sal(Employee &ob, int x)
{
    ob.salary += x;
}
int main()
{
    Employee e1("Mike", "Junior Associate", "Civil Law", 1001, 100000), e2("Harvey", "Senior partner", "Civil Law", 3001, 500000);
    cout << "*Details of 1st employee:*" << endl;
    e1.show_details();
    cout << "*Details of 2nd employee:*" << endl;
    e2.show_details();
    Hod h("Jessica", "Name partner", "Civil Law", 4001, 1500000);
    cout << "*Details of Hod:*" << endl;
    h.show_details();
    h.enhance_sal(e1, 200000);
    cout << "*Details of 1st employee after salary enhancement:*" << endl;
    e1.show_details();
    return 0;
}
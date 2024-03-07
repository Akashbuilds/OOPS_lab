#include <iostream>
using namespace std;
class Employee
{
    string Name;
    string Dept;
    string Designation;
    int emp_id;
    int salary;

public:
    Employee(string _Name, string _Dept, string _Designation, int _emp_id, int _salary)
    {
        Name = _Name;
        Dept = _Dept;
        Designation = _Designation;
        emp_id = _emp_id;
        salary = _salary;
    }
    void ShowDetails()
    {
        cout << "Name " << Name << endl;
        cout << "Department " << Dept << endl;
        cout << "Designation " << Designation << endl;
        cout << "Employee id " << emp_id << endl;
        cout << "Salary " << salary << endl;
        cout << "" << endl;
    }
    friend class HOD;
};

class HOD
{
    string Name;
    string Dept;
    int emp_id;
    int salary;

public:
    HOD(string _Name, string _Dept, int _emp_id, int _salary)
    {
        Name = _Name;
        Dept = _Dept;
        emp_id = _emp_id;
        salary = _salary;
    }
    void ShowDetails()
    {
        cout << "Name " << Name << std::endl;
        cout << "Department " << Dept << std::endl;
        cout << "Employee id " << emp_id << std::endl;
        cout << "Salary " << salary << std::endl;
        cout << "" << std::endl;
    }
    void enhance_sal(Employee &E)
    {
        E.salary += 10000;
    }
};

int main()
{
    Employee E1("Test", "Test", "Test", 1, 79000);
    Employee E2("Test2", "Test2", "Test2", 2, 23000);
    E1.ShowDetails();
    E2.ShowDetails();
    HOD H1("HODtest", "HODtest", 1, 45000);
    H1.enhance_sal(E1);
    E1.ShowDetails();
    H1.ShowDetails();
    return 0;
}
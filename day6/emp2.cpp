# include<iostream>
using namespace std;
class Employee{
  std::string Name;
  std::string Dept;
  std::string Designation;
  int emp_id;
  int salary;
  public:
    Employee(std::string _Name,std::string _Dept,std::string _Designation,int _emp_id,int _salary) {
        Name = _Name;
        Dept = _Dept;
        Designation = _Designation;
        emp_id = _emp_id;
        salary = _salary;
    }
    void ShowDetails(){
        std::cout<<"Name "<<Name<<std::endl;
        std::cout<<"Department "<<Dept<<std::endl;
        std::cout<<"Designation "<<Designation<<std::endl;
        std::cout<<"Employee id "<<emp_id<<std::endl;
        std::cout<<"Salary "<<salary<<std::endl;
        std::cout<<""<<std::endl;
    }
    friend class HOD;
};

class HOD {
  std::string Name;
  std::string Dept;
  int emp_id;
  int salary;
  public:
     HOD(std::string _Name,std::string _Dept,int _emp_id,int _salary) {
        Name = _Name;
        Dept = _Dept;
        emp_id = _emp_id;
        salary = _salary;
    }
    void ShowDetails(){
        std::cout<<"Name "<<Name<<std::endl;
        std::cout<<"Department "<<Dept<<std::endl;
        std::cout<<"Employee id "<<emp_id<<std::endl;
        std::cout<<"Salary "<<salary<<std::endl;
        std::cout<<""<<std::endl;
    }
    void enhance_sal(Employee& E) {
       E.salary+=10000;
    }
};

int main() {
    Employee E1("Test","Test","Test",1,79000);
    Employee E2("Test2","Test2","Test2",2,23000);
    E1.ShowDetails();
    E2.ShowDetails();
    HOD H1("HODtest","HODtest",1,45000);
    H1.enhance_sal(E1);
    E1.ShowDetails();
    H1.ShowDetails();
    return 0;
}
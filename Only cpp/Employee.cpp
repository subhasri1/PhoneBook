#include<iostream>
#include<string>
using namespace std;

class Employee
{
    int code,salary;
    string name;
    public:

    Employee()
    {

    }

    Employee(int code,int salary,string name)
    {

        this->code=code;
        this->salary=salary;
        this->name=name;
    }
    void putEmp()
    {
        cout<<"Code="<<code<<endl;
        cout<<"Salary="<<salary<<endl;
        cout<<"Name="<<name<<endl;
    }
    void getEmp()
    {
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter Salary:"<<endl;
        cin>>salary;
        cout<<"Enter Code:"<<endl;
        cin>>code;
    }
    void setEmp(int code,int salary,string name)
    {

        this->code=code;
        this->salary=salary;
        this->name=name;
    }
};
main()
{
    Employee e;

    e.getEmp();
    e.putEmp();
}

#include<iostream>
#include<string>
using namespace std; 
class employee {
    private:
    int empid;
    string name;
    double salary;

    public:
    void employee::detail()
    {
        cout << "Employee ID: ";
        cin >> empid;

        cout << "Name: ";
        cin >> name;

        cout << "Salary: ";
     cin >> salary;
    }

    void employee:: display()
    {
        cout << "\nEmployee ID: " << empid << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    employee e;

    e.detail();
    e.display();

    return 0;
}
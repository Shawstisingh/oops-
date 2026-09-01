1
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    double marks;

public:
    void detail()
    {
        cout << "Roll no: ";
        cin >> rollno;

        cout << "Name: ";
        cin >> name;

        cout << "Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nRoll number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.detail();
    s.display();

    return 0;
}
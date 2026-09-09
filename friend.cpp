#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

    // Static data member
    static int count;

public:
    Student(int r, string n)
    {
        roll = r;
        name = n;
        count++;
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }

    // Friend function
    friend void showCount();
};

// Definition of static member
int Student::count = 0;

// Friend function
void showCount()
{
    cout << "Total Students: " << Student::count << endl;
}

int main()
{
    Student s1(101, "Shawsti");
    Student s2(102, "Rimjhim");
    Student s3(103, "Sakshi");

    s1.display();
    s2.display();
    s3.display();

    // Access static data through friend function
    showCount();

    return 0;
}
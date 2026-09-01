// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:


//     void display(string name)
//     {
//         cout << "Student Name: " << name << endl;
//     }

    
//     void display(string name, int roll_number)
//     {
//         cout << "Student Name: " << name << endl;
//         cout << "Roll Number: " << roll_number << endl;
//     }

    
//     void display(int grade)
//     {
//         cout << "Grade: " << grade << endl;

//         if (grade >= 90 && grade <= 100)
//         {
//             cout << "Division: First Division" << endl;
//         }
//         else if (grade >= 70)
//         {
//             cout << "Division: Second Division" << endl;
//         }
//         else if (grade >= 50)
//         {
//             cout << "Division: Third Division" << endl;
//         }
//         else
//         {
//             cout << "Division: Fail" << endl;
//         }
//     }
// };

// int main()
// {
//     Student s;

//     s.display("Shawsti");


//     s.display("Shawsti", 123);
    

//     s.display(85 );

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    // Display student name only
    void display(string name)
    {
        cout << "Student Name: " << name << endl;
    }

    // Overloaded: Display student name and roll number
    void display(string name, int roll_number)
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
    }

    // Overloaded: Display grade and calculate division
    void display(int grade)
    {
        cout << "Grade: " << grade << endl;

        if (grade < 0 || grade > 100)
        {
            cout << "Division: Invalid Grade" << endl;
        }
        else if (grade >= 90)
        {
            cout << "Division: First Division" << endl;
        }
        else if (grade >= 70)
        {
            cout << "Division: Second Division" << endl;
        }
        else if (grade >= 50)
        {
            cout << "Division: Third Division" << endl;
        }
        else
        {
            cout << "Division: Fail" << endl;
        }
    }
};

int main()
{
    Student s;

    // Demonstration of function overloading
    s.display("Shawsti");
    cout << "------------------" << endl;

    s.display("Shawsti", 123);
    cout << "------------------" << endl;

    s.display(90);

    return 0;
}
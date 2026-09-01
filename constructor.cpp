#include<iostream>
using namespace std;
class student
{
    public:
    void display(string name)
    {
        cout<<"The name of the student is: "<<name<<endl;
    }
    void display(string name, int age)
    {
        cout<<"The name of the student is: "<<name<<endl;
        cout<<"The age of the student is: "<<age<<endl;
    }
};
int main()
{
    student s;
    s.display("Shawsti");
    s.display("Shawsti", 20);
    return 0;
}
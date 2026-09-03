#include <iostream>
using namespace std;
class student{
 string name;
 int marks;
 public:
 student(string n, int m){
 name = n;
    marks = m;
    }
    student(){
        cout<<"default constructor called"<<endl;
    }
    student(student &s){
        name = s.name;
        marks = s.marks;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
    int main(){
        student s1("Shawsti", 90);
        student s2=s1;
        s1.show();
        s2.show();

        return 0;
    }
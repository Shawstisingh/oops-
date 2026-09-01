#include <iostream>
using namespace std;
class data
{
    public:
    void display(int a)
    {
        a=50;
       // cout<<"The value of a is: "<<a<<endl;
    }
    void num(int &a)
    {
        a=30;
       // cout<<"The value of a is: "<<a<<endl;
    }
};
    int main()
    {
        int m=10;
        data d;
        d.display(m);
        cout<<"The value of call by value m is: "<<m<<endl;
        d.num(m);
        cout<<"The value of call by reference m is: "<<m<<endl;
        return 0;
    }



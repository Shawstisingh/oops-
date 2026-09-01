#include<iostream>
using namespace std;
inline int add (int a, int b)
{
    int c= a+b;
    return c;
}
int main()
{
    int d=10;
    int e=20;
    cout<<"The sum of d and e is: "<<add(d,e)<<endl;
    cout<<"The sum of 30 and 40 is: "<<add(30,40)<<endl;
}
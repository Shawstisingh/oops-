#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<double>number={75.0,94.4,89,67.4,56.8,45.6,78.9,90.0,88.5,92.3};
    int t=0;
    for(auto value:number)
    {
        cout<<value<<endl;
    }
    for(auto value:number)
    {
        if(value>=75.0)
        {
           t++;
        }
        
    }
    cout<<"NUMBER OF STUDENTS WITH HIGH ATTENDENCE: "<<t<<endl;
    return 0;
}
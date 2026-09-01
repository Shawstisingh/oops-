#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<double>worker={35000,50000,67000,87000,25000,540000,29000,59000,200000};
    for(auto salary:worker)
    {
        cout<<salary<<endl;
    }
    int sum=0;
    for(auto salary:worker)
    {
        sum+=salary;
    }
    cout<<"TOTAL SALARY: "<<sum<<endl;
    int max=worker[0];
    for(auto salary:worker)
    {
        if(salary>max)
        {
            max=salary;
        }
    }
    cout<<"MAXIMUM SALARY: "<<max<<endl;
    int count=0;
    for(auto salary:worker)
    {
        if(salary>50000)
        {
            count++;
        }
    }
    cout<<"NUMBER OF EMPLOYEES WITH SALARY > 50000: "<<count<<endl;
    return 0;
}
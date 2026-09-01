#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>number={10,20,30,40,50};
    for(auto value:number)
    {
        cout<<value<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
class bankaccount{
    private:
    float balance;
    public:
    bankaccount(float b)
    {
        balance=b;

    }
    void deposit(float amount )
{
    cout<<"balance before ="<<balance<<endl;
    balance+=amount;
    cout<<"balance after ="<<balance<<endl;
}
void withdraw(float amount)
{
    cout<<"before withdrawall ="<<balance<<endl;
    if(amount<=balance)
    balance -=amount;
    else 
    cout<<"insufficient balance";
    cout<<"after withdrawal ="<<balance<<endl;
}
void showbalance()
{
    cout<<"Balance ="<<balance<<endl;
}
};
int main()
{
    bankaccount b(5000);
   b.deposit(1000);
    b.withdraw(2000);
    b.showbalance();
    return 0;
}
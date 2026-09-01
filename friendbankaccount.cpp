#include <iostream>
using namespace std;
class bankaccount{
    private:
    float balance;
    int accountnumber;
    friend class comparebalance;
}
class comparebalance
{
    public:
    void compare(bankaccount b1, bankaccount b2)
    {
        if(b1.balance>b2.balance)
        cout<<"account 1 has more balance"<<b1.accountnumber<<endl;
        else if(b1.balance<b2.balance)
        cout<<"account 2 has more balance"<<b2.accountnumber<<endl;
        else
        cout<<"both accounts have same balance"<<endl;
    }
};
int main()
{   

    bankaccount b;
    comparebalance c;
    c.display(b1,b2);
}

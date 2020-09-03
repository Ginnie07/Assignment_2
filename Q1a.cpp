#include<iostream>
#include<string>
using namespace std;
class Account
{
    public:
    int acc;
    Account(int initial)
    {
        if (initial>=0)
        acc=initial;
        else
        {
            initial=0;
            count<<"Initial Balance Invalid";

        }
        
    }
    void credit(int amount)
    {
        acc=acc+amount;
    
    }
    void debit(int amount)
    {
        if(amount>acc)
        cout<<"Debit amount exceed account balance";
        else
        {
            acc=acc-amount;
        }
        
    }
    void getBalance()
    {
        return acc;
    }
}
int main()
{
    Account ac1(1000);
    Account ac2(350);
    cout<<"Account 1 credit amount is"<<ac1.getBalance()<<endl;
    ac1.credit(700);
    cout<<"Account 2 credit amount is"<<ac2.getBalance()<<endl;
    ac2.credit(350);
    cout<<"Account 1 debit amount is"<<ac1.getBalance()<<endl;
    ac1.debit(150);
    cout<<"Account 2 debit amount is"<<ac2.getBalance()<<endl;
    ac2.debit(100);
    cout<<"Account 1 balance is"<<ac1.getBalance()<<endl;
    cout<<"Account 2 balance is"<<ac2.getBalance()<<endl;
}
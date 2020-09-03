#include<iostream>
#include<string>
using namespace std;
class Account
{
    private:
    int acc;
    public:
    Account(int initial)
    {
        if (initial>=0)
        acc=initial;
        else
        {
            acc=0;
            cout<<"Initial Balance Invalid"<<endl;

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
    int getBalance()
    {
        return acc;
    }
};
int main()
{
    Account ac1(1000);
    cout<<"Account 1 initial amount is  "<<ac1.getBalance()<<endl;
    Account ac2(-50);
    cout<<"Account 2 initial amount is  "<<ac2.getBalance()<<endl;
    ac1.credit(700);
    cout<<"Account 1 credit amount is  "<<ac1.getBalance()<<endl;
    ac2.credit(350);
    cout<<"Account 2 credit amount is  "<<ac2.getBalance()<<endl;
    ac1.debit(100);
    cout<<"Account 1 balance is  "<<ac1.getBalance()<<endl;
    ac2.debit(70);
    cout<<"Account 2 balance is  "<<ac2.getBalance()<<endl;
}
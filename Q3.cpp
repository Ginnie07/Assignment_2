#include<iostream>
#include<string>
using namespace std;
class Date
{
    private:
    int month;
    int day;
    int year;
    public:
    Date(int m,int d,int y)
    {
       month=m;
        day=d;
        year=y;
        
    }
    int getmonth()
    {
        return month;
    }
    int getday()
    {
        return day;
    }
    int getyear()
    {
        return year;
    }
    void setmonth(int m)
    {
        if(m>=1&&m<=12)
        {
            month=m;
        }
        else
        {
        month=1;
        }
    }
    void setday(int d)
    {
        day=d;
    }
    void setyear(int y)
    {
        year=y;
    }
    void DisplayDate()
    {
        cout<<"Month,day and year is "<<month<<"/"<<day<<"/"<<year <<endl;
    }
};
int main()
{
    Date d1(7,11,2000);
    cout<<"Date is "<<endl;
    d1.DisplayDate();
    d1.setday(8);
    d1.setmonth(0);
    cout<<"Date is "<<endl;
    d1.DisplayDate();
}
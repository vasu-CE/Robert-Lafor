#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,year;
    float intrate,amount,result,res=0;
    cout << "Enter initial amount : ";
    cin >> amount;
    cout << "Enter number of years : ";
    cin >> year;
    cout << "Enter interest rate (percent per year) : ";
    cin >> intrate;
    for(i=1 ; i<=year ; i++)
    {
        res=amount+amount*(intrate/100);
        result=res;
        amount=res;
    }
    cout << result;
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,year=0;
    float intrate,famo,amo,temp=0;
    
    cout << "Enter initial amount : ";
    cin >> amo;
    cout << "Enter interest rate : ";
    cin >> intrate;
    cout << "Enter final amount : ";
    cin >> famo;

    while(temp<=famo)
    {
        amo=amo+(amo*(intrate/100));
        year++;
        temp=amo;
    }
    cout << year;
    return 0;
}

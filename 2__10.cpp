#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int pound,shill,pence,dp;
    float pointpo;
    cout << "Enter pound : ";
    cin >> pound;
    cout << "Enter shilling : ";
    cin >> shill;
    cout << "Enter pence : ";
    cin >> pence;
    pence=pence+shill*12;
    pointpo=(float)pence/240;
    cout << "Decimal Pounda = " << setprecision(3) << pound+pointpo;

}

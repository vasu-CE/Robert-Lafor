#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int pound,fraction,pen,shill;
    float decimal,mainfra;
    char temp;
    cout << "Enter decimal pound : ";
    cin >> pound >> temp >> fraction;

    decimal=((float)fraction/100)*240;    
    pen=(int)decimal%12;
    shill=(decimal-pen)/12;
    cout << pound << "."<<shill <<  "."  << pen;
}

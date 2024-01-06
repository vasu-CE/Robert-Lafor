#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int chose;
    float cel,fer;
    cout << "Type 1 to convert Fahrenhit to Celsius, " << endl << "     2 to convert Celcius to Fahrenhit : ";
    cin >> chose;
    switch(chose)
    {
        case 1:
           
            cout << "Enter temperature in Fahrenhit : ";
            cin >> fer;
            cel=(fer-32)*(5.0/9);
            cout << "In Celsius that's " << setprecision(4) << cel;
            break;
        case 2: 
            cout << "Enter temperature in Celcius : ";
            cin >> cel;
            fer=cel*((float)9/5)+32;
            cout << "In Fehrenhit that's " << fer;
            break;
        default:
            cout << "please Enter 1 or 2";
    }
}

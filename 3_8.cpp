#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int pound[2], shilling[2], pence[2], pou, shill, pen;
    int i;
    char temp, ch;
    do
    {
        cout << "Enter first amounmt : ";
        cin >> pound[0] >> temp >> shilling[0] >> temp >> pence[0];
        cout << "Enter second amount : ";
        cin >> pound[1] >> temp >> shilling[1] >> temp >> pence[1];

        pou = pound[0] + pound[1];
        shill = shilling[0] + shilling[1];
        pen = pence[0] + pence[1];
        while (pen >= 12)
        {
            shill++;
            pen = pen - 12;
        }
        while (shill >= 20)
        {
            pou++;
            shill = shill - 20;
        }
        cout << endl
             << "Total is : " << pou << "." << shill << "." << pen;
        cout << endl
             << "Do you wish to continue (y/n)? ";
        cin >> ch;
    } while (ch != 'n' && ch == 'y');
    return 0;
}

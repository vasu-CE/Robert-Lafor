#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, n;
    long double fect = 1;
    char ch;

    do
    {
        fect=1;
        cout << "Enter a number : ";
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            fect *= i;
        }
        cout << n << "! = " << fect << endl;
    } while (n != 0);
    return 0;
}

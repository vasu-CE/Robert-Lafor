#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for(int i=1 ; i<=30 ; i++)
    {
        cout << setw(5)<< n*i;
        if(i%10==0)
        {
            cout << endl;
        }
    }
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n1, n2,ans;
    char temp,ch;
    do
    {
    cout << "Enter First number , operator , second number : ";
    cin >> n1 >> temp >> n2;
    switch (temp)
    {
    case '+':
        ans = n1+n2;
        break;
    case '-':
       ans = n1 - n2;
        break;
    case '*':
        ans = n1 * n2;
        break;
    case '/':
        ans = n1 / n2;
        break;
    default:
        cout << "Enter write expression";
    }
    cout << "Answer = " << ans;
    cout << endl << "Do another (y/n)";
    cin >> ch;
    }while(ch!='n' && ch=='y');
    
}

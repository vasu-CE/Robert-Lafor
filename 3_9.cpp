#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int guest,seat,i,result;
    cout << "Enter how many guest : ";
    cin >> guest;
    cout << "Enter how many table seat : ";
    cin >> seat;

    i=1;
    result=guest;
    while(i!=seat)
    {
        result=result*(--guest);
        i++;
    }
    cout <<result;
    return 0;
}

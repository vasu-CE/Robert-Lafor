#include <iostream>
#include <iomanip>
void sum(int *, int *, int *);
void sub(int *, int *, int *);
void mul(int *, int *, int *);
using namespace std;

int main()
{
    int pound[2], shill[2], pen[2];
    char ch, opre;

    cout << "Enter first pound shilling and pence : ";
    cin >> pound[0] >> ch >> shill[0] >> ch >> pen[0];
    cout << "Enter second pound shilling and pence : ";
    cin >> pound[1] >> ch >> shill[1] >> ch >> pen[1];

    cout << "Enter operation operator(+,-,*) : ";
    cin >> opre;
    switch (opre)
    {
    case '+':
        sum(pound, shill, pen);
        break;
    case '-':
        sub(pound, shill, pen);
        break;
    case '*':
        mul(pound, shill, pen);
        break;
    default :
        cout << "Enter write operator";
    }

    return 0;
}
void sum(int *pound, int *shill, int *pen)
{
    int tp, ts, tpe;
    tp = pound[0] + pound[1];
    ts = shill[0] + shill[1];
    tpe = pen[0] + pen[1];
    while (tpe >= 12)
    {
        ts++;
        tpe = tpe - 12;
    }
    while (ts >= 20)
    {
        tp++;
        ts = ts - 20;
    }
    cout << "Total : " << tp << "." << ts << "." << tpe;
}
void sub(int *pound, int *shill, int *pen)
{
    int tp, ts, tpe;
    tp = pound[0] - pound[1];
    ts = shill[0] - shill[1];
    tpe = pen[0] - pen[1];
    while (tpe >= 12)
    {
        ts++;
        tpe = tpe - 12;
    }
    while (ts >= 20)
    {
        tp++;
        ts = ts - 20;
    }
    cout << "Total : " << tp << "." << ts << "." << tpe;
}
void mul(int *pound, int *shill, int *pen)
{

    int tp, ts, tpe;
    tp = pound[0] * pound[1];
    ts = shill[0] * shill[1];
    tpe = pen[0] * pen[1];
    while (tpe >= 12)
    {
        ts++;
        tpe = tpe - 12;
    }
    while (ts >= 20)
    {
        tp++;
        ts = ts - 20;
    }
    cout << "Total : " << tp << "." << ts << "." << tpe;
}

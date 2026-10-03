#include <iostream>
using namespace std;
int main()
{
int a , b, c;

cout << " Enter Number of a:" <<endl;
cin >> a;

cout << " Enter Number of b:" <<endl;
cin >> b;

cout << " Enter Number of c:" <<endl;
cin >> c;

if ( a>=b && a>=c)
{
    cout << " a is the largest Number:"<< a << endl;
}
else if ( b>=a && b>=c)
{
    cout << " b is the largest Number:"<< b << endl;
}
else
{
    cout << " c is the largest Number:"<< c << endl;
}

    return 0;
}

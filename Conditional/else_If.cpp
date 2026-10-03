#include <iostream>
using namespace std;
int main()
{
int marks;

cout << "Enter Marks  Of your :" <<endl;
cin >> marks;
if (marks >= 90)
{
    cout << "A+ grade" << endl;
    
}
else if (marks >= 80)
{
    cout << "A grade" << endl;
}
else 
{
    cout << "Fail" << endl;
}


    return 0;
}
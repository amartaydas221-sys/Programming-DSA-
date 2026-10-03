#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<< "Enter the Year :"<< endl;
    cin >> year;

    if (year % 4 == 0){
        cout<<"This year is leap year"<< endl;

    }
    else if (year % 100 == 0){

        cout << "this is not a leap year:"<< endl;
    }


    return 0;
}
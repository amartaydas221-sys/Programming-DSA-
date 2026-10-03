#include <iostream>
using namespace std;
int main()
{
    int income;
    float tax;

   cout << "Enter Your income (in lakhs) :" <<endl;
   cin >> income;

    if (income < 5){
        tax = 0;
        
        
    }
    else if (income >= 5 && income <10)
{
    tax = 0.2*income;
    

}
else 
{
    tax = 0.3*income;
    cout << " You have to pay 30% tax " << endl;
}

cout << " tax amount: " << (tax*100000) << endl;


return 0;

}

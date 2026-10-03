#include <iostream>
using namespace std;
int main()
{
    int age = 20;
    int marks = -200;
    char grade = 'A';
    bool isAdult = true;
    float Cgpa = 3.75;

    cout<<age<<" "<<marks<<" "<<grade<<" "<<isAdult<<" "<<Cgpa<<endl;
    cout<<"Size of Integer Number:"<<sizeof(int)<<endl;
    cout<<"Size of Char:"<<sizeof(char)<<endl;
    cout<<"Size of boolean:"<<sizeof(bool)<<endl; 
    cout<<"Size of float:"<<sizeof(float)<<endl;
    return 0;
}
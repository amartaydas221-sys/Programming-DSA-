#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

int arr[] ={1,2,3,4,5};
int n = sizeof(arr)/sizeof(int);

reverse (arr, arr+n);

cout<< "Reverse Array : ";
for(int i=0; i<n; i++)
{
    cout<< arr[i] << " ";
}



    return 0;
}
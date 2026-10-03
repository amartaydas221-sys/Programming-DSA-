#include <iostream>
#include <algorithm>
using namespace std;

void Print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }
}
int main()
{
    int arr[8] ={1, 4, 1, 3, 2, 4, 3, 7};
    sort(arr, arr + 8);// Ascending Order sorting
    //sort(arr, arr+8, greater<int>()); // Descending Order sorting

    Print(arr, 8);
}
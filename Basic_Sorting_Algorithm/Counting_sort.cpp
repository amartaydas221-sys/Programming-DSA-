#include <iostream>
using namespace std;

void Print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}
void countingsort(int arr[], int n)
{
    int freq[100] = {0};
    int MaxValue = INT_MIN;
    int MinValue = INT_MAX;
for(int i=0;i<n; i++){
     freq[arr[i]]++;
  MinValue = min(MinValue, arr[i]);
  MaxValue = max(MaxValue,arr[i]);
}
for(int i=MinValue, j=0; i<=MaxValue; i++){
    while(freq[i]>0)
    {
        arr[j]= i;
        freq[i]--;
        j++;
    }
}
Print (arr, n);
}




int main()
{
    int arr[8] ={1, 4, 1, 3, 2, 4, 3, 7};
    //int n = sizeof(arr)/sizeof(int);
    countingsort(arr, 8);
}
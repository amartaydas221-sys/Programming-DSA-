#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int arr[] ={5,65,8,23,2};

    int n= sizeof(arr)/sizeof(int);

    sort(arr, arr+n);//use this algorithm i have must call the #include<algorithm>
    cout<<"Sort the Array that I have given :";
    for(int i=0; i<n;i++){
        cout<< arr[i]<<" ";
    }

return 0;
}
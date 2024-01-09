#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //array declaration with Initialization
    int arr[]={10,20,30};
    //finding the size of array
    int n=sizeof(arr)/sizeof(arr[0]);
    //vector Declaration with Initialization from array
    vector<int>v(arr,arr+n);
    for(auto x:v)cout<<x<<" ";
    return 0;
}


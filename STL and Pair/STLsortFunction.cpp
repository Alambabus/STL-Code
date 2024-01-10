#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,15,8,20};

    //sort() Function
    //T.C.=O(nlogn)
    sort(arr,arr+4);
    for(int i=0;i<4;i++)cout<<arr[i]<<" ";
    return 0;
}

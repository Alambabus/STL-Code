#include<iostream>
#include<unordered_map>
using namespace std;
void naiveSolution(int a[],int n)
{
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)m[a[i]]++;
    for(auto x:m)cout<<x.first<<"->"<<x.second<<endl;
}
int main()
{
    //Input:arr=[10,5,20,5,10,5]
    //Output:10->2
    //       5->3
    //       20->1
    int arr[]={10,5,20,5,10,5};
    naiveSolution(arr,6);
    return 0;
}

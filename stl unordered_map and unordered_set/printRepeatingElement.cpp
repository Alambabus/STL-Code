#include<iostream>
#include<unordered_set>
using namespace std;
void naiveSolution(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool prev=false;
        for(int j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                prev=true;
                break;
            }
        }
        if(prev==true)continue;
        bool next=false;
        for(int j=i+1;j<n;j++)
            if(a[i]==a[j])
            {
                next=true;
                break;
            }
        if(next==true)cout<<a[i]<<" ";
    }
    cout<<endl;
}
void efficientSolution(int a[],int n)
{
    unordered_multiset<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.count(a[i])==1) cout<<a[i]<<" ";
        s.insert(a[i]);
    }
    cout<<endl;
}
int main()
{
    //Input:arr=[10,8,10,7,7];
    //Output: 10,7

    //int arr[]={10,8,10,7,7};
    int arr[]={1,1,1,3,4,5,5,5,5,5,5};
    naiveSolution(arr,11);
    efficientSolution(arr,11);
    return 0;
}

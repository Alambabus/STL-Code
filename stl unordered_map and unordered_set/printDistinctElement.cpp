#include<iostream>
#include<unordered_set>
using namespace std;
void efficientSolution(int a[],int n)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.count(a[i])==0)cout<<a[i]<<" ";
        s.insert(a[i]);
    }
    cout<<endl;
}
void naiveSolution(int a[],int n)
{
    cout<<a[0]<<" ";
    for(int i=1;i<n;i++)
    {
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(a[i]!=a[j])continue;
            else break;
        }
        if(j==-1)cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    //Input:arr=[4,8,5,8,7,5]
    //Output:4 8 5 7

    int arr[]={4,8,5,8,7,5};
    naiveSolution(arr,6);
    efficientSolution(arr,6);
    return 0;
}


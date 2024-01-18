#include<iostream>
#include<unordered_set>
using namespace std;
bool naiveSolution(int a[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            if(a[i]+a[j]==sum)
                return true;
    }
    return false;
}
bool efficientSolution(int a[],int n,int sum)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.count(sum-a[i])==0)s.insert(a[i]);
        else return true;
    }
    return false;
}
int main()
{
    //Input:arr=[3,2,8,15,-8], sum=17
    //Output: true

    int arr[]={3,2,8,15,-8};
    int sum=17;

    bool ans=naiveSolution(arr,5,sum);
    if(ans)cout<<"True"<<endl;
    else cout<<"False"<<endl;

    bool ans1=efficientSolution(arr,5,sum);
    if(ans1)cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}

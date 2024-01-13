#include<iostream>
#include<map>
using namespace std;
void efficientSolutionOfCountGreaterElement(int arr[],int n)
{
    map<int,int>m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    int countEle=0;
    for(auto &x:m)
    {
        countEle+=x.second;
        x.second=n-countEle;
    }
    for(int i=0;i<n;i++)
        cout<<m[arr[i]]<<" ";
}
void naiveSolutionOfCountGreaterElement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int countEle=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)continue;
            if(arr[j]>arr[i])countEle++;
        }
        cout<<countEle<<" ";
    }
}
int main()
{
    //Input:arr=[10,5,8,20,30,8]
    //Output:   [2 ,5,3,1 ,0 ,3]

    int arr[]={10,5,8,20,30,8};
    naiveSolutionOfCountGreaterElement(arr,6);
    cout<<endl;
    efficientSolutionOfCountGreaterElement(arr,6);
    return 0;
}

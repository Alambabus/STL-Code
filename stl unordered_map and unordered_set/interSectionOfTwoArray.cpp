#include<iostream>
#include<unordered_set>
using namespace std;
void naiveSolution(int a[],int b[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
}
void efficientSolution(int a[],int b[],int m,int n)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)s.insert(b[i]);
    for(int i=0;i<m;i++)
        if(s.count(a[i])!=0)cout<<a[i]<<" ";
}
int main()
{
    //Input:a=[10,15,20,25,30,50],
    //      b=[30,5,15,80]
    //Output: 15,30


    int a[]={10,15,20,25,30,50};
    int b[]={30,5,15,80};

    naiveSolution(a,b,6,4);
    efficientSolution(a,b,6,4);
    return 0;
}

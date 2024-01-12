#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
void efficientSolutionOfCeilingOnRightSide(int a[],int n)
{
    set<int>s;
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--)
    {
        auto it=s.lower_bound(a[i]);
        if(it!=s.end())ans[i]=*it;
        else ans[i]=-1;
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";

}
void helperFunction(int i,int val,vector<int> &ans,int a[],int n)
{
    vector<int>temp;
    int j;
    for(j=i;j<n;j++)temp.push_back(a[j]);
    sort(temp.begin(),temp.end());
    for(j=0;j<temp.size();j++)
    {
        if(val<=temp[j])
        {
            ans.push_back(temp[j]);
            return ;
        }
    }
    ans.push_back(-1);

}
void naiveSolutionOfCeilingOnRightSide(int a[],int n)
{
    vector<int>ans;
    for(int i=0;i<n-1;i++)
    {
        helperFunction(i+1,a[i],ans,a,n);
    }
    ans.push_back(-1);
    for(auto x:ans)cout<<x<<" ";
}
int main()
{
    //Input:arr=[10,100,200,30,120,120]
    //Output:    [30,120,-1 ,120,120,-1]


     int arr[]={10,100,200,30,120,120};
     for(auto x:arr)cout<<x<<" ";cout<<endl;
     naiveSolutionOfCeilingOnRightSide(arr,6);
     cout<<endl;
     efficientSolutionOfCeilingOnRightSide(arr,6);
    return 0;
}

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void efficientSolutionOfNextGreaterElement(vector<int> &v)
{
    vector<int>ans;
    int n=v.size();
    stack<int>s;
    s.push(v[n-1]);
    ans.push_back(-1);
    for(int i=n-2;i>=0;i--)
    {
        while(!s.empty() && s.top()<=v[i])s.pop();
        ans.push_back(s.empty()? -1 : s.top());
        s.push(v[i]);
    }
    n=ans.size();
    for(int i=n-1;i>=0;i--)cout<<ans[i]<<" ";
}
void naiveSolutionOfNextGreaterElement(vector<int> &v)
{
    vector<int>ans;
    int n=v.size();
    for(int i=n-1;i>=0;i--)
    {
        int j;
        for( j=i+1;j<n;j++)
            if(v[j]>v[i])
        {
            ans.push_back(v[j]);
            break;
        }
        if(j>=n)ans.push_back(-1);
    }
    n=ans.size();
    for(int i=n-1;i>=0;i--)cout<<ans[i]<<" ";
}
int main()
{
    //Input: arr=[15,10,18,12,4, 6, 2, 8]
    //Output:ans=[18,18,-1,-1,6, 8, 8,-1]

    vector<int>v{5,16,10,8,6,12,9,18};
    cout<<"Naive Solution: "<<endl;
    naiveSolutionOfNextGreaterElement(v);
    cout<<endl;
    cout<<"Efficient Solution: "<<endl;
    efficientSolutionOfNextGreaterElement(v);
    return 0;
}


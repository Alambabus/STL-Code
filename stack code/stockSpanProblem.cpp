#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void efficientSolutionOfStockSpanProblem(vector<int> &v)
{
    int n=v.size();
    stack<int>ans;
    ans.push(0);
    cout<<1<<" ";
    for(int i=1;i<n;i++)
    {
        while(!ans.empty() && v[ans.top()]<=v[i])ans.pop();
        cout<<((ans.empty())? i+1:i-ans.top())<<" ";
        ans.push(i);
    }
}
void naiveSolutionOfStockSpanProblem(vector<int> &v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int countItem=1;
        int currElement=v[i];
        for(int j=i-1;j>=0;j--)
            if(currElement>=v[j])countItem++;
        cout<<countItem<<" ";
    }
}
int main()
{
    //Input: arr=[15,13,12,14,16,8,6,4,10,30]
    //Output:ans=[1 , 1, 1, 3, 5,1,1,1, 4,10]

    vector<int>v{15,13,12,14,16,8,6,4,10,30};
    cout<<"Naive Solution: ";
    naiveSolutionOfStockSpanProblem(v);
    cout<<endl;
    cout<<"Efficient Solution: ";
    efficientSolutionOfStockSpanProblem(v);
    return 0;
}

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void efficientSolutionOfPreviousGreaterElement(vector<int> &v)
{
    int n=v.size();
    stack<int>s;
    s.push(v[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && s.top()<=v[i])s.pop();
        cout<<(s.empty()? -1 : s.top())<<" ";
        s.push(v[i]);
    }
}
void naiveSolutionOfPreviousGreaterElement(vector<int> &v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int j=i-1;
        for( j=i-1;j>=0;j--)
            if(v[j]>v[i])
        {
            cout<<v[j]<<" ";
            break;
        }
        if(j<0)cout<<"-1"<<" ";
    }

}
int main()
{
    //Input: arr=[15,10,18,12,4, 6, 2,8]
    //Output:ans=[-1,15,-1,18,12,12,6,12]

    vector<int>v{15,10,18,12,4, 6, 2,8};
    cout<<"Naive Solution: "<<endl;
    naiveSolutionOfPreviousGreaterElement(v);
    cout<<endl;
    cout<<"Efficient Solution: "<<endl;
    efficientSolutionOfPreviousGreaterElement(v);
    return 0;
}

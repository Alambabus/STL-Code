#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    //Input:  a=[3,1,2],b=['e','k','g']
    //Output: ['k','g','e']
    int a[]={3,1,2};
    int b[]={'e','k','g'};
    vector<pair<int,char>>v;
    for(int i=0;i<3;i++)v.push_back({a[i],b[i]});
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++)cout<<v[i].second<<" ";
    return 0;
}

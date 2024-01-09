#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector Declaration with Initialization
    int n=3,x=10;
    vector<int>v(n,x);
    //vector Traversal
    for(auto it=v.begin();it!=v.end();it++)cout<<*it<<" ";
    return 0;
}

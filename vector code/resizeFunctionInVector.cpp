#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector Declaration with Initialization
    vector<int>v{10,5,20,15};
    //resize() Function
    //T.C=O(n)
    v.resize(3);
    for(auto x:v)cout<<x<<" ";
    cout<<endl;
    v.resize(5);
    for(auto x:v)cout<<x<<" ";
    cout<<endl;
    v.resize(8,100);
    for(auto x:v)cout<<x<<" ";
    return 0;
}

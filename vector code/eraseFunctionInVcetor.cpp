#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector Declaration with Initialization
    vector<int>v{10,5,20,15};
    //erase() Function
    //T.C=O(n)
    v.erase(v.begin());
    for(auto x:v)cout<<x<<" ";
    v.erase(v.begin(),v.end()-1);
    cout<<endl;
    for(auto x:v)cout<<x<<" ";
    return 0;
}

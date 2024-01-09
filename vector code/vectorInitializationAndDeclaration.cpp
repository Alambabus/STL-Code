#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector Declaration with Initialization
    vector<int>v{10,5,20};
    //vector Traversal
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}


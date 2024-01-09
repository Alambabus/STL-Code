#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector Declaration
    vector<int>v;
    //vector Initialization
    //push_back() function
    //T.C=O(n)
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    //vector Traversal
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector Declaration with Initialization
    vector<int>v{10,15,5,20};
    //pop_back() function
    //T.C=O(n)
    v.pop_back();
    for(auto x:v)cout<<x<<" ";
    cout<<endl;
    //front() function
    //T.C=O(1)
    cout<<"Front Element of Vector: "<<v.front()<<endl;
    //back() function
    //T.C=O(1)
    cout<<"Last Element of Vector: "<<v.back();
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
void addElementToVector1(vector<int> &v)
{
    v.push_back(5);
    v.push_back(6);
    cout<<endl;
}
void addElementToVector(vector<int>v)
{
    v.push_back(5);
    v.push_back(6);
}
int main()
{
    //vector Declaration with Initialization
    vector<int>v{1,2,3,4};
    //passing vector as a value
    addElementToVector(v);
    for(auto x:v)cout<<x<<" ";
    //passing vector as a reference
    addElementToVector1(v);
    for(auto x:v)cout<<x<<" ";
    return 0;
}

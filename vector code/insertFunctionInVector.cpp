#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector Declaration with Initialization
    vector<int>v{10,5,20,15};
    //insert() Function
    auto it=v.insert(v.begin(),100);
    v.insert(v.begin()+2,200);
    v.insert(v.begin(),2,300);
    vector<int>v1;
    //Initialization v1 vector from vector v
    v1.insert(v1.begin(),v.begin(),v.begin()+2);
    cout<<"Vcetor v: ";
    for(auto x:v)cout<<x<<" ";
    cout<<endl<<"Vector v1: ";
    for(auto x:v1)cout<<x<<" ";
    return 0;
}


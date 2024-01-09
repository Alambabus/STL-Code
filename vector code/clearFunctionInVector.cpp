#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector Declaration with Initialization
    vector<int>v{10,5,20,15};
    //clear() Function
    //T.C=O(n)
    v.clear();
    cout<<v.size()<<endl;
    //empty() Function
    if(v.empty()==true)cout<<"Vector is Empty";
    else cout<<"Vector is not Empty";
    return 0;
}

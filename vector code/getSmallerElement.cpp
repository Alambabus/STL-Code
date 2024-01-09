#include<iostream>
#include<vector>
using namespace std;
vector<int> getSmallerElement(vector<int>v,int k)
{
    vector<int>ans;
    int n=v.size();
    for(int i=0;i<n;i++)
        if(v[i]<k)ans.push_back(v[i]);
    return ans;
}
int main()
{
    //Input: v=[8,100,20,40,3,7], k=10
    //Output: 8 3 7

    //vector Declaration with Initialization
    vector<int>v{10,5,30,40,20};
    int k=25;
    vector<int>ans=getSmallerElement(v,k);
    for(auto x:ans)cout<<x<<" ";
    return 0;
}


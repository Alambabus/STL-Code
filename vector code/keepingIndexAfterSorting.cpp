
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 myCmp(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}
int main()
{
    //Input: v=[20,40,30,10]
    //Output: 10 3
    //        20 0
    //        30 2
    //        40 1 and vice versa

    //vector Declaration with Initialization
    vector<int>v{20,40,30,10};
    vector<pair<int,int>>p;
    for(int i=0;i<v.size();i++)p.push_back({v[i],i});
    sort(p.begin(),p.end(),myCmp);
    for(int i=0;i<v.size();i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;
    return 0;
}


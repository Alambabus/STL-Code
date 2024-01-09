#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 myCmp(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second<p2.second;
}
int main()
{
    //Input: rollNumber=[101,108,103,105], marks=[70,80,40,90]
    //Output: 40 103
    //        70 101
    //        80 108
    //        90 105 and vice versa

    //vector Declaration with Initialization
    vector<int>rollNumber{101,108,103,105};
    vector<int>mathMark{70,80,40,90};
    vector<pair<int,int>>v;
    for(int i=0;i<rollNumber.size();i++)v.push_back({rollNumber[i],mathMark[i]});
    sort(v.begin(),v.end(),myCmp);
    for(int i=0;i<rollNumber.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}


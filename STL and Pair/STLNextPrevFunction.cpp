#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40,50};
    auto it=v.begin();
    it=next(it);
    cout<<*it<<endl;
    it=next(it,2);
    cout<<*it<<endl;
    it=prev(it);
    cout<<*it<<endl;
    return 0;
}


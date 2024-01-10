#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40,50};
    auto it=v.begin();
    advance(it,3);
    cout<<*it;
    return 0;
}

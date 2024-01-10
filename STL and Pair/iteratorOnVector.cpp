#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={10,20,30,40,50};
    vector<int>::iterator it=v.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    it=v.end();
    it--;
    cout<<*(it);
    return 0;
}


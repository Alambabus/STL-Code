#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int,int>p1(10,20);
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,string>p2={23,"Shahzad alam"};
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<char,char>p3=make_pair('s','s');
    cout<<p3.first<<"+"<<p3.second;
    return 0;
}

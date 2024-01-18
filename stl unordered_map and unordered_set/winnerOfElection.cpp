#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //Input:   arr=["abc","xyz","abc","pqr"]
    //Output:  abc
    string arr[]={"abc","xyz","abc","pqr"};
    unordered_map<string,int>m;
    for(int i=0;i<4;i++)m[arr[i]]++;
    int vote=0;
    string winnerName="";
    for(auto x:m)
    {
        if(x.second>vote)
        {
            vote=x.second;
            winnerName=x.first;
        }
    }
    cout<<winnerName<<endl;
    return 0;
}

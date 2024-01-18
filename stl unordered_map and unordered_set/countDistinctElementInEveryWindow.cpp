#include<iostream>
#include<unordered_map>
using namespace std;
void countDistinctElementInEveryWindow(int a[],int n,int k)
{
    unordered_map<int,int>m;
    int i=0,j=0;
    while(j<k)m[a[j++]]++;
    while(j<n)
    {
        cout<<m.size()<<" ";
        m[a[i]]--;
        if(m[a[i]]==0)m.erase(a[i]);
        i++;
        m[a[j++]]++;
    }
    cout<<m.size();
}
int main()
{
    //input: arr=[10,20,20,10,30,40,10]
    //output: 2,3,4,3
    int arr[]={10,20,20,10,30,40,10};
    int k=4;
    countDistinctElementInEveryWindow(arr,7,k);
    return 0;
}

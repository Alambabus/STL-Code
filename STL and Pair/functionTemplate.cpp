#include<iostream>
using namespace std;
template <typename T>
/*T myMax(T a,T b)
{
    return a>b?a:b;
}*/
T maxElementFromArray(T arr[],T n)
{
    T maxi=INT_MIN;
    for(int i=0;i<n;i++)
        if(arr[i]>maxi)maxi=arr[i];
    return maxi;
}
int main()
{
  /*  cout<<myMax<int>(10,20)<<endl;
    cout<<myMax<char>('c','a')<<endl;
    cout<<myMax<float>(12.9,12.1)<<endl;*/

    int arr1[]={10,40,3};
    cout<<maxElementFromArray<int>(arr1,3)<<endl;
    float arr2[]={10.5,3.5,1.5};
    cout<<maxElementFromArray<float>(arr2,3);
    return 0;
}

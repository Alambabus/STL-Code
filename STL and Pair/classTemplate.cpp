#include<iostream>
using namespace std;
template <class T>
struct Pair
{
    T x,y;
    Pair(T i,T j)
    {
        x=i;
        y=j;
    }
    T getFirst()
    {
        return x;
    }
    T getSecond()
    {
        return y;
    }
};
int main()
{
    Pair<int>p(10,20);
    cout<<p.getFirst()<<"  "<<p.getSecond();
    return 0;
}


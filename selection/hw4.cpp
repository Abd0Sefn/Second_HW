#include<iostream>
using namespace std;
int main()
{
    int x, n1, n2, n3, n4, n5, count=0;
    cin>>x>>n1>>n2>>n3>>n4>>n5;
    if(n1<x)
    count++;
     if(n2<x)
    count++;
     if(n3<x)
    count++;
     if(n4<x)
    count++;
     if(n5<x)
    count++;
    cout<<count<<" "<<5-count;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,tmp=-1;
    cin>>a>>b>>c;
    if(a<100&&a>tmp)
    tmp = a;
    else if (b<100&&b>tmp)
    tmp = b;
    else if (c<100&&c>tmp)
    tmp = c;
    cout<<tmp;
    return 0;
}
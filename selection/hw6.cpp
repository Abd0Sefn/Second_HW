#include<iostream>
using namespace std;
int main()
{
    int count, result, a;
    cin>>count>>result;
    count--;
    if(count>0) {count--; cin>>a; if(a>result) result=a;}
    if(count>0) {count--; cin>>a; if(a>result) result=a;}
    if(count>0) {count--; cin>>a; if(a>result) result=a;}
    if(count>0) {count--; cin>>a; if(a>result) result=a;}
    if(count>0) {count--; cin>>a; if(a>result) result=a;}
    if(count>0) {count--; cin>>a; if(a>result) result=a;}
    if(count>0) {count--; cin>>a; if(a>result) result=a;}
    if(count>0) {count--; cin>>a; if(a>result) result=a;}
    if(count>0) {count--; cin>>a; if(a>result) result=a;}
    cout<<result;
    return 0;
}
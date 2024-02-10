#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s == "NO" || s == "No" || s == "nO" || s == "no" || s == "ON" || s == "On" || s == "oN" || s == "on"){
            cout << s << " ";
        }
    }
    return 0;
}
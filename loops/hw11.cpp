#include<iostream>
using namespace std;
int main(){
    int n, cnt = 1, r = 0;
    cin >> n;
    int i = n;
    while(n != 0){
        cnt *= 10;
        n /= 10;
    }
    while(i != 0){
        r += cnt*(i % 10)/10;
        i /= 10;
        cnt /= 10;
    }
    cout << r << " ";
    cout << 3*r;
    return 0;
}
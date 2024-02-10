#include<iostream>
using namespace std;
int main(){
    int n = 4, i = 4;
    while(n){
        i = 4;
        while(i){
            cout << 5-n << " x "<< 5-i <<" = " << (5-n)*(5-i) << endl;
            i--;
        }
        n--;
    }
    return 0;
}
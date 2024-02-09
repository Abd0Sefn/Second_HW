#include<iostream>
using namespace std;
int main(){
    int n = 1, i;
    while(n<=5){
        i=1;
        while(i <= n){
            cout << '*';
            i++;
        }
        cout << "\n";
        n++;
    }
    return 0;
}
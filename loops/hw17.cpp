#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool is_prime = 1;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0 || n == 1){
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1){
        cout << "YES";
    }
    else
    cout << "NO";
    return 0;
}
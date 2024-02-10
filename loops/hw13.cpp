#include<iostream>
using namespace std;
int main(){
    int t, n, x, val, sum, i, k;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        i = 1;
        while(i <= n){
            cin >> x;
            k = i;
            val = 1;
            while(k--){
                val *= x;
            } 
            sum += val;
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int i=1, n, x, sum_even=0, sum_odd=0, odd_cnt=0, even_cnt=0;
    cin >> n;
    while(i <= n){
        cin >> x;
        if(i%2==0){
            sum_even += x;
            even_cnt++;
        }
        else{
            sum_odd += x;
            odd_cnt++;
        }
        i++;
    }
    cout << sum_odd/odd_cnt << " " << sum_even/even_cnt;
    return 0;
}
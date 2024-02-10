#include<iostream>
using namespace std;
int main(){
    int cnt = 1;
    for(int i = 1; i <= 200; i++){
        for(int j = 1; j <= 200; j++){
            for(int k = 1; k <= 200; k++){
                
                    if(i + k == j + 200 - i){
                        cnt ++;
                    }
                }
            }
        }
    cout << cnt;
    return 0;
}
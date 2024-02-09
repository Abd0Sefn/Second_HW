#include <iostream>
using namespace std;
int main(){
    int n, i = 1, j = 0;
    cin >> n;
    while(true){
        if(i % 3 == 0 && i % 4 != 0){
            cout << i <<" ";
            j++;
        }
        if(j == n)
        break;
        i++;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int i=1, j;
    while(i <= 6){
        j = 1;
        while(j<=7-i){
            cout << '*';
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}
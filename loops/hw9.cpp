#include <iostream>
using namespace std;
int main(){
    int t, i=1, n, j, x, min;
    cin >> t;
    while(i <= t){
        cin >> n;
        cin >> min;
        j = 1;
        while(j < n){
            cin >> x;
            if(x < min)
                 min = x;
            j++;
        }
        cout << min << endl;
        i++;
    }
    return 0;
}
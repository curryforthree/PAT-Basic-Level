#include <iostream>
using namespace std;


int main() {
    int n, a1, a2, b1, b2, res1 = 0, res2 = 0;
    bool flag1, flag2;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a1 >> a2 >> b1 >> b2;
        if(a2 == a1 + b1){
            flag1 = true;
        } else{
            flag1 = false;
        }
        if(b2 == a1 + b1){
            flag2 = true;
        } else{
            flag2 = false;
        }
        if(flag1 != flag2){
            if(flag1){
                res2++;
            } else{
                res1++;
            }
        }
    }
    cout << res1 << " " << res2 << endl;
    return 0;
}
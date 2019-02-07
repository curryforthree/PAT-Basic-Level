#include <iostream>
using namespace std;

int main() {
    int n, a, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5= 0;
    int sgn = 1, cnt4 = 0, flag = false;
    double res4;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if(a % 5 == 0){
            if( a % 2 == 0){
                a1 += a;
            }
        }else if(a % 5 == 1){
            flag = true;
            a2 += sgn * a;
            sgn = -sgn;
        } else if(a % 5 == 2){
            a3++;
        }else if(a % 5 == 3){
            a4 += a;
            cnt4++;
        }else{
            if(a > a5)
                a5 = a;
        }
    }
    res4 = a4 * 1.0 / cnt4;
    printf(a1 == 0 ? "N " : "%d ", a1);
    printf( !flag ? "N " : "%d ", a2);
    printf(a3 == 0 ? "N " : "%d ", a3);
    printf(a4 == 0 ? "N " : "%.1f ", res4);
    printf(a5 == 0 ? "N\n" : "%d\n", a5);
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int a, cnt = 0;
    cin >> a;
    while(a != 1){
        if(a % 2 == 0)  a /= 2;
        else    a = (3 * a + 1) / 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}
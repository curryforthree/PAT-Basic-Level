#include <iostream>
using namespace std;

int main() {
    int a, b, T, hh, mm, ss;
    cin >> a >> b;
    T = b - a;
    if(T % 100 >= 50){
        T = T / 100 + 1;
    }else{
        T /= 100;
    }
    hh = T / 3600;
    T %= 3600;
    mm = T / 60;
    ss = T % 60;
    printf("%02d:%02d:%02d\n", hh, mm, ss);
    return 0;
}
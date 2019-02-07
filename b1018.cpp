#include <iostream>
#include <map>
using namespace std;
map<char, int> A, B;
int main() {
    int n;
    char a, b;
    int Awin = 0, Atie = 0, Alose = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if(a == b){
            Atie++;
        }else if(a == 'C'){
            if(b == 'B'){
                Alose++;
                B[b]++;
            }else{
                Awin++;
                A[a]++;
            }
        }else if(a == 'J'){
            if(b == 'C'){
                Alose++;
                B[b]++;
            }else{
                Awin++;
                A[a]++;
            }
        }else if(a == 'B'){
            if(b == 'J'){
                Alose++;
                B[b]++;
            }else{
                Awin++;
                A[a]++;
            }
        }
    }
    printf("%d %d %d\n%d %d %d\n", Awin, Atie, Alose, Alose, Atie, Awin);
    int maxCnt = -1;
    for (auto it = A.begin(); it != A.end(); it++){
        if(it->second > maxCnt){
            maxCnt = it->second;
            a = it->first;
        }
    }
    maxCnt = -1;
    for (auto it = B.begin(); it != B.end(); it++){
        if(it->second > maxCnt){
            maxCnt = it->second;
            b = it->first;
        }
    }
    printf("%c %c\n", a, b);
    return 0;
}
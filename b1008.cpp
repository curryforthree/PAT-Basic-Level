#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, printed = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int finalMove = m % n;
    for (int i = n - finalMove; i < n; ++i){
        cout << v[i];
        printed++;
        if(printed != n) printf(" ");
        else printf("\n");
    }
    for (int i = 0; i < n - finalMove; ++i){
        cout << v[i];
        printed++;
        if(printed != n) printf(" ");
        else printf("\n");
    }
    return 0;
}
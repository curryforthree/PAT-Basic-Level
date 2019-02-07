#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b, Pa, Pb;
    int Da, Db;
    cin >> a >> Da >> b >> Db;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i] == Da + '0'){
            Pa = Pa + to_string(Da);
        }
    }
    for (int i = 0; i < b.size(); ++i) {
        if(b[i] == Db + '0'){
            Pb = Pb + to_string(Db);
        }
    }
    if(Pb == ""){
        Pb = "0";
    }
    if(Pa == ""){
        Pa = "0";
    }
    cout << stoi(Pb) + stoi(Pa) << endl;
    return 0;
}
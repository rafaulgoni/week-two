#include <bits/stdc++.h> 
using namespace std;

int main() {

    float s, a, k;
    cin >> s >> a >> k;
    float ans = (s / a) * k;
    cout << ans << " Kg" << endl;

    float ansOne = (k / s);
    cout << ansOne << " Kg" << endl;

    int g = 1000;
    int ansTwo = (g * ans);
    cout << ansTwo << " Gram" << endl;

    return 0;
}


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


// This C code...
// #include <stdio.h>

// int main() {
//     float s, a, k;
//     scanf("%f %f %f", &s, &a, &k);
    
//     float ans = (s / a) * k;
//     printf("%.2f Kg\n", ans);
    
//     float ansOne = (k / s);
//     printf("%.2f Kg\n", ansOne);
    
//     int g = 1000;
//     int ansTwo = (int)(g * ans);
//     printf("%d Gram\n", ansTwo);

//     return 0;
// }


// This JavaScript code...
// function calculate(s, a, k) {
//     let ans = (s / a) * k;
//     console.log(ans.toFixed(2) + " Kg");

//     let ansOne = (k / s);
//     console.log(ansOne.toFixed(2) + " Kg");

//     let g = 1000;
//     let ansTwo = Math.round(g * ans);
//     console.log(ansTwo + " Gram");
// }

// let s = 16;
// let a = 100;
// let k = 8;
// calculate(s, a, k);

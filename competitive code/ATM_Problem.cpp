#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINEJUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int amount;
    float balance, rem_bal;

    cin >> amount;
    cin >> balance;

    if(amount % 5 == 0 && amount + 0.5 <= balance) {
        rem_bal = balance - amount - 0.5;
        cout << fixed << setprecision(2) << rem_bal << endl;
    } else {
        cout << fixed << setprecision(2) << balance << endl;
    }

    return 0;
}

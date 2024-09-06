#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINEJUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    float temperature = 25.5;

    float celsius = temperature;
    cout <<"Celsius -"<< celsius << endl;

    float kelvin = 273 + celsius;
    cout <<"Kelvin -"<< kelvin << endl;


    return 0;
}

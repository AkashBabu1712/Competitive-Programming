/*

Find Remainder Problem Code: FLOW002

All submissions for this problem are available.
Write a program to find the remainder when two given numbers are
divided.

Input

The first line contains an integer T, total number of test cases. Then follow
T lines, each line contains two Integers A and B.

Output

Find remainder when A is divided by B.

Constraints
 - 1 ≤T ≤ 1000
 - 1 ≤ A,B ≤ 10000

Example
Input
3
1 2
100 200
10 40

output


*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINEJUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T; cin>>T;

    for(int i = 0; i<T; i++)
    {
    	int a, b; cin>>a>>b;

    	cout<<a%b<<endl;
    }
}

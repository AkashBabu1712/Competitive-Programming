/* 
Sum of Digits Problem Code: FLOW006

All submissions for this problem are available.
You're given an integer N. Write a program to calculate the sum of all
the digits of N.

Input

The first line contains an integer T, total number of testcases. Then
follow T lines, each line contains an integer N.

OutputCalculate the sum of digits of N.

Constraints:
- 1 ≤T ≤ 1000
- 1 ≤N ≤ 1000000

Example
Input
3
12345
31203
2123

Output
15
9
8


*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    #ifndef ONLINEJUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // passes the testcases
    int T; 
    cin>> T;

    //taking numbers from the as per length
    while(T--)
    {
        int n;
        cin>>n;

        ostringstream str1;
        str1<<n;
        string s = str1.str(); //string of numbers

        long long sum = 0;

        //calculate length of string
        int len = s.length();
        for(int i=0; i<len; i++)
        {
            char x = s[i];
            int p = x;
            p = p-48; //from ASCII 48 = 0

            sum = sum+p;
        }

        cout<<sum<<endl;
    }



}
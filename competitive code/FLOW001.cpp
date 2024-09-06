/*
Add Two Numbers Problem Code: FLOW001

All submissions for this problem are available.
Shivam is the youngest programmer in the world, he is just 12 years old.
Shivam is learning programming and today he is writing his first program.

Program is very simple, Given two integers A and B, write a program to
add these two numbers.

Input

The first line contains an integer T, total number of test cases. Then follow
T lines, each line contains two Integers A and B.

Output

Add A and B and display it.

Constraints

Constraints

1 ≤T ≤ 1000
1 ≤ A,B ≤ 10000

Example

Input
3
1 2
100 200
10 40

Output
3
300
50

*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    #ifndef ONLINEJUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t,a,b;
    cin>>t;

    for(int i=0; i<t; i++)
    {
    	cin>>a>>b;
    	// t = a+b;
    	// cout<<t<<endl;
/*
Potential Issue of above 2 lines:
The variable t is used for both the number of test cases and the sum of a and b. This leads to incorrect behavior because the value of t gets overwritten in the first iteration, causing an unintended number of iterations in the loop.

*/
    	cout<<a+b<<endl;
    }

return 0;
    

}
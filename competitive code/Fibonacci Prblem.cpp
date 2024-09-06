/*Asked in JP Morgan

The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. It is often used in algorithm examples, and is defined by the following formula: F(n) = F(n-1) + F(n-2), with F(0) = 0 and F(1) = 1.

Your task is to implement the Fibonacci algorithm in three different methods: 
	1. Recursively 
	2. Iteratively 
	3. Using Memoization

Example 1:

Input:

n = 5
Output:

fibonacci(n) -> 5
Example 2:

Input:

n = 10
Output:

fibonacci(n) -> 55
The Fibonacci sequence starts as follows: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55…
*/
 
#include <bits/stdc++.h> 
using namespace std; 
  
//Recursion
// int fib(int n) 
// { 
//     if (n <= 1) 
//         return n; 
//     return fib(n - 1) + fib(n - 2); 
// }

// iteratively
int printFibonacci(int n) {
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    //cout << endl;
} 
  

//Using Memoization





int main() 
{ 
    #ifndef ONLINEJUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; 
    cin>>n;
    cout << printFibonacci(n); 
    getchar(); 
    return 0; 
} 

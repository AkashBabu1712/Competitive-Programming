#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int s = 43;
	int p;

	//conversion int to character
	char x;
	x = (char)s;

	cout<<x<< endl;

	//conversion char to integer
	char y = 'F';
	p = (int)y;

	cout<<p<< endl;

	//conversion from int to String
	int n = 2345;
	ostringstream str1;

	//sending string into integer ostringstream
	str1<<n;

	//declare string variables
	string S = str1.str();

	cout<<"Our new string:"<<S<<endl;
	cout<<S[0]<<endl<<S[3];
	

}
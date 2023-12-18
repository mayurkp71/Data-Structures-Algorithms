#include<bits/stdc++.h>
using namespace std;



int countDigit(int n)
{
	int count = 0;
	string x = to_string(n);

	return x.length();
}



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;

	cout << "Enter the number:";

	cin >> n;

	cout << "The number of digits in 	" << n << "   is " << countDigit(n);

	return 0;
}


//Time complexity=O(1)
//Space complexity=O(1)
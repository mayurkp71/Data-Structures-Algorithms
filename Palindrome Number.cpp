#include<bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;	cin >> n;
	int num = n;					//num has the original inputed number.
	int rev = 0;

	while (n != 0)
	{
		int digit = n % 10;			//Saperate the last digit	i.e.113--->3.
		rev = rev * 10 + digit;		//Build the number from the digits.
		n = n / 10;					//To reduce the number by 1 digits	i.e.113/10--->11.
	}

	if (num == rev)					//if the original number and the reversed numbers gets matched then the number is says to be palindrome number
		cout << num << " is palindrome number.";
	else
		cout << num << " is not palindrome number.";

	return 0;
}



//Time complexity=O(N)
//Space complexity=O(1)
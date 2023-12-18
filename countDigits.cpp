#include<bits/stdc++.h>
using namespace std;



int countDigit(int n)
{
	int x = n, count = 0;
	while (x != 0)
	{
		x = x / 10;		//Reduce the number by 1 digits		i.e.113/10--->11.

		count++;		//Count increaments after the one successful completion of the process.

	}

	return count;
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


//Time complexity=O(N)
//Space complexity=O(1)
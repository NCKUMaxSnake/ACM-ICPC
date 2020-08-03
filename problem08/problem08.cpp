#include<iostream>
using namespace std;
int main()
{
	int t,k;
	long long int n;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> n >> k;

		if(n < k || (n % 2 == 1 && k % 2 == 0))
			cout << "NO" << endl;
		else if(n % 2 == 0 && k % 2 == 1)
		{
			if(n < k * 2)
				cout << "NO" << endl;
			else
			{
				cout << "YES" << endl;
				while(k > 1)
				{
					cout << "2" << " ";
					n -= 2;
					k--;
				}
				cout << n << endl;
				//cout << "YES" << endl;
			}
		}
		else if(n % 2 == 1 && k % 2 == 1)
		{
			cout << "YES" << endl;
			while(k > 1)
			{
				cout << "1" << " ";
				n -= 1;
				k--;
			}
			cout << n << endl;
			//cout << "YES" << endl;
		}
		else if(n % 2 == 0 && k % 2 == 0)
		{
			cout << "YES" << endl;
			while(k > 1)
			{
				cout << "1" << " ";
				n -= 1;
				k--;
			}
			cout << n << endl;
			//cout << "YES" << endl;
		}
	}
	return 0;
}

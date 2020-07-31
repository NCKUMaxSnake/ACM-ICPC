#include<iostream>
using namespace std;
int main()
{
	int N;
	int result[10]={0};
	cin >> N;
	
	if(N == 1)
		cout << 1 << endl;
	else
	{
		for(int i = 9; i > 1; i--)
		{
			while(N % i == 0)
			{
				result[i]++;
				N /= i;
			}
		}
		if(N == 1)
		{
			for(int j = 2; j <= 9; j++)
			while(result[j] > 0)
			{
				result[j]--;
				cout << j;
			}
			cout << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
}

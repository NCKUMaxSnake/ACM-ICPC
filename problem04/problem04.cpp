#include<iostream>
using namespace std;
int main()
{
	long int N, k, x, answer;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> k >> x;
		answer = x + (k - 1) * 9;
		cout << answer << endl;
	}
	return 0;
}

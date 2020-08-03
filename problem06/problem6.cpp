#include<iostream>
using namespace std;
int main()
{
	int N,K;
	char str[100000];
	/*char letter[26] = {'A','B','C','D','E','F','G','H',
					'I','J','K','L','M','N','O','P',
					'Q','R','S','T','U','V','W','X',
					'Y','Z'};*/
	int letter[26]={0};
	cin >> N >> K;
	cin >> str;

	int min = 100000;

	for(int i = 0; i < N; i++)
	{
		letter[(int)str[i] - 65]++;
	}

	for(int j = 0; j < K; j++)
	{
		if(letter[j] < min)
			min = letter[j];
	}
	cout << min*K << endl;

	return 0;
}

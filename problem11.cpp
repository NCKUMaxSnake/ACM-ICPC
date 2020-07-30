#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, m, a[100], max = 0; //1<=N,a[i]<=100,1<=m<=10000;
	cin >> N >> m;
	
    for(int i = 0; i < N; i++)
	{
		cin >> a[i];
		if(a[i] > max)
			max = a[i];
    }

	int diff = 0;
	for(int i = 0; i < N; i++)
	{
		diff += max - a[i];
	}

	if(diff >= m)
		cout<< max << endl;
	else
	{
		m -= diff;
		max += m / N;
		max = m % N?max+1:max;
		cout << max << endl;
	}
	return 0;
}

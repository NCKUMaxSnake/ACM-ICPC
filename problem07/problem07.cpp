#include<iostream>
using namespace std;
int main()
{
	int N;
	char str1[3000];
	char str2[3000];
	int dp1[3001] = {0};
	int dp2[3001] = {0};
	cin >> N;
	cin >> str1;
	cin >> str2;
	for(int i = 0; i < N; i++)
	{
		for(int l = 0; l < N; l++)		
			dp2[l] = dp1[l];
		for(int j = 0; j < N; j++)
		{
			if(str1[i] == str2[j])
			{
				if(i == 0 || j == 0)
					dp1[j] = 1;
				else
					dp1[j] = dp2[j-1] + 1;
			}
			else
			{
				//if(j == 0)
				//	dp2[j+1] = dp1[j+1];
				//else
				//	dp2[j+1] = dp2[j];
        		if(i == 0 || j == 0)
        		{
   			    	if(i == 0 && j == 0)
						dp1[j] = 0;
  					else if(i == 0)
						dp1[j] = dp1[j-1];
  					else if(j == 0)
						dp1[j] = dp2[j];
  				}
			  	else dp1[j] = max(dp1[j-1],dp2[j]);											
			}
		}

		//for(int l = 0; l < N+1; l++)
		//	cout << dp1[l];
		//cout << " ";
		//for(int l = 0; l < N+1; l++)
		//	cout << dp2[l];
		//cout << endl;
	}

	cout << dp1[N-1] << endl;

	return 0;
}

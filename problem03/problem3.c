#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N,k;
    int sol[1010][1010];
    scanf("%d %d",&N,&k);

    sol[0][0]=sol[1][1]=sol[2][1]=1;
	
    int i, j;
    for(i = 2; i <= N; i++)
        for(j = 2; j <= min(k,i); j++)
	    sol[i][j] = (sol[i-1][j-1] + sol[i-2][j-1])%1000000009;
			
    int sum = 0;
    for(j = 0; j <= k; j++)
        sum = (sum + sol[N][j]) % 1000000009;
	
    printf("%d", sum);
    return 0;	
} 

int min(int a, int b)
{
    if( a < b)
	return a;
    else
	return b;
}

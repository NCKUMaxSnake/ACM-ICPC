#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    
    int array[n];
    int xorA[n];
    
    int a[m];
    int b[m];

    int i = 0;
    for(i = 0; i < n; i++)
        scanf("%d",&array[i]);
        
    xorA[0] = array[0];
    int xoresult = array[0];
    int xstart;
    for(xstart = 1; xstart < n; xstart++)
    {
        xoresult = xoresult ^ array[xstart];
        xorA[xstart] = xoresult;
    }
    
    int result = 0;
    int j = 0;
    for(j = 0; j < m; j++)
    {
        scanf("%d %d",&a[j],&b[j]);

        if(a[j]-2 == -1)
            result = xorA[b[j]-1];
        else 
            result = xorA[b[j]-1] ^ xorA[a[j]-2];

        printf("%d\n",result);
    }
    
    return 0;
} 
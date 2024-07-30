#include <stdio.h>
#include <stdlib.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    int n,w[10],v[10],W,i,j,V[10][10],x[10]={0};
    printf("Read the number of objects:");
    scanf("%d",&n);
    printf("\n Read the weights of the objects\n");
    for(i=1;i<=n;i++)
        scanf("%d",&w[i]);
    printf("\n Read the profits of the objects\n");
    for(i=1;i<=n;i++)
        scanf("%d",&v[i]);
    printf("\n Read knapsack capacity:");
    scanf("%d",&W);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0 || j==0)
                V[i][j]=0;
            else if(j<w[i])
                V[i][j]=V[i-1][j];
            else
                V[i][j]=max(V[i-1][j],V[i-1][j-w[i]]+v[i]);
                printf("%d ",V[i][j]);
        }
        printf("\n");
    }
    printf("\n the max profit is %d",V[n][W]);
    i=n;
    j=W;
    while(i!=0 && j!=0)
    {
        if(V[i][j]!=V[i-1][j])
        {
            x[i]=1;
            j=j-w[i];
        }
        i--;
    }
    printf("objects included are\n");
    for(i=1;i<=n;i++)
    {
        if(x[i]==1)
            printf("\n %d objects is included",i)
    }
return 0;
}

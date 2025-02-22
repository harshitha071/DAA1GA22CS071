#include <stdio.h>
#include <stdlib.h>
void bfs(int a[10][10],int n,int visited[10],int source)
{
    int q[10],rear=-1,front=0,del,i;
    visited[source]=1;
    q[++rear]=source;
    while(front<=rear)
    {
        del=q[front++];
        for(i=1;i<=n;i++)
        {
            if(a[del][i]==1 && visited[i]==0)
            {
                q[++rear]=i;
                visited[i]=1;
            }
        }
    }
}
int main()
{
    int n,a[10][10],i,j,visited[10],count=0;
    printf("\n read number of nodes");
    scanf("%d",&n);
    printf("\n read adjacent matrix \n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    for(i=1;i<=n;i++)
        visited[i]=0;
    for(i=1;i<n;i++)
    {
        if(visited[i]==0)
        {
            bfs(a,n,visited,i);
            count++;
        }
    }
    if(count==1)
        printf("\n graph connected %d component");
        else
        printf("\n graph not connected %d component");
        return 0;
}

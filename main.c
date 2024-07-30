#include <stdio.h>
#include <stdlib.h>
int count=0;
void Insertionsort(int A[1000],int n)
{
    int i,j,item;
    for(i=1;i<=n-1;i++)
    {

        item=A[i];
        j=i-1;
        while(j>=0 && A[j]>item)
        {
            count++;
            A[j+1]=A[j];
            j=j-1;
        }
        count++;
        A[j+1]=item;
    }

}
int main()
{
    int A[1000],n,i,j;
    printf("\n Read the number of elements:");
    scanf("%d",&n);
    printf("\n Read the elements\n");
    for(i=0;i<n;i++)
        A[i]=rand()%100;
    Insertionsort(A,n);
    printf("\n Elements after sorting\n");
    for(i=0;i<n;i++)
        printf("%d\n",A[i]);
    printf("\n Number of times the basic operation gets executesd is %d \n",count);
    return 0;

}



#include <stdio.h>
#include <stdlib.h>
# define size 100
int count;
void selectionsort (int A[size],int n)
{
    int i,j,temp,min;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            count++;
            if(A[j]<A[min])
            {
                min=j;
            }
        }
    }
     temp=A[i];
     A[i]=A[min];
     A[min]=temp;
}
int main()
{
    int i,A[size],n;
    printf("\n Read array size");
    scanf("%d",&n);
    printf("\n read elements");
    for(i=0;i<=n-1;i++)
       scanf("%d",&A[i]);
    selectionsort(A,n);
    printf("\n Sorted array elements");
    for(i=0;i<=n-1;i++)
        printf("%d",A[i]);
        printf());
        return 0;
}


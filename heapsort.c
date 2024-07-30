#include <stdio.h>
#include <stdlib.h>
int count;
void heapcon(int a[20],int n)
{
    int i,k,v,flag,j;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        v=a[k];
        flag=0;
        while(!flag && (2*k<=n))
        {
            j=2*k;
            if(j<n)
                if(a[j]<a[j+1])
            {
                j=j+1;
            }
            count++;
            if(v>=a[j])
                flag=1;
            else
            {
                a[k]=a[j];
                k=j;

            }
        }
            a[k]=v;
        }
}
void heapsort(int a[20],int n)
{
    int i,j,temp;
    for(i=n;i>=1;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        heapcon(a,i-1);
    }
}
void main()
{
    int a[20],n,i,j;
    printf("\n enter the number of elements to be sorted:\n");
    scanf("%d",&n);
    printf("\n Enter the elements to be sorted\n");

    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    heapcon(a,n);
    heapsort(a,n);
    printf("\n Elements after sorting\t ");
    for(i=1;i<=n;i++)
        printf("\t%d",a[i]);
    printf("\n Number of counts :%d\n",count);
    return 0;
}









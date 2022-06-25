#include<stdio.h>
#define MAX 100

int main()
{
    int flag=0;
    int t ,A[MAX] ,n;
    printf("Enter the test cases :");
    scanf("%d",&t);
    while(t)
    {
        int i=0 ,j=0 ,k=0;
        printf("\nEnter the size of the array :");
        scanf("%d",&n);
        printf("Enter the elements in the array :");
        for(int i=0 ;i< n ;i++)
        {

            scanf("%d",&A[i]);
        }

        for(i=0 ;i<n-2 ;i++)
        {
            for(j=i+1 ;j<n-1 ;j++)
            {
                for(k=j+1 ;k<n ;k++)
                {
                    if(A[i]+A[j]==A[k])
                    {
                        printf("\nIndices :%d\t%d\t%d",i ,j ,k);
                        flag=1;
                        break;
                    }
                }
            }
        }
        t=t-1;

    }
    if(flag==0)
    {
        printf("No sequence found");
    }
    return 0;

}

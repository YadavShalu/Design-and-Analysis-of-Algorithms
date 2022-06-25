#include<stdio.h>
#define MAX 100
void selection_sort(int A[] ,int n)
{
    int i ,j ,pos=0 ,min=0;
    int swaps=0  ,comparisons=0;
    for(i=0 ;i<n-1 ;i++)
    {

        pos=i;
        for(j=i+1 ;j<n ;j++)
        {

            if(A[pos]>A[j])
            {

               // min=A[j];
                pos=j;

            }
            comparisons++;
        }
        if(pos!=i)
        {
            int temp=A[pos];
            A[pos]=A[i];
            A[i]=temp;

        }
        swaps++;
    }
    printf("Sorted array :");
    for(int i =0 ;i< n;i++)
    {
        printf("%d\t",A[i]);

    }
    printf("Total swaps %d and total comparisons %d",swaps ,comparisons);
}
int main()
{

    int t ,n ,A[MAX];
    printf("Enter the number of test cases :");
    scanf("%d",&t);
    while(t--)
    {
        printf("Enter the size of the array :");
        scanf("%d",&n);
        printf("Enter the array elements :");
        for(int i=0 ;i<n ;i++)
        {

            scanf("%d",&A[i]);
        }
        selection_sort(A,n);

    }
return 0;
}

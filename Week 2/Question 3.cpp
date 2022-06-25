#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 100
void sort(int A[],int n)
{
    for(int i=0 ;i<=n ;i++)
    {
        for(int j=0 ;j<n ;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int count_difference(int A[],int key,int n)
{
    int count=0;
    for(int i=0 ;i<n ;i++)
    {
        for(int j=i+1;j<n ;j++)
        {
            if(A[j]-A[i]==key)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int t;
    int key;
    int count=0;
    int A[MAX],n;
    printf("Enter the test case :");
    scanf("%d",&t);
    while(t--)
    {

        printf("Enter the size :");
        scanf("%d",&n);
        printf("Enter the elements in the array :");
        for(int i=0 ;i< n ;i++)
        {

            scanf("%d",&A[i]);
        }
        printf("Enter the key value :");
        scanf("%d",&key);
        sort(A,n);

         count=count_difference(A,key ,n);
        printf("\nTotal count %d",count);
    }
    if(!count)
    {
        printf("No pair found");
    }
    return 0;
}

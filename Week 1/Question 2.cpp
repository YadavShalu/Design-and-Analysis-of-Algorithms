#include<stdio.h>
#define MAX 100
void binary_search(int A[], int lb, int ub ,int key)
{
    int comparisons =0;
    int flag=0;
    while(lb<ub)
    {
        int mid=(lb+ub)/2;
        if(A[mid]==key)
        {
            comparisons++;
            printf("Element is found at position %d",mid+1);
            printf("/nTotal comparisons :%d",comparisons);
            flag=1;
            break;
        }
        if(A[mid]>key)
        {
            comparisons++;
            ub=mid;
        }
        if(A[mid]<key)
        {
            comparisons++;
            lb=mid+1;
        }
    }
    if(flag==0)
    {
        printf("Element not found");
        printf("\nTotal comparisons :%d",comparisons);
    }
}
int main()
{
   int key;
     int A[MAX],n;
     int t;
     scanf("%d",&t);
     while(t--)
     {
     printf("\nEnter the size of the array :");
     scanf("%d",&n);
     printf("Enter the elements in the array :");
     for(int i=0 ;i<n ;i++)
     {

         scanf("%d",&A[i]);
     }
     printf("Enter the key:");
     scanf("%d",&key);
    binary_search(A,0,n,key);
     }
}

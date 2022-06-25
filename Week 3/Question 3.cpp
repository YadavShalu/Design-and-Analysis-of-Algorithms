#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100
void find_duplicate(int A[] ,int lb ,int ub);
void merge(int A[] ,int lb ,int mid ,int ub);
void merge_sort(int A[] ,int lb ,int ub);
void find_duplicate(int A[] ,int lb ,int ub)
{
    int flag=0;
    while(lb<=ub)
    {
        int mid=(lb+ub)/2;
       if( A[mid]==A[mid-1] || A[mid]==A[mid+1])
        {printf("Duplicate element found");
        flag=1;
        break;}
      else if((A[ub]+A[lb])/2==A[mid])
        lb=mid+1;

       else ub=mid-1;
    }
    if(flag==0)
    {
        printf("No duplicate element found");

    }
}
void merge(int A[] ,int lb ,int mid ,int ub)
{
    int n1=mid+1-lb;
    int n2=ub-mid;
    int L[MAX],R[MAX];

    for(int i=0 ;i<n1 ;i++)
        L[i]=A[i+lb];

    for(int j=0; j<n2 ;j++)
        R[j]=A[mid+1+j];

    int i=0 ,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[i])
        {
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        A[k]=L[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        A[k]=R[j];
        j++;
        k++;
    }
}
void merge_sort(int A[] ,int lb ,int ub)
{
    if(lb>=ub)
    {
       int  mid=(ub+lb)/2;
        merge_sort(A,lb,mid);
        merge_sort(A,mid+1 ,ub);
        merge(A ,lb ,mid ,ub);
    }
}
int main()
{
    int result,result2;
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

     merge_sort(A ,0 ,n-1);
   find_duplicate(A,0 ,n-1);
     }
     return 0;
}

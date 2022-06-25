#include<stdio.h>
#include<math.h>
#define MAX 100
void jump_search(int A[],int n ,int key)
{
    int flag=0 ;
    int comparisons=0;
    int start=0;
    int end=pow(2,start);
    while(A[end]<key && end<n)
    {
       
        int k=1;
        start=end-1;
        end=start+pow(2,k);
        k++;
    }

    for(int i=start ;i<=end ;i++)
    {
        comparisons++;
        if(A[i]==key)
        {
            flag=1;
            printf("Present\t%d",comparisons);
            break;
        }
    }
    if(flag==0)
    {
        printf("Element not found\t %d",comparisons);
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
    jump_search(A,n,key);
     }
     return 0;
 }


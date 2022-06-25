#include<stdio.h>
#define MAX 100
void linear_search(int A[],int n ,int key)
{
int comparisons =0;
int flag=0;
for(int i=0 ;i<n ;i++)
{
comparisons++;
if(A[i]==key)
{
flag=1;
printf("Element found at index %d",i+1);
break;
}
}
if(flag==0)
{
printf("Key not found");
}
printf("\nTotal comparisons :%d",comparisons);
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
linear_search(A,n,key);
}
}

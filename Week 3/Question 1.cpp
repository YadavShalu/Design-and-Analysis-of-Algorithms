#include<stdio.h>
#define MAX 100
 void insertion_sort(int A[] ,int n)
 {
     int comparisons=0 ,shifts=0;

     int i ,j ,temp;
     for(i=1 ;i<n ;i++)
     {
         temp=A[i];
         j=i-1;
            shifts++;
     while(j>=0 && temp<=A[j])
     {
         comparisons++;
         A[j+1]=A[j];
         j--;
         shifts++;
     }
     A[j+1]=temp;
     }
     printf("Sorted Array :");
     for(int i=0 ;i<n ;i++)
     {

         printf("%d\t",A[i]);
     }
     printf("\nTotal shifts %d and comparisons are %d",shifts ,comparisons);
 }
 int main()
 {

     int t ,n ,A[MAX];
     printf("Enter the test cases :");
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
         insertion_sort(A,n);
     }
 return 0;
 }

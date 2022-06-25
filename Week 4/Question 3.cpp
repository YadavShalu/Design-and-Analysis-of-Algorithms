#include<stdio.h>
#include<limits.h>
#define MAX 100
int kth(int A[] ,int lb, int ub ,int k)
{
    if(k>0 && k<=ub-lb+1)
    {
        int pos=partition(A,lb,ub);
        if((pos-lb)==k-1)return A[pos];

        if(pos-lb>k-1)
            return kth(A,lb ,pos-1 ,k);

        return kth(A,pos+1,ub ,k-pos+lb-1);
    }
    return INT_MAX;
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int A[], int lb, int ub)
{
    int x = A[ub], i = lb;
    for (int j = lb; j <= ub - 1; j++) {
        if (A[j] <= x) {
            swap(&A[i], &A[j]);
            i++;
        }
    }
    swap(&A[lb], &A[ub]);
    return i;
}
int main()
{
    int t ,n ,A[MAX];
    printf("Enter the test cases :");
    scanf("%d",&t);
    while(t--)
    {
        printf("Enter the size of the array :");
        scanf("%d",&n);
        printf("Enter the elements in the array :");
        for(int i=0 ;i<n ;i++)
        {
            scanf("%d",&A[i]);
        }
        int k;
        printf("Enter the kth element :");
        scanf("%d",&k);
        printf("%d",kth(A,0 ,n-1,k+1));
    }
    return 0;
}

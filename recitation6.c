#include <stdio.h>
#define bool int

void sort(int *, int, int);

int issumof2 (int A[], int arr_size, int sum)
{
    int  l, r ;
    sort (A, 0, arr_size-1);

    l = 0;
    r = arr_size-1;
    while (l <r)
    {
        if (A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            return 1;
        else
            r--;
    }
return 0;
}

int main()
{
    int A[] = {1,2,2,3,4,3,1};
    int n = 9;
    int arr_size = 7;

    if ( issumof2( A, arr_size, n))
        printf("The array has two elements with sum 9");
    else
        printf ("The array doesn't have two elements with sum 9");
    getchar();
    
	return 0;

}

void exchange(int *a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int inarray(int A[], int s, int n)
{
    int x = A[n];
    int i = (s - 1);
    int j;

    for (j = s; j <= n - 1; j++) {
        if (A[j] <= x) {
            i++;
            exchange(&A[i], &A[j]);
        }
 }
    exchange (&A[i + 1], &A[j]);
    return (i + 1);
        }
    void sort (int A[], int s, int n)
    {
        int p;
        if(s<n)
        {
            p = partition(A, s, n);
            sort(A, s, p - 1);
            sort(A, p + 1, n);
	}
     }

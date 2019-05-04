#include <iostream>
using namespace std;

void swqp(int *, int *);
void BubbleSort(int[], int);
void PrintArray(int[], int);

int main()
{
    int arr[] = {111, 100, 64, -34, 1, 25, -12, 22, 11, 90, 0, 11, 125, 13, 15, 2, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    printf("Sorted array: \n");
    PrintArray(arr, n);
    return 0;
}

void swap(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void BubbleSort(int v[], int n)
{
    int i, j;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
            if(v[j] > v[j+1])
                swap(&v[j], &v[j+1]);
}

void PrintArray(int *a, int size)
{
    for(int i=0; i<size-1; i++)
        cout << a[i] << endl;
}
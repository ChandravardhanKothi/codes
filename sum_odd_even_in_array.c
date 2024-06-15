// adding all the elements in an array
#include <stdio.h>

int add(int arr[], int n, int a);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int even = add(arr, n, 1);
    int odd = add(arr, n, 0);
    printf("the sum of odd is  : %d, sum of even is : %d", odd, even);
}

int add(int arr[], int n, int a)
{
    int sum = 0;
    for (int i = a; i < n; i = i + 2)
    {
        sum = sum + arr[i];
    }
    return sum;
}
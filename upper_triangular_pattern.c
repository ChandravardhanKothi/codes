#include <stdio.h>

void pattern(int n); // function declaration

int main()
{
    int n;
    scanf("%d", &n); // scan
    pattern(n);      // function call where n is actual parameter
}

void pattern(int n) // function defination
{
    int a = 1;
    for (int i = 0; i < n; i++)
    { // number of rows
        for (int j = 0; j <= i; j++)
        { // number of coloumns
            printf("* ");
        }
        printf("\n");
    }
}
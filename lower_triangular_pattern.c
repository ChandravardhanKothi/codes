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
    for (int i = n; i >= 0; i--)
    { // number of rows
        for (int j = i; j >= 0; j--)
        { // number of coloumns
            printf("* ");
        }
        printf("\n");
    }
}
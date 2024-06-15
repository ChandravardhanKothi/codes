#include <stdio.h>

void star_pattern(int n); // function declaration

int main()
{
    int n;
    scanf("%d", &n); // scan
    star_pattern(n); // function call where n is actual parameter
}

void star_pattern(int n) // function defination
{
    int a = n;
    for (int i = 0; i < n; i++)
    {
        // printf("",i);
        for (int space = a; space >= 0; --space)
        {
            printf("  ");
        }
        a--;
        for (int star = 0; star <= i + i; star++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
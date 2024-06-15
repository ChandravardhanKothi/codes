#include <stdio.h>
#include <math.h>

int convert(int a);
int reverse(int n);

int main()
{
    int binary, n;
    scanf("%d", &n);
    int x = convert(n);
    binary = reverse(x);
    printf("%d", binary);
}

int convert(int a)
{
    int num = a;
    int temp = a;
    int sum = 0;
    int reminder, quotent;
    while (temp >= 1)
    {
        // printf("%d\n",temp);
        quotent = temp % 2;
        reminder = temp / 2;
        sum = (sum * 10) + quotent;
        temp = reminder;
    }
    return sum;
}

int reverse(int n)
{
    int ac = n, x;
    int sum = 0;
    while (ac > 0)
    {
        x = ac % 10;
        ac = ac / 10;
        sum = sum * 10 + x;
    }
    return sum;
}

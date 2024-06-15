#include <stdio.h>
#include <math.h>

int reverse(int number);

int main()
{
    int n;
    scanf("%d", &n);
    int rev = reverse(n);
    printf("%d", rev);
}

int reverse(int number)
{
    int actual = number, x, y = 0, z, rev;

    while (actual > 0)
    {
        x = actual % 10;
        actual = actual / 10;
        y = (y * 10) + x;
    }
    return y;
}
#include <stdio.h>
#include <math.h>

int amstrong(int num);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        int res = amstrong(i);

        if (res == 7)
        {
            printf("%d\n", i);
        }
    }
}

int amstrong(int num)
{
    int length = 0, count = 0, sum = 0, x, y, z, an = num;

    while (an > 0)
    {
        an = an / 10;
        length++;
    }
    // printf("%d \n",length);

    an = num;

    for (int i = 0; i <= length; i++)
    {
        x = an % 10;
        an = an / 10;

        y = pow(x, length);
        sum = y + sum;
    }
    if (sum == num)
    {
        return 7;
    }
}
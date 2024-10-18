// 67070503437 Phurithip Paisanworajit
#include <stdio.h>

int gcd(int a, int b)
{

    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{
    int a, b;

    scanf("%d", &a);

    scanf("%d", &b);

    int result = gcd(a, b);
    printf("The GCD of %d and %d is %d\n", a, b, result);

    return 0;
}
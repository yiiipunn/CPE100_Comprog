//67070503437 Phurithip Paisanworajit
#include <stdio.h>

int ft_strlen(const char *str);

int main(void)
{
    char *s;

    scanf("%s", s);
    printf("%d", ft_strlen(s));
}

int ft_strlen(const char *str)
{
    const char *s = str;

    while (*s)
        s++;

    return s - str;
}
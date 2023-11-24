#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char switchChar(char n)
{
    if (n >= 97 && n <= 122)
        n -= 32;
    else if (n >= 65 && n <= 90)
        n += 32;
}
int main(void)
{
    char str[50];
    printf("Input> ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++)
        str[i] = switchChar(str[i]);
    printf("Output> %s \n", str);
    return 0;
}
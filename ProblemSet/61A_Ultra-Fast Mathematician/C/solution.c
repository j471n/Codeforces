// Date : 30 - Sep - 2020 By Jatin Sharma

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char a[105], b[105];
    scanf("%s", a);
    scanf("%s", b);

    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == '0' && b[i] == '0')
        {
            a[i] = '0';
        }
        else if (a[i] == '0' && b[i] == '1')
        {
            a[i] = '1';
        }
        else if (a[i] == '1' && b[i] == '0')
        {
            a[i] = '1';
        }
        else if (a[i] == '1' && b[i] == '1')
        {
            a[i] = '0';
        }
    }
    printf("%s\n", a);
    return 0;
}
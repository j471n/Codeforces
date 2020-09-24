#include <stdio.h>
#include <wctype.h>

int main()
{
    char s[1000];
    gets(s);
    s[0] = towupper(s[0]);
    printf("%s", s);
    return 0;
}
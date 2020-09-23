#include <stdio.h>
#include<string.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char opt[4];
        scanf("%s", opt);
        if ((opt[0] == '-' && opt[1] == '-') || (opt[1] == '-' && opt[2] == '-'))
            count--;
        if ((opt[0] == '+' && opt[1] == '+') || (opt[1] == '+' && opt[2] == '+'))
            count++;
    }
    printf("%d", count);

    return 0;
}
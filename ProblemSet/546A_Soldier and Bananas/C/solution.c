#include <stdio.h>


int main()
{
    int k, n, w;
    int result = 0;
    scanf("%d%d%d", &k, &n, &w);

    for (int i = 1; i < w + 1; i++)
    {
        result += k * i;
    }
    if (result > n)
    {
        printf("%d",result - n);
    }
    else
    {
        printf("0");
    }

    return 0;
}
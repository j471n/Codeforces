// Date : 28 - Sep - 2020 By Jatin Sharma

#include <stdio.h>

int main()
{
    int n, h, width = 0;
    scanf("%d%d", &n, &h);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
        if (a[i] <= h)
        {
            width++;
        }
        if (a[i] > h)
        {
            width += 2;
        }
    }

    printf("%d", width);
    return 0;
}
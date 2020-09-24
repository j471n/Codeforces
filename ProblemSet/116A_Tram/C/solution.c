#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int t = 0, passMax = 0;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        t -= a;
        t += b;

        if (t > passMax)
        {
            passMax = t;
        }
    }
    printf("%d", passMax);
}
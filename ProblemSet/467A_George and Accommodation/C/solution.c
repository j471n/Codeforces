// Date : 28 - Sep - 2020 By Jatin Sharma

#include <stdio.h>

int main()
{
    int rooms;
    scanf("%d", &rooms);
    int p, q;
    int count = 0;

    for (int i = 0; i < rooms; i++)
    {
       scanf("%d%d", &p, &q);
        if (q - p >= 2)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
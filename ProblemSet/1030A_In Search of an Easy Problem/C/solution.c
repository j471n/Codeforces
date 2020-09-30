// Date : 30-Sep-2020 By Jatin Sharma

#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int level;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &level);
        if (level == 1)
        {
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
    return 0;
    
}
// Date : 28-Sep-2020 By Jatin Sharma

#include<stdio.h>
#include<string.h>

int main(){
    int games, anton = 0 , danik = 0;
    scanf("%d", &games);
    char win[games];
    scanf("%s", win);
    for (int i = 0; i < strlen(win); i++)
    {
        if (win[i] == 'A'){
            anton++;
        }
        else if (win[i] == 'D')
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        printf("Anton");
    } else if (anton < danik)
    {
        printf("Danik");
    } else if (anton==danik) {
        printf("Friendship");
    }
    
    return 0;
    

}
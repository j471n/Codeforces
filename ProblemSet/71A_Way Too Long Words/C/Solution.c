#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
        {
		char word[100];
		scanf("%s", word);

		if (strlen(word) > 10)
		{
			printf("%c%d%c\n",word[0], (strlen(word)-2), word[strlen(word)-1]);
		}
		else {

			printf("%s\n", word);
		}

	}
	return 0;

}

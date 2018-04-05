//Name: Grecia Gonzalez
//Summary: This a program to find the words that have a specific character among
//the words of a string. Read a string and a character from the user and display
//all the words having that character on the screen
#include <stdio.h>
#include <string.h>

int main(){
	char str[100], k, kl, word[20];
	printf("Enter a sentence:\n");
	fgets(str, 100, stdin );
	printf("Enter a character:\n");
	scanf("%c", &k);
	kl = k;
	if(k >= 'A' && k <= 'Z') k += ('a' - 'A');
		printf("Words containing %c are:\n", kl);
	
	int i;
	for(i = 0; i < strlen(str); i++)
	{
		strcpy(word, "");
		int flag = 0;
		while(str[i] != ' ' && i < strlen(str))
		{
			sprintf(word, "%s%c", word, str[i]);
			if(str[i] >= 'A' && str[i] <= 'Z') str[i] += ('a' - 'A');
			if(str[i] == k) flag = 1;
			i++;
		}
		if(flag == 1) printf("%s\n", word);
	}
}



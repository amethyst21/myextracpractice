//Name : Grecia Gonzalez
//This program takes in a strong and reverse the string
#include <stdio.h>
#include <string.h>

 
void main()
{
   int i, j = 0, k = 0, x, length;
    char string[100], str[10][20], tmp;
    printf("Please enter the string to be reversed :");
    scanf("%[^\n]s", string);
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            str[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str[k][j]= string[i];
            j++;
        }
    }
    str[k][j] = '\0';

 //reverses each word of given string
    for (i = 0;i<= k;i++)
    {
        length = strlen(str[i]);
        for (j = 0, x = length - 1;j < x;j++,x--)
        {
            tmp = str[i][j];
            str[i][j] = str[i][x];
            str[i][x] = tmp;
        }
    }
    printf("Reveresed String:");
    for (i = 0;i <= k;i++)
    {
     
	printf("%s ", str[i]);
    }
}

#include <stdio.h> //struct pointer array
#include <stdlib.h>
#include <string.h>

#define MAX 30

struct word
{
	char name[20];
	char *meaning;
};

int main(void)
{
	struct word *dictionary[MAX]; //pointer of array to structure
	char inputted[200];
	int i = 0, j;
	
	while(1) //infinity loop
	{
		printf("Enter a word: "); //enter word
		gets(inputted);
		
		if(strcmp(inputted, "quit") == 0) break; //break, input quitd
		
		dictionary[i] = (struct word*)malloc(sizeof(struct word)); //dictionary[i] -> malloc
		if(dictionary == NULL) exit(1); //exception
		strcpy(dictionary[i]->name, inputted); //input dictionary_name
		
		printf("Enter a meaning of the word: "); //enter word
		gets(inputted);
		
		dictionary[i]->meaning = (struct word*)malloc(sizeof(char) * strlen(inputted) + 1); //dictionary_meaning -> malloc
		if(dictionary[i]->meaning == NULL) exit(1); //exception
		strcpy(dictionary[i]->meaning, inputted); //input dictionary_meaning
		
		i++; //next word
		printf("\n");
	}
	
	printf("\n\n< The dictionary >\n\n"); //print, when quit
	
	for(j=0; j<i; j++)
	{
		puts(dictionary[j]->name);
		puts(dictionary[j]->meaning);
	}
	
	for(j=0; j<i; j++)
	{
		free(dictionary[j]->meaning);
		free(dictionary[j]);
	}
	return 0;
}

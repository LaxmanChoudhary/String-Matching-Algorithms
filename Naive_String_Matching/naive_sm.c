/*
The program shows the simple implementation of naive string matching algorithm,
further improvements can be done to make program robust if pattern not found in text
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void naive_match(char [], char [], int, int); //Naive String Matching function declaration

void main()
{
	char Text[200];  // String in which word is to be searched
	char Pattern[10];	// String that will be searched in Text
	printf("Enter text\n");
	gets(Text);
	int n = strlen(Text);	// n - length of Text
	printf("Text is : %s of length = %d\n\n",Text, n);
	
	printf("Enter Pattern\n");
	gets(Pattern);
	int m = strlen(Pattern);	// m - length of Pattern
	printf("Pattern is %s of length = %d\n\n",Pattern, m);
	
	naive_match(Text, Pattern, n, m);	// argument passing
	getch();
}

void naive_match(char T[], char P[], int n, int m)
{
	int i, j, k;	// for iterations
	int limit= n-m;		// last index to iterate on T (check theory for more understanding)
	for(i=0; i<limit; i++)
	{
		j=i;	// to iterate Text
		k=0;	// iteration over Pattern strings' characters & initialize to 0 for every i
		while((T[j] == P[k]) && (j<n))
		{
			j++;
			k++;
		}
		printf("Working on.....\n");	//for debugging and looking over loop (Run and see the magic)
		if(k>=m)
		{
			printf("Valid shift at %d\n", i);	//print all the occurence of the Pattern in Text
		}
	}
}


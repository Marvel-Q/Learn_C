#include<stdio.h>
void clear()
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}
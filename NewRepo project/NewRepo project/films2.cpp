#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TSIZE 45
struct film {
	char title[45];
	int rating;
	struct film* next;
};

char* s_gets(char* st, int n);

int main()
{



}

char* s_gets(char* st, int n)
{
	char* retval;
	char* find;

	retval = fgets(st, n, stdin);
	if (retval)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return retval;
}
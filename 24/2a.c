#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 100

typedef struct hashnode
{
    char * key;
    char * number;
    struct hashnode * next;
} Hashnode;

int hash(char * key);
void insert(char * key, char * number, Hashnode ** table);
char * get(char * key, Hashnode ** table);
void erase(char * key, Hashnode ** table);

int main()
{
    Hashnode * table[size];
    int i = 0, o = 0;
    char * num;
    char * y;
    char * a;

    for(i = 0; i < size; i++)
    {
	table[i] = NULL;
    }

    do
    {
	puts("********************");
	puts("1) Add");
	puts("2) Search");
	puts("3) Delete");
	puts("4) Exit");
	puts("********************");
	scanf("%d", &o);

	num = (char *) calloc(50, sizeof(char));
	a = (char *) calloc(50, sizeof(char));

	switch(o)
	{
	    case 1:
	        puts("Enter Slovo and perevod");
	        scanf("%s %s", a, num);
	        insert(a, num, table);

	        break;
	    
	    case 2:
		puts("Enter Slovo");
		scanf("%s", a);
		y = get(a, table);

		if(y == NULL)
		{
		    printf("Not found!\n");
		}
		else
		{
		    printf("Perevod: %s\n", y);
		}

		break;
	    
	    case 3:
	        puts("Enter Slovo");
	        scanf("%s", a);
	        erase(a, table);
	        
	        break;

	    case 4:
		break;
	}

    } while(o != 4); 
}

int hash(char * a)
{
    int len = strlen(a), i = 0, hash = 0;

    for(i = 0; i < len; i++)
    {
	hash += a[i];
    }

    return hash % 100;
}

void insert(char * a, char * number, Hashnode ** table)
{
    Hashnode * b, * c;
    int h = hash(a);

    if(table[h] == NULL)
    {
	table[h] = (Hashnode *) calloc(1, sizeof(Hashnode));
	table[h] -> key = a;
	table[h] -> number = number;
	table[h] -> next = NULL;
    }
    else
    {
	c = table[h];
	b = table[h];

	while(b != NULL)
	{
	    c = b;
	    b = b -> next;
	}

	b = (Hashnode *) calloc(1, sizeof(Hashnode));
	b -> key = a;
	b -> number = number;
	b -> next = NULL;
	c -> next = b;
    }
}

char * get(char * a, Hashnode ** table)
{
     Hashnode * b;
     int h = hash(a), i = 0;

     if(table[h] != NULL)
     {
	 b = table[h];
	 while(b != NULL && strcmp(b -> key,a))
	 {
	     b = b -> next;
	 }

	 if(b == NULL)
	 {
	     return NULL;
	 }
	 else
	 {
	     return b -> number;
	 }
     }
     else
     {
	 return NULL;
     }
}

void erase(char * a, Hashnode ** table)
{
    int h = hash(a);
    Hashnode * b, * c;
    if(table[h] == NULL)
    {
	puts("Not found!");

	return;
    }

    if(!strcmp(a, table[h] -> key))
    {
        if(table[h] -> next != NULL)
	{
	    b = table[h];
	    table[h] = table[h] -> next;

	    free(b);

	    return;
	}
	else
	{
	    free(table[h] -> key);
	    free(table[h] -> number);
	    free(table[h]);
	    table[h] = NULL;

	    return;
	}
    }

    b = table[h];

    while(b != NULL && strcmp(b -> key, a))
    {
	c = b;
	b = b -> next;
    }

    if (b == NULL)
    {
	puts("Not found!");
    }
    else
    {
	if(strcmp(b -> key, a))
	{
	    puts("Not found!");
	}
	else
	{
	    c -> next = b -> next;
	    free(b);
	}
    }
}

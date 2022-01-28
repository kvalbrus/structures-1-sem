#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 100

typedef struct hashnode
{
    char flag;
    char * key;
    char * number;
} Hashnode;

int hash(char * key);
void insert(char * key, char * number, Hashnode ** table);
char * get(char * key, Hashnode ** table);
void erase(char * key, Hashnode ** table);
void print(Hashnode ** table);

int main()
{
    Hashnode ** table = (Hashnode **) calloc(size, sizeof(Hashnode *));
    int o = 0;
    char * name;
    char * number;
    int i = 0;

    for(i = 0; i < size; i++)
    {
	table[i] = (Hashnode *) calloc(1, sizeof(Hashnode));
	table[i] -> flag = '0';
	table[i] -> key = 0;
	table[i] -> number = 0;
    }

    do
    {
	puts("**********************************");
	puts("1) Add");
	puts("2) Search");
	puts("3) Delete");
	puts("4) Exit");
	puts("**********************************");
	scanf("%d", &o);

	name = (char *) calloc(50, sizeof(char));
	number = (char *) calloc(50, sizeof(char));

	switch(o)
	{
	    case 1:
		puts("Enter slovo and perevod:");
		scanf("%s %s", name, number);
		insert(name, number, table);

		break;

	    case 2:
		puts("Enter slovo:");
		scanf("%s", name);

		number = get(name, table);

		if(number == NULL) 
		{
		    puts("Not found!");
		}
		else
		{
		    printf("Number: %s\n", number);
		}

		break;

	    case 3:
		puts("Enter slovo:");
		scanf("%s", name);
		erase(name, table);

		break;

	    case 4:
                break;
	}

    } while(o != 4);
}

int hash(char * key)
{
    int len = strlen(key), sum = 0, i = 0;

    for(i = 0; i < len; i++)
    {
	sum += key[i];
    }

    return sum % size;
}

void insert(char * key, char * number, Hashnode ** table)
{
    int h = hash(key), i = 0;

    if(table[h] -> flag == '0')
    {
	table[h] -> number = number;
	table[h] -> key = key;
	table[h] -> flag = '1';

	return;
    }
    else
    {

	while(table[h] -> flag == '1' && h < 100)
	{
	    h++;
	}

	if(h >= 100)
	{
	    puts("The element isn't inserted!");
	}
	else if(table[h] -> flag == '0')
	{
	    table[h] -> number = number;
	    table[h] -> key = key;
	    table[h] -> flag = '1';
	}
	else
	{
	    puts("The element isn't inserted!");
	}
    }
}

char * get(char * key, Hashnode ** table)
{
    int h = hash(key);

    if(table[h] -> flag == '0')
    {
	for(; h < 100 && table[h] -> flag == '0'; h++)
	{
	    if(h == 99) return NULL;
	}

	if(h >= 100) return NULL;
    }

    if(!strcmp(table[h] -> key, key) && table[h] -> flag == '1')
    {
	return table[h] -> number;
    }
    else
    {
	for(; strcmp(table[h] -> key, key) && h < 100; h++)
	{
	    if(table[h+1] -> flag == '0')
	    {
		for(; table[h+1] -> flag == '0' && h < 100; h++)
		{
		    if(h == 98) return NULL;
		}
	    }
	}

	if(h >= 100) return NULL;
	else if(!strcmp(table[h] -> key, key)) return table[h] -> number;
	else return NULL;
    }
    
}

void erase(char * key, Hashnode ** table)
{
    int h = hash(key);

    if(table[h] -> flag == '0')
    {
	for(; table[h] -> flag == '0' && h < 100; h++)
	{
	    if (h == 99)
	    {
		puts("Not found!");
		return;
	    }
	}
    }

    if(!strcmp(table[h] -> key, key) && table[h] -> flag == '1')
    {
	table[h] -> key = 0;
	table[h] -> number = 0;
	table[h] -> flag = '0';
    }
    else if(strcmp(table[h] -> key, key))
    {
	for(; h < 100 && !strcmp(table[h] -> key, key); h++)
	{
	    if(table[h+1] -> flag == '0')
	    {
		for(; table[h+1] -> flag == '0' && h < 100; h++)
		{
		    if(h == 98)
		    {
			puts("Not found!");

			return;
		    }
		}
	    }
	}
		
	if(h >= 100)
	{
	    puts("Not found!");
	    
	    return;
	}

	if(!strcmp(table[h] -> key, key) && table[h] -> flag == '1')
	{
	    table[h] -> key = 0;
	    table[h] -> number = 0;
	    table[h] -> flag = '0';

	    return;
	}

	puts("Not found!");
    }
    else
    {
	puts("Not found!");
    }
}

void print(Hashnode ** table)
{
    int i = 0;
    puts("****************TABLE******************");
    for(i = 0; i < 100; i++)
    {
	printf("%s - %s - %c\n", table[i] -> key, table[i] -> number, table[i] -> flag);
    }
}

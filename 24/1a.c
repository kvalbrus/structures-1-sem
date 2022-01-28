#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 100

typedef struct hashnode
{
    char * key;
    long long int number;
    struct hashnode * next;
} Hashnode;

int hash(char * key);
void insert(char * key, long long int number, Hashnode ** table);
int get(char * key, Hashnode ** table);
void erase(char * key, Hashnode ** table);

int main()
{
    Hashnode * table[size];
    int i = 0, o = 0;
    long long int num = 0;
    char a[50];

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

	switch(o)
	{
	    case 1:
	        puts("Enter Surname and number telephone");
	        scanf("%s %Ld", a, &num);
	        insert(a, num, table);

	        break;
	    
	    case 2:
		puts("Enter Surname");
		scanf("%s", a);
		num = get(a, table);
		if(num == -1)
		{
		    printf("Not found!\n");
		}
		else
		{
		    printf("Telephone: %lld\n", num);
		}

		break;
	    
	    case 3:
	        puts("Enter Surname");
	        scanf("%s", a);
	        erase(a, table);
	        
	        break;

	    case 4:
		break;
	}

	for(i = 0; i < 50; i++)
	{
	    a[i] = '\0';
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

void insert(char * a, long long int number, Hashnode ** table)
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

int get(char * a, Hashnode ** table)
{
     Hashnode * b;
     int h = hash(a);
     if(table[h] != NULL)
     {
	 b = table[h];
	 while(b != NULL && b -> key != a)
	 {
	     b = b -> next;
	 }

	 if(b == NULL) return -1;
	 else return b -> number;
     }
     else
     {
	 return -1;
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

    b = table[h];

    while(b != NULL && b -> key != a)
    {
	c = b;
	b = b -> next;
    }

    if (b == NULL)
    {
	free(c);
    }
    else
    {
	c -> next = b -> next;
	free(b);
    }
}

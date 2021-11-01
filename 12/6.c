#include <stdio.h>

int main()
{
     FILE * file = fopen("6.txt", "r");
     char a[100];
     int i = 0;

     for(i = 0; !feof(file); i++)
     {
	 fscanf(file, "%c", &a[i]);
     }

     printf("%s", a);

     return 0;
}

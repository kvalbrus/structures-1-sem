#include <stdio.h>
#include <string.h>

void CivToRim(int a, char * Rim);

int RimToCiv(char * Rim);

int main()
{
    FILE * file = fopen("10.txt", "r");
    FILE * file2 = fopen("10o.txt", "w");
    FILE * file3 = fopen("10e.txt", "w");
    char rim[100];

    int a[100] = {};
    int i = 0, j = 0, h = 0, c = 0;

    for(i = 0; !feof(file); i++)
    {
	fscanf(file, "%d", &a[i]);
    }

    for(j = 0; j < i - 1; j++)
    {
	printf("%d ", a[j]);//
	CivToRim(a[j], rim);
	c = RimToCiv(rim);
	printf("%d\n", c);
	fprintf(file2, "%s ", rim);
	fprintf(file3, "%d ", c);
	for(h = 0; h < 100; h++)
	{
	    rim[h] = '\0';
	}
    }

    fclose(file);
    fclose(file2);

    return 0;
}

void CivToRim(int a, char * Rim)
{
    char r[100];
    int b = a, i = 0;
    
    while(b >= 1000)
    {
	r[i] = 'M';
	i++;
	b -= 1000;
    }

    while(b >= 900)
    {
	r[i] = 'C';
	r[i+1] = 'M';
	i += 2;
	b -= 900;
    }

    while(b >= 500)
    {
	r[i] = 'D';
	i++;
	b -= 500;
    }

    while(b >= 400)
    {
	r[i] = 'C';
	r[i+1] = 'D';
	i += 2;
	b -= 400;
    }

    while(b >= 100)
    {
	r[i] = 'C';
	i++;
	b -= 100;
    }

    while(b >= 90)
    {
	r[i] = 'X';
	r[i+1] = 'C';
	i += 2;
	b -= 90;
    }

    while(b >= 50)
    {
	r[i] = 'L';
	i++;
	b -= 50;
    }

    while(b >= 40)
    {
	r[i] = 'X';
	r[i+1] = 'L';
	i += 2;
	b -= 40;
    }

    while(b >= 10)
    {
	r[i] = 'X';
	i++;
	b -= 10;
    }

    while(b >= 9)
    {
	r[i] = 'I';
	r[i+1] = 'X';
	i += 2;
	b -= 9;
    }

    while(b >= 5)
    {
	r[i] = 'V';
	i++;
	b -= 5;
    }

    while(b >= 4)
    {
	r[i] = 'I';
	r[i+1] = 'V';
	i += 2;
	b -= 4;
    }

    while(b >= 1)
    {
	r[i] = 'I';
	i++;
	b -= 1;
    }
    r[i] = '\0';
    printf("%s ", r);

    strcpy(Rim, r);
}

int RimToCiv(char * Rim)
{
    int i = 0;
    int civ = 0;

    while(Rim[i] == 'M')
    {
	civ += 1000;
	i++;
    }

    if(Rim[i] == 'C' && Rim[i+1] == 'M')
    {
	civ += 900;
	i += 2;
    }

    while(Rim[i] == 'D')
    {
	civ += 500;
	i++;
    }

    if(Rim[i] == 'C' && Rim[i+1] == 'D')
    {
	civ += 400;
	i += 2;
    }

    while(Rim[i] == 'C')
    {
	civ += 100;
	i++;
    }

    if(Rim[i] == 'X' && Rim[i+1] == 'C')
    {
	civ += 90;
	i += 2;
    }

    while(Rim[i] == 'L')
    {
	civ += 50;
	i++;
    }

    if(Rim[i] == 'X' && Rim[i+1] == 'L')
    {
	civ += 40;
	i += 2;
    }

    while(Rim[i] == 'X')
    {
	civ += 10;
	i++;
    }

    if(Rim[i] == 'I' && Rim[i+1] == 'X')
    {
	civ -= 9;
	i += 2;
    }

    while(Rim[i] == 'V')
    {
	civ += 5;
	i++;
    }

    if(Rim[i] == 'I' && Rim[i+1] == 'V')
    {
	civ += 4;
	i += 2;
    }

    while(Rim[i] == 'I')
    {
	civ += 1;
	i++;
    }

    return civ;
}


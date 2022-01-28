#include "lab.h"

int clipping_expressions(FILE * file)
{
    char a;
    bool ravno = false;
    FILE * output = fopen("constant_expressions.txt", "w");
    int size = 0;

    while(!feof(file))
    {
	a = getc(file);

	if(ravno && a == ';')
	{
	    putc('\n', output);
	    ravno = false;
	    size++;

	    continue;
	}

	if (ravno)
	{
            putc(a, output);		
	}

	if(a == '=')
	{
	    ravno = true;	
	}
    }

    return size;
}

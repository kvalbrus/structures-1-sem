#include <stdio.h>
#include <stdbool.h>

bool lab(int l[40][40], int startX, int startY, int lastX, int lastY, int sizeX, int sizeY);

int main()
{
    int l[40][40];
    int sizeX = 0, sizeY = 0;
    int x = 0, y = 0, startX = 0, startY = 0;

    puts("Enter size labirint (x,y):");
    scanf("%d%d", &sizeX, &sizeY);

    puts("Enter labirint:");
    for(y = 0; y < sizeY; y++)
    {
	for(x = 0; x < sizeX; x++)
	{
	    scanf("%d", &l[y][x]);
	}
    }

    puts("Enter start position (x,y)");
    scanf("%d%d", &startX, &startY);

    lab(l, startX, startY, -1, -1, sizeX, sizeY);
    return 0;
}

bool lab(int l[40][40], int startX, int startY, int lastX, int lastY, int sizeX, int sizeY)
{
    if(startX >= 0 && startY >= 0)
    {
        if(l[startY][startX] == 1) return false;
    }
    if((startX == sizeX - 1 || startX == 0) || (startY == sizeY - 1 || startY == 0) && l[startY][startX] == 0)
    {
	printf("(%d,%d) ---> (%d,%d)\n", startX, startY, lastX, lastY);
	return true;
    }

    

    if(lab(l, startX + 1, startY, startX, startY, sizeX, sizeY))
    {
	printf("(%d,%d) ---> (%d,%d)\n", startX + 1, startY, startX, startY);
    }

    if(lab(l, startX - 1, startY, startX, startY, sizeX, sizeY))
    {
	printf("(%d,%d) ---> (%d,%d)\n", startX - 1, startY, startX, startY);
    }

    if(lab(l, startX, startY + 1, startX, startY, sizeX, sizeY))
    {
	printf("(%d,%d) ---> (%d,%d)\n", startX, startY + 1, startX, startY);
    }

    if(lab(l, startX, startY - 1, startX, startY, sizeX, sizeY))
    {
	printf("(%d,%d) ---> (%d,%d)\n", startX, startY - 1, startX, startY);
    }

    return false;
}

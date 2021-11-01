#include <stdio.h>

int main()
{
    FILE * file = fopen("3.txt", "r");
    char a[40] = "";
    
    fscanf(file, "%s", a);
    
    printf("%s", a);

    fclose(file);
    
    return 0;
}

#include "lab.h"

int main(int argc, char * argv[])
{
    FILE * input = fopen(argv[1], "r");
    int n = 0;
    struct Node * top = NULL;
    struct Node_int * top_int = NULL;


    n = clipping_expressions(input);
    
    return 0;    
}

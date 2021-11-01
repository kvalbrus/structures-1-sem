#include "complex.h"

void minus(struct compl c1, struct compl c2, struct compl* c3)
{
    c3 -> Re = c1.Re - c2.Re;
    c3 -> Im = c1.Im - c2.Im;
    
    return;
}

#include "complex.h"

struct compl umn(struct compl c1, struct compl c2)
{
    struct compl c3 = {0, 0};

    c3.Re = c1.Re * c2.Re - c1.Im * c2.Im;
    c3.Im = c1.Re * c2.Im + c1.Im * c2.Re;

    return c3;
}

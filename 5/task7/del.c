#include "complex.h"

struct compl del(struct compl c1, struct compl c2)
{
    struct compl c3;

    c3.Re = (c1.Re * c2.Re + c1.Im + c2.Im) / (c2.Re * c2.Re + c2.Im * c2.Im);
    c3.Im = - (c1.Re * c2.Im + c1.Im * c2.Im) / (c2.Re * c2.Re + c2.Im * c2.Im);

    return c3;
}

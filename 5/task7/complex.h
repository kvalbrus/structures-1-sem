struct compl
{
    int Re;
    int Im;
};


void plus(struct compl, struct compl, struct compl*);

void minus(struct compl, struct compl, struct compl*);

struct compl del(struct compl, struct compl);

struct compl umn(struct compl, struct compl);

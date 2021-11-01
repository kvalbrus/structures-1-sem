#include <stdio.h>

enum arith_oper
{
    add = 0,
    sub = 1,
    mul = 2,
    div = 3,
};

struct faction
{
    int num;
    int denom;
};

struct faction Add(struct faction num1, struct faction num2);
struct faction Sub(struct faction num1, struct faction num2);
struct faction Mul(struct faction num1, struct faction num2);
struct faction Div(struct faction num1, struct faction num2);

int main()
{
    struct faction num1, num2, num3;
    enum arith_oper op;

    puts("Enter number 1:");
    scanf("%d %d", &num1.num, &num1.denom);

    puts("Enter number 2:");
    scanf("%d %d", &num2.num, &num2.denom);

    printf("Enter op: 0) add, 1) sub, 2) mul, 3) div\n");
    scanf("%u", &op);
    

    switch(op)
    {
	case add:
	    num3 = Add(num1, num2);
	    break;

	case sub:
	    num3 = Sub(num1, num2);
	    break;

	case mul:
	    num3 = Mul(num1, num2);
	    break;

	case div:
	    num3 = Div(num1, num2);
	    break;    
    };

    printf("%d/%d\n", num3.num, num3.denom);

    return 0;
}

struct faction Add(struct faction num1, struct faction num2)
{
    struct faction num3 = {0,0};

    if(num1.denom == num2.denom)
    {
	num3.denom = num2.denom;
	num3.num = num1.num + num2.num;
    }
    else
    {
	num3.denom = num1.denom * num2.denom;
	num3.num = (num1.num * num2.denom) + (num2.num * num1.denom);
    }

    return num3;
}

struct faction Sub(struct faction num1, struct faction num2)
{
    struct faction num3 = {0,0};

    if(num1.denom == num2.denom)
    {
	num3.denom = num2.denom;
	num3.num = num1.num - num2.num;
    }
    else
    {
	num3.denom = num1.denom * num2.denom;
	num3.num = (num1.num * num2.denom) - (num2.num * num1.denom);
    }

    return num3;
}

struct faction Mul(struct faction num1, struct faction num2)
{
    struct faction num3 = {0,0};

    num3.num = num1.num * num2.num;
    num3.denom = num1.denom * num2.denom;

    return num3;
}

struct faction Div(struct faction num1, struct faction num2)
{
    struct faction num3 = {0,0};

    num3.num = num1.num * num2.denom;
    num3.denom = num1.denom * num2.num;

    return num3;
}

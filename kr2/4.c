#include <stdio.h>
#include <stdlib.h>

struct dom
{
    int xl;
    int yl;
    int xr;
    int yr;

    int pl;
    int per;
};

int comparator(void * x1, void * x2);

int main()
{
     struct dom * homs;
     int n = 0, i = 0;

     scanf("%d", &n);
     homs = (struct dom *) calloc(n, sizeof(struct dom));
     
     for(i = 0; i < n; i++)
     {
         scanf("%d %d %d %d", &homs[i].xl,
			 &homs[i].yl,
			 &homs[i].xr,
			 &homs[i].yr);
	 homs[i].pl = (homs[i].xr - homs[i].xl) *
		 (homs[i].yl - homs[i].yr);
	 homs[i].per = 2*(homs[i].xr - homs[i].xl) +
		 2*(homs[i].yl - homs[i].yr);
     }  

     qsort(homs, n, sizeof(struct dom), comparator);
     puts("\n");
     for(i = 0; i < n; i++)
     {
         printf("%d %d %d %d\n", homs[i].xl,
			 homs[i].yl,
			 homs[i].xr,
			 homs[i].yr);
     }

     return 0;
}

int comparator(void * x1, void * x2)
{
    struct dom * a1 = (struct dom *) x1;
    struct dom * a2 = (struct dom *) x2;
    if(a1 -> pl > a2 -> pl)
    {
        return (a2 -> pl - a1 -> pl);
    }
    else if(a1 -> pl < a2 -> pl)
    {
        return (a2 -> pl - a1 -> pl);
    }
    else
    {
        if(a1 -> per > a2 -> per)
	{
            return (a1 -> per - a2 -> per);
	}
	else
	{
            return (a1 -> per - a2 -> per);
	}
    }
}

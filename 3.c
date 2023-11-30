#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b, e, g;
    float c, d, f, h;
    scanf("%d %d", &a, &b) ;
    scanf("%f %f", &c, &d) ;
    
    e= a+b;
    g= a-b;
    printf("%d %d\n",e, g);
    
    f= c+d ;
    h= c-d ;
    printf("%1.1f %1.1f",f, h);
    return 0;

}
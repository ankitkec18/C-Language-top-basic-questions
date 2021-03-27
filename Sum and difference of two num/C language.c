#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	  int a,b;
    float x,y;
    scanf("%d%d",&a,&b);
    printf("%d %d\n",a+b,a-b);
    scanf("%f %f",&x,&y);
    printf("%.1f %.1f",x+y,x-y);
    return 0;
}

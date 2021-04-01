#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {	
 int n,b=0,a[4];
    scanf("%d", &n);
    for(int i=0;i<=4;i++)
    {
        a[i]=n%10;
        b+=a[i];
        n=n/10;
    }
    printf("%d",b);
    return 0;
}

#include <cstdlib>
#include <iostream>
#include <math.h>


int main() {
      int a,x;
      double n,xn=0;
    printf("x=");
    scanf("%d", &x);
    printf("a=");
    scanf("%d", &a);
    xn=x*2;
    for (x=0;x<xn;x++){ 
    x=(x+(x/100)*a);
    printf("x%lf", x);
    }
    printf("xn=%lf",xn);
	printf("year=%d",n);
    
     
    system("PAUSE");
    return 0;
}

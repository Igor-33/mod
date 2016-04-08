#include <cstdlib>
#include <iostream>
#include <math.h>


int main()
{
    int x,y,a=-35,b=40 ;
    double dovzina;
    printf("x:");
    scanf("%d", &x);
    printf("y:");
    scanf("%d", &y);
    dovzina=sqrt((x-a)*(x-a)+(y-b)*(y-b));
    printf("dovzina=%lf", dovzina);
    
    system("PAUSE");
    return 0;
}

#include <stdio.h>
#include <math.h>



int main(){
int a,b,c;
int d;
double x,y;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
d= b*b - 4*a*c ;
if (d > 0){
    x=(-b+sqrt(d))/2*a;
    y=(-b-sqrt(d))/2*a;
    printf("%lf %lf", x, y);
}else{
   printf("Net cornei");
}

}

#include <stdio.h>
#include <math.h>
int main() {
    float x1,x2;
    float y1,y2;
    float z1,z2;
    float a;
    float b;
    float c;
    float r;
    float result;
    printf("Enter the co-ordinates for point 1 (X,Y,Z) :-\n");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("Enter the co-ordinates for point 2 (X,Y,Z) :-\n");
    scanf("%f%f%f",&x2,&y2,&z2);
    a=(x1-x2);
    b=(y1-y2);
    c=(z1-z2);
    r = (a*a) + (b*b) + (c*c) ;
    result=sqrt(r);

    printf("The distance between (%f,%f,%f) and (%f,%f,%f) is \n", x1,y1,z1,x2,y2,z2);
    printf("%f",result);
    return 0;
}
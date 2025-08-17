// ncr = n!/r!(n-r)!
#include <stdio.h>
int main() {
    int n,r,g;
    int a=1,b=1,c=1,d=1,e=1,f=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the value of r\n");
    scanf("%d",&r);
    if(n>=r) {
        printf("The value of %dc%d is :\n",n,r);
        while(b<=n) {
            a=a*b;
            b++;
        }
        while(c<=r) {
            d=d*c;
            c++;
        }
        while(e<=(n-r)) {
            f=f*e;
            e++;
        }
        g=a/(d*f);
        printf("%d",g);
    }
    else {
        printf("You have entered r to be greater than n which is not possible\n");
    }
    return 0;

}
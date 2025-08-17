// write a program for experiment 4 physics lab dms calculator
#include <stdio.h>
int main() {
    int a,b,c,d,result;
    printf("DMS -> SECONDS write \"1\" for it or SECONDS -> DMS write \"0\" for it\n");
    scanf("%d", &d);
    if(d==1) {
        printf("So you have choosed to convert DMS -> SECONDS\n");
        printf("Degrees :- \n");
        scanf("%d", &a);
        printf("Minutes :- \n");
        scanf("%d", &b);
        printf("Seconds :- \n");
        scanf("%d", &c);
        result = ((a*3600) + (b*60) + c);
        printf("The value of %ddeg %d\' %d\" in seconds is : %d\n", a,b,c,result);
    }
    else if(d==0) {
        int f,g;
        printf("So you have choosed to convert SECONDS -> DMS\n");
        printf("Seconds :- \n");
        scanf("%d", &c);
        a = c%60 ; // seconds
        b = c/60 ; // minute
        g = b/60 ; // degree 
        f = b%60 ; // minute 
        printf("Tha value of \"%d\"seconds in DMS is \n",c);
        printf("Degrees: %d ,Minutes: %d ,Seconds: %d  \n", g,f,a);
    }
    else {
        printf("Neither \"1\" nor \"0\" trying to outsmart system huh \n");
    }
    return 0;
}
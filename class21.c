#include<stdio.h>
int  main(){
    double length,breadth,area=0.0;
    double *plength=&length, *pbreadth= &breadth,  *parea=&area;
    printf("Enter the length: ");
    scanf("%lf", plength);
    printf("Enter the breadth: ");
    scanf("%lf", pbreadth);
    *parea= 2*(*plength)*(*pbreadth);
    printf("\n The are of the rectangle is =%.2lf", *parea);

}
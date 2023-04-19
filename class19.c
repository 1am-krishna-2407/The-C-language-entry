#include<stdio.h>
int main(void)
{
 int a = 1;
 int b = 4;

 int c = 1;
 int d = 4;
 a++;
 printf("a = %d\n",a); /* Will output "a = 2" */
 b--;
 printf("b = %d\n",b); /* Will output "b = 3" */
 if (++c > 1) { /* c is incremented by 1 before being compared in the condition */
 printf("This will print\n"); /* This is printed */
 } else {
 printf("This will never print\n"); /* This is not printed */
 }
 if (d-- < 4) { /* d is decremented after being compared */
 printf("This will never print\n"); /* This is not printed */
 } else {
 printf("This will print\n"); /* This is printed */
 }
}
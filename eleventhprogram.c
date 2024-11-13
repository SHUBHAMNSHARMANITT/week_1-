/*eleventh program
TO FIND SIMPLE AND COMPOUND INTERERST
BY SHUBHAM SHARMA DATE :11 SEP 2024*/
#include<stdio.h>
#include<math.h>
int main()
{
	int p,t;
	float r;
	printf("Welcome\nPlease enter PRINCIPAL AMOUNT , RATE OF INTEREST, TIME :\n");
	scanf("%d %f %d",&p , &r , &t);
    printf("%f is value of SIMPLE INTEREST ",(p*r*t)/100);
    printf("%f is value of compound interest :" , p*pow((1+r/100),t));
    return 0;
}

/*seventh  program
TO MULTIPLY TWO GLOATING POINT NUMBERS AND PRINTING THE OUTPUT IN INTEGER AND FLOATING POINT REPRESENTATIONS
BY SHUBHAM SHARMA DATE :11 SEP 2024*/
#include<stdio.h>
int main()
{
	float a,b;
	printf("Welcome\nPlease enter values of a and b respectilvely:\n");
	scanf("%f%f",&a , &b);
    printf("Value of product of a and b in floating point number is %f\n",a*b);
	printf("Values after multiplying a and b in integer is %d \nThank You",(int)(a*b));
    return 0;
}

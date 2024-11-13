/*thirteenth program
TO FIND SIMPLE AND COMPOUND INTERERST
BY SHUBHAM SHARMA DATE :11 SEP 2024*/
#include<stdio.h>
#include<math.h>
int main()
{
	float v , u , a , t , p , s , T , b , c , H;
	printf("enter values for 1st equation u , a and t respectively :\n");
    scanf("%f %f %f", &u , &a ,&t);
    printf("%f is value of v \n :", u+a*t);
    printf("give values of u , t and a respectively for 2nd equation: ");
    scanf("%f %f %f", &u , &t ,&a);
    printf("%f is answer of s:", s=u*t + 0.5*a*t*t);
    printf("enter values for 3rd equation ofa ,  b and c respectively;\n");
    scanf("%f %f %f ", &a , &b, &c);
    printf("result of 3rd equation is %f" , 2*a + sqrt(b) +9*c);
    printf("Enter values of b and p respectively;");
    scanf("%f %f", &b , &p);
    printf("output of 4th equation is : %f" , sqrt(b*b + p*p));
    return 0;
}

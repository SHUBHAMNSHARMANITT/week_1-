/*fourteenth program
to find mechanical energy 
BY SHUBHAM SHARMA DATE :11 SEP 2024*/
#include<stdio.h>
int main()
{
	float m , g , h , v ;
	printf("Welcome\nPlease enter values of m , g , h and v respectively :\n");
	scanf("%f %f%f%f", &m , &g, &h, &v);
    printf("The mechanical energy of the particle is :%f\n", m*g*h +0.5*m*v*v);
    return 0;
}

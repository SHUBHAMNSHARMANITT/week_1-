/*fourth  program
TO FIND PERCENTAGE OF 5 SUBJECTS 
BY SHUBHAM SHARMA DATE :11 SEP 2024*/
#include<stdio.h>
int main()
{
	int m1 , m2 , m3 , m4 , m5 ;
	printf("Welcome\nPlease enter marks of 5 subjects out of 100:\n");
	scanf("%d%d%d%d%d",&m1 , &m2 , &m3 , &m4 , &m5);
    printf("percantage of 5 subect is %f %% ", (float)((m1+m2+m3+m4+m5)/5.0));
	return 0;
}

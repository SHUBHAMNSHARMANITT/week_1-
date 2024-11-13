/*sixth  program
TO SWAP VALUES WITHOUT USING 3ED VARIABLE 
BY SHUBHAM SHARMA DATE :11 SEP 2024*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Welcome\nPlease enter values of a and b respectilvely:\n");
	scanf("%d%d",&a , &b);
	a = a+b;
	b = a-b;
	a = a-b;
    printf("Values after swaping is %d , %d for a and b respectively\nThank You",a,b);
	return 0;
}

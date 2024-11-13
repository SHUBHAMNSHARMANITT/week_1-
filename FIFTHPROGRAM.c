/*fifth  program
TO SWAP VALUES USING 3RD VARIABLE 
BY SHUBHAM SHARMA DATE :11 SEP 2024*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Welcome\nPlease enter values of a and b respectilvely:\n");
	scanf("%d%d",&a , &b);
	c=a;
	a=b;
	b=c;
    printf("Values after swaping is %d , %d for a and b respectively\nThank You",a,b);
	return 0;
}

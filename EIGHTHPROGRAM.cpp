/*eighth program
TO CONVERT KILOMETER TO METER , CENTIMETER , MILIMETER
BY SHUBHAM SHARMA DATE :11 SEP 2024*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("Welcome\nPlease enter values in km which you want to convert :\n");
	scanf("%d",&a);
    printf("%d kilometer is equals to %f metre , %f centimeter , %f millimeter",a , a*(pow(10,3)) , a*(pow(10,5)) ,a*(pow(10,6)));
    return 0;
}

#include <stdio.h>

voin main()
{
	int x = 10;
	int y = 5;
	int temp;

	printf("Values Before Swapping\n");
	printf("\n X: %d \n Y: %d",x,y);

	//swap logic
	temp = x;
	x = y;
	y = temp;


	printf("Values After Swapping\n");
	printf("\n X: %d \n Y: %d",x,y);
}
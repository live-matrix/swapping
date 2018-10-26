#include <stdio.h>
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
voin main()
{
	int x = 10;
	int y = 5;
	int temp;

	printf("Values Before Swapping\n");
	printf("\n X: %d \n Y: %d",x,y);

	//swap logic

	swap(&x, &y);


	printf("Values After Swapping\n");
	printf("\n X: %d \n Y: %d",x,y);
}
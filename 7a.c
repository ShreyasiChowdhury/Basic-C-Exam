#include<stdio.h>
#define pi 3.14
float area_rectangle(float,float);
float perimeter(float,float);
float area_circle(float);
float circumference(float);
int main()
{
	float len,brd;
	float rad;
	printf("Enter length of rectangle: ");
	scanf("%f",&len);
	printf("Enter breadth of rectangle: ");
	scanf("%f",&brd);
	printf("Enter radius of circle: ");
	scanf("%f",&rad);
	printf("\nArea of the rectangle: %0.2f",area_rectangle(len,brd));
	printf("\nPerimeter of the rectangle: %0.2f",perimeter(len,brd));
	printf("\nArea of the circle: %0.2f",area_circle(rad));
	printf("\nCircumference of the circle: %0.2f",circumference(rad));
	return 0;
}
float area_rectangle(float len,float brd)
{
	float area;
	area=len*brd;
	return area;
}
float perimeter(float len,float brd)
{
	float perimeter;
	perimeter=2*(len+brd);
	return perimeter;
}
float area_circle(float rad)
{
	float area;
	area=pi*rad*rad;
	return area;
}
float circumference(float rad)
{
	float circumference;
	circumference=2*pi*rad;
	return circumference;
}

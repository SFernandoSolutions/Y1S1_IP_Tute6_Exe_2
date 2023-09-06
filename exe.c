// Write a function called circleArea() that take the radius of a circle as an argument and
// calculate and return the area. In the main program read the radius value from the user, call
// circleArea() and display the result.

#include <stdio.h>
int circleArea(int r);

int main(void){
	double radious;
	
	printf("Enter radious of circle : ");
	scanf("%lf",&radious);
	
	circleArea(radious);
	
	return 0;
	
}

int circleArea(int r){
	double area;
	
	area=(22/7)*r*r;
	
	printf("Area is : %.2lf",area);
	
	return 0;
}

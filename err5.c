#define PI 3.14159
#include<stdio.h>
main()
{
	int R,C;
	float perimeter;
	float area;
	C=PI;
	R=5;
	perimeter=2.0*C*R;
	area=C*R*R;
	printf("%f %f",perimeter,area);
}

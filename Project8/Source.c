//ќкружности пересекаютс€ в двух точках.
//ќдна окружность содержитс€ внутри другой.
//ќкружности касаютс€ внешним образом(касание только одной точкой).
//ќкружности не пересекаютс€ и не касаютс€.

#include <stdio.h>
#include <math.h>
int main() {
	int x1,x2,y1,y2,r1,r2;
	double d;
	printf("enter the center and radius of the circle 1");
	scanf_s("%d %d %d", &x1, &y1, &r1);
	printf("enter the center and radius of the circle 2");
	scanf_s("%d %d %d", &x2, &y2, &r2);
	d = sqrt(pow(x2 - x1, 2)  + pow(y2 - y1,2));
	if (d < r1 + r2) {
		printf( "\n The circles intersect at two points");
	}
	else if( d< r1-r2)
	{
		printf("\n One circle is contained within the other");
	}
	else if ((d == r1+r2) || (d == abs(r1-r2)))
	{
		printf("\n The circles touch ");
	}
	else if ( d> r1+r2)
	{
		printf("\nThe circles do not intersect and do not touch ");
	}
	else
	{
		printf("\n error ");
	}
	//printf("\n proverka %lf", d);

	return 0;
}
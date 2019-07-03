# include <math.h>
# include <stdio.h>
void main()
{
	float a, b, c, area;
	scanf("%f, %f, %f", &a, &b, &c);
	s = 1 / 2 (a + b + c);
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("%7.2f, %7.2f, %7.2f, s=%7.2f\n", a, b, c, s);
	printf("area+%7.2f\n", area);
}
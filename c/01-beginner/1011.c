/**
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1011
 * Author: Rafael Giordanno
 **/
#include <stdio.h>
#define PI 3.14159

int main()
{
	double r;
	scanf("%lf", &r);
	printf("VOLUME = %.3lf\n", ((4.0 / 3.0) * PI * r * r * r));
	return 0;
}

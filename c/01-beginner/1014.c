/**
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1014
 * Author: Rafael Giordanno
 **/
#include <stdio.h>

int main()
{
	int x;
	double y;
	scanf("%d %lf", &x, &y);
	printf("%.3lf km/l\n", x / y);
	return 0;
}

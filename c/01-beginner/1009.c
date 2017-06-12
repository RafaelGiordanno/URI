/**
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1009
 * Author: Rafael Giordanno
 **/
#include <stdio.h>

int main()
{
	double salary, sales;
	while (getchar() != '\n') {}
	scanf("%lf %lf", &salary, &sales);
	printf("TOTAL = R$ %.2lf\n", (salary + (sales * 0.15)));
	return 0;
}

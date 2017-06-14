/**
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1010
 * Author: Rafael Giordanno
 **/
#include <stdio.h>

int main()
{
	int i, code, units = 1;
	double price = 0.0, total = 0.0;
	
	for (i = 0; i < 2; i++, total += price * units)
		scanf("%d %d %lf", &code, &units, &price);
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	return 0;
}

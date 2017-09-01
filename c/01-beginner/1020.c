/**
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1020
 * Author: Rafael Giordanno
 **/
#include <stdio.h>

int main()
{
	int a; /* age in days */
	scanf("%d", &a);
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", (a / 365), (a % 365) / 30, (a % 365) % 30);
	return 0;
}

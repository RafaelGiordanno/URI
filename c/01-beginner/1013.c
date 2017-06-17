/**
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1013
 * Author: Rafael Giordanno
 **/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, i, maior;
	scanf("%d", &maior);
	for (i = 0; i < 2; i++) {
		scanf("%d", &a);
		maior = (a + maior + abs(a - maior)) / 2;
	}
	printf("%d eh o maior\n", maior);
	return 0;
}

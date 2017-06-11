/** 
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1005
 * Author: Rafael Giordanno
 **/
#include <stdio.h>

int main()
{
	double a, b;
	double media;
	scanf("%lf %lf", &a, &b);
	media = (a * 3.5 + b * 7.5) / (3.5 + 7.5);
	printf("MEDIA = %.5f\n", media);
	return 0;
}

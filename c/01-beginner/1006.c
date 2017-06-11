/** 
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1006
 * Author: Rafael Giordanno
 **/
#include <stdio.h>

int main()
{
	/* Student's grades */
	double a, b, c;
	double media;
	scanf("%lf %lf %lf", &a, &b, &c);
	media = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);
	printf("MEDIA = %.1lf\n", media);
	return 0;	
}

/**
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1017
 * Author: Rafael Giordanno
 **/
#include <stdio.h>
#define EFFICACY 12.0

int main(void) {
    int t, km;
    scanf("%d %d", &t, &km);
    printf("%.3lf\n", (t * km) / EFFICACY);
	return 0;
}


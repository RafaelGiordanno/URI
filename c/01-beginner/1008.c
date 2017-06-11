/**
 * link: https://www.urionlinejudge.com.br/judge/en/problems/view/1008 
 * Author: Rafael Giordanno
 **/
#include <stdio.h>

int main()
{
	int n,           /* employee's number */
	    workedHours; /* monthly worked hours */
	double hourlyWage;  /* hourly salary */
	double monthlySalary;
	scanf("%d %d %lf", &n, &workedHours, &hourlyWage);
	monthlySalary = workedHours * hourlyWage;
	printf("NUMBER = %d\n", n);
	printf("SALARY = U$ %.2lf\n", monthlySalary);
	return 0;
}

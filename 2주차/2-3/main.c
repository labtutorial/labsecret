#include <stdio.h>
#include <math.h>

double myexp(int x);

void main()
{
	int i;
	printf("  exp() : ");
	for (i=1;i<=5;i++)
	    printf("%lf ", exp((double)i));
	printf("\n");
	printf("myexp() : ");
	for (i=1;i<=5;i++)
	    printf("%lf ", myexp(i));
	printf("\n");
}


double myexp(int x)
{
	int i;
	double term, sum, oldsum;
	oldsum = 0.0;
	sum = 1.0;
	term = 1.0;
	// (sum – oldsum) > 0.0000001 일 때 까지
	for(i = 1; (sum - oldsum) > 0.0000001; i++) {
		term *= (double)x/i;
		oldsum = sum;
		sum = sum + term;
	}
	// i를 증가시키면서
	// term =  을 구한다.
	// oldsum = sum 으로 기억하고
	// sum = sum + term 으로 누적 값을 구한다.
	return sum;
}
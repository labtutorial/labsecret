#include <stdio.h>

int IsPrime(int n);

int main() {

	int i, sum = 0;
	for ( i = 2; i <= 100; i++) {
		if(IsPrime(i) == 1) {
			printf("%3d", i);
			sum += i;
		}
	}
	printf("\n");
	printf("sum = %d\n", sum);
}

int IsPrime(int n) {

	int i;

	if(n < 2)
		return 0;

	for(i = 2; i <= n/2; i++) {
		if(n % i == 0)
			return 0;
	}
	return 1;
}
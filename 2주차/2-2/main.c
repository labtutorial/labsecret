#include <stdio.h>

void printPerfect(int n);

int main() {

	int i;

	for(i = 1; i <= 10000; i++) {
		printPerfect(i);
	}
}

void printPerfect(int n) {
	int temp[100], i, index = 0, sum=0;

	for(i = 1; i <= n/2; i++) {
		if(n % i == 0) {
			temp[index++] = i;
			sum += i;
		}
	}
	if(sum == n) {
		printf("%d = 1", n);
		for(i = 1; i < index; i++) {
			printf(" + %d", temp[i]);
		}
		printf("\n");
	}

}
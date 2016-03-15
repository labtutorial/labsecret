#include <stdio.h>
#include <stdlib.h>

int findMax(int *arr, int n);
int findMin(int *arr, int n);

int main() {

	int i, j, n_test, k, sum, max, min;
	int *kArr;
	scanf("%d", &n_test);
	for (i=0; i < n_test;i++) {
		scanf("%d", &k);
		sum = 0;
		kArr = (int *)malloc(sizeof(int) * k);
		for(j = 0; j < k; j++) {
			scanf("%d", &kArr[j]);
			sum += kArr[j];
		}
		max = findMax(kArr, k);
		min = findMin(kArr, k);

		printf("%d %d %d\n", sum, max, min);
		free(kArr);
		kArr = NULL;
		//총점 최대 최소 출력
		//포인터 해제 및 NULL 초기화
	}


}

int findMax(int *arr, int n) {
	int max = arr[0];
	int i;

	for(i = 1; i < n; i++) {
		if(max < arr[i])
			max = arr[i];
	}
	return max;
}

int findMin(int *arr, int n) {
	int min = arr[0];
	int i;

	for(i = 1; i < n; i++) {
		if(min > arr[i])
			min = arr[i];
	}
	return min;
}
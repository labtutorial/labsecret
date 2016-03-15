#include <stdio.h>

void printRoomNum(int H, int W, int N);

int main() {

	int i, T, H, W, N;
	scanf("%d", &T);
	for (i=0; i < T;i++) {
		scanf("%d %d %d", &H, &W, &N);
		printRoomNum(H, W, N);
	}

}

void printRoomNum(int H, int W, int N) {
	int front, back;

	back = N / H + 1;
	front = N % H;

	if(back > W)
		printf("Don't have room\n");
	else
		printf("%d0%d\n", front, back);

}
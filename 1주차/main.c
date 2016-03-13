#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void p1();
void p2();
void p3();
void p4();
void p5();
void p6();
void p7();
void p8();
void p9();

int main(int argc, char *argv[])
{
   int n, np;
   void (*pfunc[])() = { NULL, p1, p2, p3, p4, p5, p6, p7, p8, p9 };
   np = sizeof(pfunc) / sizeof(pfunc[0]) - 1;
   while (1) {
      do {
           printf("문제 번호 선택 (99 종료) (1 - %d) : ", np);
           scanf("%d", &n);
           if (n == 99)
              exit(0);
      } while ( n < 1 || n > np);
      fflush(stdin);
      system("cls");  // stdlib.h required
      printf("문제 번호 : %d \n\n", n);
      (*pfunc[n])();
      printf("\n------------\n");
   }
}

void p1() {

	int sum = 100;
	int inputNum;

	while(sum != 0) {

		printf("sum=%d 뺄 값 입력: ", sum);

		scanf("%d", &inputNum);

		sum -= inputNum;

	}
	printf("sum=%d", sum);
}

int oddsum1(int num) {
	int i;
	int sum = 0;
	for(i = num; i > 0; i--) {
		if(i % 2 == 1)
			sum += i;
	}
	return sum;
}

int oddsum2(int num) {
	int i = num;
	int sum = 0;
	while(i > 0) {
		if(i % 2 == 1)
			sum += i;
		i--;
	}
	return sum;
}

int oddsum3(int num) {
	if(num == 0)
		return 0;
	else if(num % 2 == 1)
		return oddsum3(num-1) + num;
	else
		return oddsum3(num-1);
}

void p2() {
	int n = 100;
	int SUM = 0;
	int i;
	printf("(1) for oddsum1(%d) = %d\n", n, oddsum1(n));
	printf("(2) while oddsum2(%d) = %d\n", n, oddsum2(n));
	printf("(3) 재귀 oddsum3(%d) = %d\n", n, oddsum3(n));
	for(i = 1; i < n; i+=2) {
		SUM += oddsum1(i);
	}
	printf("(4) SUM = %d\n", SUM);
}

void p3() {
	int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int displayMon, calcStart = 1, i;

	printf("출력 월을 입력 : ");
	scanf("%d", &displayMon);
	printf("일 월 화 수 목 금 토\n");
	
	for(i = 0; i < displayMon; i++) {
		calcStart += month[i];
		calcStart %= 7;
	}
	calcStart += 1;
	for(i = 1; i < calcStart; i++) {
		printf("   ");
	}

	for(i = 1; i <= month[displayMon]; i++) {
		if(calcStart > 7) {
			calcStart = 1;
			printf("\n");
		}
		printf("%2d ", i);
		calcStart++;
	}
	printf("\n");
}

void swap(int *x, int *y) {
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

void p4() {
	int x = 100, y = 200;
	printf("swap() 호출 전 x=%d y=%d\n", x, y);
	swap(&x, &y); // 완성할 것
	printf("swap() 호출 후 x=%d y=%d\n", x, y);
}

void p5() {
	int year = 1900;
	int month = 0;
	int day = 0;
	int inputNum = 0;
	char inputString[15];
	char frontNum[15];
	char backNum[15];
	
	printf("주민번호 입력 : ");
	gets(inputString);
	
	if(strstr(inputString,"-") != NULL){ // - 있는 경우
		
		
		
	}
	else{	// - 없는 경우
		//생년월일만 있는경우
		inputNum = atoi(inputString);
		year += inputNum / 10000;
		month += (inputNum % 10000) / 100;
		day += inputNum % 100;		
	}

	//예외 처리
	if(month > 12 || day >31){
		printf("잘못된 주민등록번호입니다.\n");
	}
	else{
		printf("%d년 %d월 %d일 생입니다.\n",year,month,day);
	}
}

void p6() {

}

void p7() {

}

void p8() {

}

void p9() {

}
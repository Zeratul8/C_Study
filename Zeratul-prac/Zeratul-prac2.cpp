// Zeratul-prac2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
//1월17일 추가(무기 변수값을 이름으로 정의)
#define WP_Sword	0x00000001
#define WP_Axe		0x00000002
#define WP_Gun		0x00000004
#define WP_Gloves	0x00000008
#define WP_Bow		0x00000010
#define WP_Staff	0x00000020

//1월19일 추가(strlen 정의 사용)
#include <string.h>

//1월 21일 추가(rand함수,exit함수 적용을 위한 stdlib.h)
#include <stdlib.h>

//1월 24일 추가(time)
#include <time.h>

#define 가위 1
#define 바위 2
#define 보	 3
#define 종료 4

//1월 26일 추가 키입력을 위한 함수
#include <conio.h>

#define UP		72
#define DOWN	80
#define RIGHT	77
#define LEFT	75
#define SPACE	32
#define ESC		27

//1월 27일 추가 윈도우 커서제어
#include <Windows.h>


// 입력버퍼 삭제 코드
// while (getchar() !='\n');

int main()
{
	//1월 14일
	char age = 20;
	float height = 170;
	float weight = 70;
	char ch = 'A';

	printf("%-8s %4s %10s\n", "이름", "나이", "서울");
	printf("%-8s %4s %10s\n", "이름표", "15", "서울");
	printf("%-8s %4s %10s\n", "이름표기", "155", "광주광역시");


	printf("나이\t: %d%s\n키\t: %.1f%s\n몸무게\t: %.1f%s\n", age, "세", height, "cm", weight, "kg");

	int a, b;
	scanf("%d", &a);
	printf("Input : %d\n", a);
	scanf("%d", &b);
	printf("Input : %d\n", b);
	printf("%d\n", a + b);

	int age1 = 0;
	float height1 = 0, weight1 = 0;
	printf("나이입력(세)\n");
	scanf("%d", &age1);
	printf("키 입력(cm)\n");
	scanf("%f", &height1);
	printf("몸무게입력(kg)\n");
	scanf("%f", &weight1);
	printf("당신의 나이는 %d세이고, 키는 %.1fcm, 몸무게는 %.1fkg 입니다.", age1, height1, weight1);

	char name[7] = { 0 };
	scanf("%s", name);
	printf("당신의 이름은 %s입니다", name);

	//1월 17일
	int EWeapon = WP_Sword | WP_Gloves | WP_Bow | WP_Staff;
	EWeapon = EWeapon & ~WP_Gloves;
	if (EWeapon & WP_Sword)
	{
		printf("Sword 장착\n");
	}
	if (EWeapon & WP_Axe)
	{
		printf("Axe 장착\n");
	}
	if (EWeapon & WP_Gun)
	{
		printf("Gun 장착\n");
	}

	if (EWeapon & WP_Gloves)
	{
		printf("Gloves 장착\n");
	}

	if (EWeapon & WP_Bow)
	{
		printf("Bow 장착\n");
	}

	if (EWeapon & WP_Staff)
	{
		printf("Staff 장착\n");
	}

	//1월 18일
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	printf("num1 = %d\nnum2 = %d\nnum3 = %d\n", num1, num2, num3);
	if (num1 > num2) {
		if (num1 > num3) {
			if (num2 > num3) {
				printf("%d>%d>%d", num1, num2, num3);
			}
			else {
				printf("%d>%d>%d", num1, num3, num2);
			}
		}
		else {
			printf("%d>%d>%d", num3, num1, num2);
		}
	}
	else {
		if (num2 > num3) {
			if (num1 > num3) {
				printf("%d>%d>%d", num2, num1, num3);
			}
			else {
				printf("%d>%d>%d", num2, num3, num1);
			}
		}
		else {
			printf("%d>%d>%d", num3, num2, num1);
		}

	}

	int score;
	printf("점수입력(0~100)\n");
	scanf("%d", &score);
	if ((score > 100) || (score < 0)) {
		printf("잘못된 입력값 입니다.\n");
	}
	else if (score >= 90) {
		printf("A학점입니다.\n");
	}
	else if (score >= 80) {
		printf("B학점입니다.\n");
	}
	else if (score >= 70) {
		printf("C학점입니다.\n");
	}
	else if (score >= 60) {
		printf("D학점입니다.\n");
	}
	else {
		printf("F학점입니다.\n");
	}

	//bmi계산기
	char name[10];
	char gender[3];
	float height = 0;
	float weight = 0;
	float bmi;

	printf("정보를 입력해 주세요\n");
	printf("이름:");
	scanf("%s", name);
	printf("성별(남,여):");
	scanf("%s", gender);
	printf("키(cm):");
	scanf("%f", &height);
	printf("몸무게(kg):");
	scanf("%f", &weight);

	bmi = weight / ((height / 100) * (height / 100));
	printf("당신의 bmi수치: %.2f\n", bmi);

	if (bmi < 18.5) {
		printf("%s님(%s)은 저체중입니다.", name, gender);
	}
	else if (bmi < 23) {
		printf("%s님(%s)은 정상체중입니다.", name, gender);
	}
	else if (bmi < 25) {
		printf("%s님(%s)은 과체중입니다.", name, gender);
	}
	else if (bmi < 30) {
		printf("%s님(%s)은 비만입니다.", name, gender);
	}
	else {
		printf("%s님(%s)은 고도비만입니다.", name, gender);
	}
	//종료


	//1월 19일
	//for 반복문
	int num = 0;
	int sum = 0;
	printf("정수입력\n");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("1부터 %d까지의 합은 %d이다.\n", num, sum);


	//for 배열
	int number[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		printf("%d\n", number[i]);
	}

	//string에 포함된 strlen, 갯수를 지정하지않고 반복
	char name[] = "Welcome to SBS Games Academy";
	for (int i = 0; i < strlen(name); i++) {
		printf("%c\n", name[i]);
	}

	//이미지 픽셀(사각형) 출력

	int line = 0;
	printf("출력할 라인수 입력\n");
	scanf("%d", &line);

	for (int y = 0; y < line; y++) {
		for (int x = 0; x < line; x++) {
			putchar('*');
		}
		printf("\n");
	}


	//삼각형만들기
	int line = 0;
	printf("줄 갯수 입력\n");
	scanf("%d", &line);


	for (int y = 0; line - y > 0; y++) {
		for (int blank = 0; line - y - blank > 0; blank++) {
			printf(" ");
		}
		for (int dot = 0; dot < 1 + 2 * y; dot++) {
			putchar('*');
		}
		printf("\n");
	}

	//1월 20일
	//while 활용
	int i = 65;
	while (i <= 122) {
		printf("%5d - %c\t\t", i, i);
		i++;
	}
	printf("\n\n");

	//구구단 만들기
	int step = 0;
	int num = 1;
	printf("출력할 단 입력\n");
	scanf("%d", &step);

	while (num <= 9) {
		printf("%d * %d = %d\n", step, num, step * num);
		num++;
	}

	//구구단 9단까지 전체출력
	int step = 1;
	int num = 1;

	while (step <= 9) {
		printf("%d단\n", step);
		while (num <= 9) {
			printf("%d * %d = %d\n", step, num, step * num);
			num++;
		};
		printf("\n");
		num = 1;
		step++;
	}

	//구구단만들기2

	int step = 0;
	int num = 1;
	printf("출력할 단 입력\n");
	scanf("%d", &step);
	while (step > 0 && step <= 9) {
		while (num <= 9) {
			printf("%d * %d = %d\n", step, num, step * num);
			num++;
		};
		num = 1;
		printf("\n출력할 단 입력\n");
		scanf("%d", &step);
	}

	//구구단만들기3

	int step = 0;
	int num = 1;

	while (1) {
		printf("출력할 단 입력\n");
		scanf("%d", &step);
		if (step <= 0 || step > 9) {
			break;
		}
		while (num <= 9) {
			printf("%d * %d = %d\n", step, num, step * num);
			num++;
		};
		num = 1;
	}

	//do while : 선입력 후 조건체크
	int step = 0;
	while (true) {
		do {
			printf("출력할 단 입력\n");
			scanf("%d", &step);
		} while (step > 9 || step <= 0);
		for (int num = 1; num <= 9; num++) {
			printf("%d * %d = %d\n", step, num, step * num);
		}
	}

	//덧셈계산기
	int num1 = 0;
	int num2 = 0;
	char ch = 0;
	printf("덧셈계산기\n");
	do {
		printf("두 수를 입력\n");
		scanf("%d %d", &num1, &num2);
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		printf("계속하시겠습니까?(Y/N)");
		//문자로 변수를 받을때 엔터키 입력버퍼를 삭제
		while (getchar() != '\n');
		//
		scanf("%c", &ch);
	} while (ch == 'y' || ch == 'Y');

	//1차원배열 출석부
	int students[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		printf("%d번 학생 출석확인(o/x)", i + 1);
		scanf("%c", &students[i]);
		while (getchar() != '\n');
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d번 학생 출석 : %c\n", i + 1, students[i]);
	}

	//1월 21일
	//짝수행 역순배열
	int num[5][7] = { 0 };
	int count = 1;

	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 7; j++) {
				num[i][j] = count++;
			}
		}
		else {
			for (int j = 6; j >= 0; j--) {
				num[i][j] = count++;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			printf("%2d", num[i][j]);
		}
		printf("\n");
	}


	//3차원배열 테트라미노 랜덤출력하기
	char block[7][4][4] = {
		{
			{0,0,0,0},
			{0,1,1,0},
			{0,1,1,0},
			{0,0,0,0},
		},
		{
			{0,1,0,0},
			{0,1,0,0},
			{0,1,0,0},
			{0,1,0,0},
		},
		{
			{0,0,0,0},
			{1,1,0,0},
			{0,1,1,0},
			(0,0,0,0),
		},
		{
			{0,0,0,0},
			{0,0,1,1},
			{0,1,1,0},
			{0,0,0,0},
		},
		{
			{0,1,0,0},
			{0,1,0,0},
			{0,1,1,0},
			{0,0,0,0},
		},
		{
			{0,0,1,0},
			{0,0,1,0},
			{0,1,1,0},
			{0,0,0,0},
		},
		{
			{0,0,0,0},
			{0,0,1,0},
			{0,1,1,1},
			{0,0,0,0},
		}
	};

	int type = 0;
	int key = 0;
	while (true) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (block[type][i][j] == 1) {
					printf("■");
				}
				else {
					printf("  ");
				}
			}
			printf("\n");
		}
		printf("key 입력(1.바꾸기  2.나가기)");
		key = getchar();
		while (getchar() != '\n');
		if (key == '1') {
			type = rand() % 7;
		}
		else if (key == '2') {
			exit(0);
		}
		else {
			printf("오류!\n");
		}
	}

	//1월 24일
	//랜덤 숫자 뽑기
	int num[7] = { 0 };
	//srand:랜덤 시드(랜덤 산출 기준값), 현재 시간으로 지정
	//자료형 변경 :(int)<명시적 형변환 or 캐스팅
	srand((int)time(NULL));
	for (int i = 0; i < 7; i++) {
		num[i] = rand() % 100;
		printf("num[%d]: %d\n", i, num[i]);
	}

	//로또번호 뽑기
	int num[7] = { 0 };
	srand((int)time(NULL));
	for (int i = 0; i < 7; i++) {
		num[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		printf("num[%d]: %d\n", i, num[i]);
	}

	//가위바위보

	int player = 0;
	int AI = 0;
	int win = 0;
	int lose = 0;
	int draw = 0;

	while (true) {
		srand((int)time(NULL));

		printf("1.가위 2.바위 3.보 4.종료\n");
		scanf("%d", &player);

		AI = rand() % 3 + 1;

		switch (player) {
		case 가위:
			printf("player : 가위\n");
			break;
		case 바위:
			printf("player : 바위\n");
			break;
		case 보:
			printf("player : 보\n");
			break;
		case 종료:
			exit(0);
			break;
		default:
			printf("다시입력하세요\n");
		}
		switch (AI) {
		case 가위:
			printf("AI : 가위\n");
			break;
		case 바위:
			printf("AI : 바위\n");
			break;
		case 보:
			printf("AI : 보\n");
			break;
		default:
			printf("다시입력하세요\n");
		}
		if ((player == 가위 && AI == 보) ||
			(player == 바위 && AI == 가위) ||
			(player == 보 && AI == 바위)) {
			printf("이겼습니다!\n");
			win = win++;
		}
		else if (player == AI) {
			printf("비겼습니다!\n");
			draw = draw++;
		}
		else {
			printf("졌습니다!\n");
			lose = lose++;
		}

		printf("전적 : %d전 %d승 %d무 %d패\n", (win + draw + lose), win, draw, lose);
		//잠시 멈춤
		system("pause");
		//이전 출력결과 지우기
		system("cls");



		//2차원배열로 출력
		char gamestr[3][5] = { "가위", "바위", "보" };
		scanf("%d", &player);
		printf("player : %s", gamestr[player - 1]);
	}


	//1월 25일
	//Sum 함수 만들기
	int Sum(int a, int b);
	int main()
	{
		int a, b;
		printf("두 수 입력\n");
		scanf("%d%d", &a, &b);
		printf("%d + %d = %d\n", a, b, Sum(a, b));

	}
	int Sum(int a, int b) {
		return a + b;
	}
	//여기까지 프로젝트


	//void함수 활용
	void Add();
	int main()
	{
		for (int i = 0; i < 5; i++) {
			Add();
		}

	}
	//전역변수 add, 정적변수 value 둘다 값이 없어지지않고 누적됨
	int add;
	void Add() {
		static int value = 0;
		printf("현재값 %d\n", ++value);
	}
	//여기까지 프로젝트

	//1월 25일
	//함수는 첫글자 대문자, 변수는 전부 소문자로 통일
	//int ~~ : 반환값(return)이 있어야함
	//void ~~ : 반환값(return)이 없어도 됨


	//전역변수, 함수 활용, but 객체지향방식에서 문제가 생길수 있음(슬라이드60)
	//값에 의한 호출(값을 하나만 전달), 참조에 의한 호출(int*)
	//포인터는 값을 가지는게 아니라, 주소를 할당받음! 값이 아님! , 
	int Sum(int a, int b) {

		return a + b;
	}
	void Input(int* a, int* b) {

		printf("두 수 입력\n");
		scanf("%d %d", a, b);
	}
	void Output(int a, int b, int sum) {

		printf("%d + %d = %d\n", a, b, sum);
	}
	int main()
	{
		int num1, num2 = 0;
		Input(&num1, &num2);
		int sum = Sum(num1, num2);
		Sum(num1, num2);
		Output(num1, num2, sum);
	}


	//1월 26일
	//포인터 ptr 값 초기화!
	int* ptr = NULL;

	//팩토리얼 함수(재귀함수)
	int factorial(int n);

	int main()
	{
		int num = 0;
		printf("팩토리얼 계산, 숫자를 입력하세요\n");
		scanf("%d", &num);
		printf("\n%d! = ", num);
		printf("\n = %d\n", Fac(num));
	}
	int factorial(int n) {
		if (n == 1 || n == 0) {
			printf("%d", n);
			return 1;
		}
		else {
			printf("%d*", n);
			return n * factorial(n - 1);
		}
	}

	//피보나치 계산
	int fibo(int n);

	int main()
	{
		int num = 0;
		printf("피보나치 계산, 숫자를 입력하세요.\n");
		scanf("%d", &num);
		for (int i = 0; i < num; i++) {
			printf("%d ", fibo(i));
		}

	}
	int fibo(int n) {
		if (n == 1 || n == 0) {
			return 1;
		}
		else {
			return fibo(n - 1) + fibo(n - 2);
		}
	}

	//키보드 입력받기
	int key = 0;
	while (true) {

		if (kbhit()) {
			key = getch();
			if (key == 224) {
				key = getch();
				switch (key) {
				case UP:
					printf("UP눌림\n");
					break;
				case DOWN:
					printf("DOWN눌림\n");
					break;
				case LEFT:
					printf("LEFT눌림\n");
					break;
				case RIGHT:
					printf("RIGHT눌림\n");
					break;
				default:
					break;
				}
			}
			else {
				switch (key) {
				case SPACE:
					printf("SPACE눌림\n");
					break;
				case ESC:
					exit(0);
					break;
				default:
					break;
				}
			}
		}
	}

	//열거형 enum
	enum class_type
	{
		None = -1,
		KNIGHT,
		WARRIOR,
		ARCHOR,
		THIEF,
		HUNTER,
		MAGE,
		MAX
	};

	enum Weapon
	{
		None = -1,
		Knife,
		Sword,
		Axe,
		Bow,
		Magic_Knife = 100,
		Magic_Sword,
		Magic_Axe,
		Magic_Bow,
		Rare_Knife = 1000,
		Rare_Sword,
		Rare_Axe,
		Rare_Bow,
		Legendary_Knife = 10000,
		Legendary_Sword,
		Legendary_Axe,
		Legendary_Bow
	};

	//직업선택하기
	class_type myclass = None;
	printf("직업을 선택하세요.\n");
	printf("1. 기사\n");
	printf("2. 전사\n");
	printf("3. 궁수\n");
	printf("4. 도적\n");
	printf("5. 헌터\n");
	scanf("%d", &myclass);
	myclass = class_type(myclass - 1);
	switch (myclass)
	{
	case KNIGHT:
		printf("기사선택\n");
		break;
	case WARRIOR:
		printf("전사선택\n");
		break;
	case ARCHOR:
		printf("궁수선택\n");
		break;
	case THIEF:
		printf("도적선택\n");
		break;
	case HUNTER:
		printf("헌터선택\n");
		break;
	default:
		printf("다시입력\n");
		break;
	}

	//1월 27일
	//커서제어
	enum CURSOR_TYPE
	{
		NOCURSOR,
		SOLIDCURSOR,
		NORMALCURSOR
	};
	void gotoxy(int x, int y) {
		COORD pos = { 2 * x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
	void setcursortype(CURSOR_TYPE c) {
		CONSOLE_CURSOR_INFO CurInfo;

		switch (c) {
		case NOCURSOR:
			CurInfo.dwSize = 1;
			CurInfo.bVisible = FALSE;
			break;
		case SOLIDCURSOR:
			CurInfo.dwSize = 100;
			CurInfo.bVisible = TRUE;
			break;
		case NORMALCURSOR:
			CurInfo.dwSize = 20;
			CurInfo.bVisible = TRUE;
			break;
		}
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
	}
	//여기까지

	//랜덤하게 별찍기
	setcursortype(NOCURSOR);
	for (int y = 0; y < 30; y++) {
		for (int x = 0; x < 40; x++) {
			gotoxy(rand() % 40, rand() % 30);
			printf("★");
			Sleep(200);
		}
	}

	//버블정렬
#define MAX_NUM 20
	int num[MAX_NUM];
	void BubbleSort();

	int main()
	{
		srand((unsigned int)time(NULL));
		printf("버블소트 전\n");
		for (int i = 0; i < MAX_NUM; i++) {
			num[i] = rand() % 100;
			printf("%4d", num[i]);
			if (i > 0 && (i + 1) % 5 == 0) {
				printf("\n");
			}
		}
		BubbleSort();
		printf("\n버블소트 후\n");
		for (int i = 0; i < MAX_NUM; i++) {
			printf("%4d", num[i]);
			if (i > 0 && (i + 1) % 5 == 0) {
				printf("\n");
			}
		}
		printf("\n");
	}
	void BubbleSort()
	{
		int temp = 0;
		for (int i = 0; i < MAX_NUM - 1; i++) {
			for (int j = 0; j < MAX_NUM - i - 1; j++) {
				if (num[j] > num[j + 1]) {
					temp = num[j];
					num[j] = num[j + 1];
					num[j + 1] = temp;
				}
			}
		}
	}

	//버블정렬 시간 확인, time.h 적용
	{clock_t start, end;
	srand((unsigned int)time(NULL));
	//printf("버블소트 전\n");
	for (int i = 0; i < MAX_NUM; i++) {
		num[i] = rand() % MAX_NUM + 1;
		//printf("%6d", num[i]);
		/*if (i > 0 && (i + 1) % 5 == 0) {
			printf("\n");
		}*/
	}
	start = clock();
	printf("버블정렬을 시작합니다\n");
	BubbleSort();
	end = clock();
	printf("버블정렬에 걸린시간 : %.2lf초\n", (end - start) / (double)CLOCKS_PER_SEC);
	for (int i = 0; i < MAX_NUM; i++) {
		/*printf("%6d", num[i]);
		if (i > 0 && (i + 1) % 5 == 0) {
			printf("\n");
		}*/
	}
	printf("\n");
	}

	//타이머만들기
	clock_t start, current, now;
	start = clock();
	int secpermsec = 1000;
	int minpermsec = 60 * secpermsec;
	int hourpermsec = 60 * minpermsec;
	int daypermsec = 24 * hourpermsec;

	int day, hour, min, sec;
	while (true)
	{
		current = clock();
		now = current - start;

		day = now / daypermsec;
		if (day > 0) {
			now -= day * daypermsec;
		}
		hour = now / hourpermsec;
		if (hour > 0) {
			now -= hour * hourpermsec;
		}
		min = now / minpermsec;
		if (min > 0) {
			now -= min * minpermsec;
		}
		sec = now / secpermsec;

		printf("%d일 %d시 %d분 %d초\n", day, hour, min, sec);
		Sleep(1000);
		system("cls");
	}


	//1월 28일
	//삼항연산자
//if else랑 같음
#define MAX(a,b) a>b ? a:b
/*=int ans
if (a > b) {
	ans = a;
}
else if (a < b) {
	ans = b;
}*/
#define MIN(a,b) a<b ? a:b
#define P printf

#define SQUARE1(a) a * a
#define SQUARE2(a) ((a)*(a))



	int main()
	{
		P("%d, %d 중 큰 값은 : %d\n", 30, 100, MAX(30, 100));
		P("%d, %d 중 작은 값은 : %d\n", 30, 100, MIN(30, 100));
		P("SQUARE1(10) = %d\n", SQUARE1(10));
		P("SQUARE2(10) = %d\n", SQUARE2(10));
		P("SQUARE1(3+7) = %d\n", SQUARE1(3 + 7));
		P("SQUARE2(3+7) = %d\n", SQUARE2(3 + 7));

	}


	//ifdef -> 모바일, pc UI를 한번에 설정할때 코드에 아예 포함 안시키는경우 등에 사용
#define P printf

#define CAR
//#define BUS
#//define TRAIN
#define IPHONE
#define ANDROID
//#define WIN7
//#define WIN8
//#define WIN10
//#define WIN11


	int main()
	{
#ifdef CAR
		P("나는 자동차로 출근합니다.\n");
#endif
#ifndef BUS
		P("나는 버스로 출근하지 않습니다.\n");
#endif

		P("\n");
#if ((defined IPHONE)||(defined ANDROID))
		P("모바일 코드를 실행합니다.\n");
#elif((defined WIN7)||(defined WIN8)||(defined WIN10))
		P("PC 코드를 실행합니다.\n");
#endif
#if((!defined WIN7)&&(!defined WIN8)&&(!defined WIN10))
		P("PC버전이 활성화 되어있지 않습니다.\n");
#endif

	}


	//2월 4일
	//변수의 저장 위치 확인(전역+정적/동적/지역+매개)
	int global = 300;//전역변수


	int main()
	{
		static int a = 20;//정적변수
		int b = 30;//지역변수
		//동적변수선언은 변수의 '주소'를 포인터에 반환해줘야 참조 가능
		int* p = (int*)malloc(sizeof(int));
		//(int*) : malloc의 반환값을 int형으로 지정, int사이즈 만큼의 변수에서 int 하나 저장, short로 하면 short형 2개 저장
		*p = 50;
		printf("전역변수 global=%3d, &global=%d\n", global, &global);
		printf("정적변수 a=%3d, &a=%d\n", a, &a);
		printf("지역변수 b=%3d, &b=%d\n", b, &b);
		printf("포인터 *p=%3d, p=%d\n", *p, p);
		printf("포인터 *p=%3d, &p=%d\n", *p, &p);
	}

	//2월 5일
	//포인터와 변수 값 확인하기
	int a = 10;
	char b = 'A';
	double c = 1234.56f;
	int* ptr1 = &a;
	char* ptr2 = &b;
	double* ptr3 = &c;

	printf("int형\t\t a의 값 %d,\t\t 주소 %d,\t 크기 %d\n", a, &a, sizeof(a));
	printf("char형\t\t b의 값 %d,\t\t 주소 %d,\t 크기 %d\n", b, &b, sizeof(b));
	printf("double형\t c의 값 %f,\t 주소 %d,\t 크기 %d\n", c, &c, sizeof(c));
	printf("int형\t\t ptr1의 값 %d,\t 주소 %d,\t 크기 %d\n", ptr1, &ptr1, sizeof(ptr1));
	printf("char형\t\t ptr2의 값 %d,\t 주소 %d,\t 크기 %d\n", ptr2, &ptr2, sizeof(ptr2));
	printf("double형\t ptr3의 값 %d,\t 주소 %d,\t 크기 %d\n", ptr3, &ptr3, sizeof(ptr3));


	//포인터 활용법
	int nData = 10;
	int* pnData = &nData;

	printf("%d, %d\n", nData, *pnData);
	printf("%d, %d\n", &nData, pnData);
	*pnData += 20;
	printf("%d\n", nData);


	//swap 함수 만들기
	void swap(int* a, int* b);
	int main()
	{
		int a = 3;
		int b = 2;
		swap(&a, &b);
		printf("3. 함수호출 후 a : %d, b : %d\n", a, b);
	}
	void swap(int* a, int* b) {
		int temp = 0;
		printf("1.변경전 a : %d, b : %d\n", *a, *b);
		temp = *a;
		*a = *b;
		*b = temp;
		printf("2.변경후 a : %d, b : %d\n", *a, *b);
	}

	//
	//포인터상수
	char a[10];
	char b[10];
	//상수에 상수를 대입은 불가능!
	a = b
	//

	//char형 포인터
		char str1[5] = "abcd";
	//char형 포인터에만 예외적으로 밑의 코드가 가능
	const char* str2 = "ABCD";

	printf("%s\n", str1);
	printf("%s\n", str2);

	str1[0] = 'x';
	//str2[0] = 'x';

	printf("%s\n", str1);
	printf("%s\n", str2);

	//포인터와 배열
	int arr[3] = { 10,20,30 };
	int* ptr = &arr[0];
	printf("%d %3d \n", ptr[0], arr[0]);
	printf("%d %3d \n", ptr[1], arr[1]);
	printf("%d %3d \n", ptr[2], arr[2]);
	printf("%d %3d \n", *ptr, *arr);
	printf("%d %3d \n", *(ptr + 0), *(arr + 0));
	printf("%d %3d \n", *(ptr + 1), *(arr + 1));
	printf("%d %3d \n", *(ptr + 2), *(arr + 2));

	//포인터와 배열2
	int array[3] = { 0,1,2 };
	printf("array의 값 : %d\n", array);
	printf("array의 주소 : %d\n", &array);
	printf("array+1 : %d\n", array + 1);
	printf("&array+1 : %d\n", &array + 1);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", array + i);
	}

	//함수 두개를 하나로 합치기
	int Min(int num1, int num2)
	{
		return num1 < num2 ? num1 : num2;
	}
	int Max(int num1, int num2)
	{
		return num1 > num2 ? num1 : num2;
	}
	void Compare(int num1, int num2, int* min, int* max)
	{
		*max = num1 > num2 ? num1 : num2;
		*min = num1 < num2 ? num1 : num2;
	}

	//각각 선언된 변수를 포인터배열로 컨트롤하기
	int a = 10, b = 20, c = 30;
	int* pArr[3] = { &a, &b, &c };

	printf("%d %10d, %3d \n", &a, pArr[0], *pArr[0]);
	printf("%d %10d, %3d \n", &a, pArr[1], *pArr[1]);
	printf("%d %10d, %3d \n", &a, pArr[2], *pArr[2]);



	//2월 8일
	
	//char형 포인터 변수에 상수값 취급하는 문자열 저장하기
	const char* pArr[3] = { "C언어", "C++언어","C#언어" };

	printf("%s\n", pArr[0]);
	printf("%s\n", pArr[1]);
	printf("%s\n", pArr[2]);

	for (int i = 0; i < 3; i++) {
		printf("%s\n", pArr[i]);
	}

	//2차원 포인터

	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 5,6,7,8 };
	int arr3[4] = { 9,10,11,12 };
	int* pArr[3] = { arr1, arr2, arr3 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%4d", pArr[i][j]);
		}
		printf("\n");
	}

	//배열을 매개변수로 활용
	int ArrayAdd(int* pArr/*(=arr[])*/, int size);
	int main()
	{
		int arr[5] = { 3,6,9,12,15 };
		int size = (sizeof(arr) / sizeof(int));
		printf("배열의 총 합은 %d 입니다.\n", ArrayAdd(arr, size));

	}
	int ArrayAdd(int* pArr, int size)
	{
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += pArr[i];
		}
		return sum;
	}

	//배열을 매개변수로 활용2
	int ArrayMax(int* pArr, int size);
	int main()
	{
		int arr[10] = { 0 };
		srand((int)time(NULL));
		int size = (sizeof(arr) / sizeof(int));

		printf("배열 :");
		for (int i = 0; i < 10; i++) {
			arr[i] = rand() % 100 + 1;
			printf("%4d", arr[i]);
		}
		printf("\n배열중 가장 큰 값은 %d 입니다.\n", ArrayMax(arr, size));

	}
	int ArrayMax(int* pArr, int size)
	{
		int max = 0;
		max = pArr[0];
		for (int i = 1; i < size; i++) {
			if (max < pArr[i]) {
				max = pArr[i];
			}
		}
		return max;
	}

	//2차원 포인터2

	void Swap(const char** pstr1, const char** pstr2);
	int main()
	{
		const char* pstr1 = "Bear";
		const char* pstr2 = "rabbit";
		printf("1.바꾸기 전 pstr1 = %s pstr 2 = %s\n", pstr1, pstr2);
		Swap(&pstr1, &pstr2);
		printf("2.바꾼   후 pstr1 = %s pstr 2 = %s\n", pstr1, pstr2);

	}
	void Swap(const char** pstr1, const char** pstr2)
	{
		const char* str;
		str = *pstr1;
		*pstr1 = *pstr2;
		*pstr2 = str;
	}

	//동적변수 선언
	int* pBuffer = (int*)malloc(sizeof(int) * 100);
	printf("버퍼에 할당된 메모리 크기 : %2dByte\n", sizeof(pBuffer));

	//_msize : 메모리의 크기를 알려주는 함수
	printf("버퍼에 할당된 메모리 크기 : %2dByte\n", _msize(pBuffer));

	//free : 동적변수 해제, 넣지 않으면 프로그램이 종료되어도 동적변수 삭제가 안됨
	//메모리 누수의 원인이 됨.
	//언리얼은 C++기반이라 동적변수 해제에 신경써야함
	//C#, 자바에서는 시스템에서 자동으로 동적변수 해제함
	free(pBuffer);

	//동적변수 선언, 배열처럼 활용
	int length = 0;
	int* pList = NULL;
	printf("배열의 길이 입력 : ");
	scanf("%d", &length);
	pList = (int*)malloc(sizeof(int) * length);
	for (int i = 0; i < length; i++) {
		pList[i] = i + 1;
		printf("pList[%d] : %3d\n", i, pList[i]);
	}
	printf("\n");
	free(pList);

	//동적변수 종류별 선언 및 확인
	int* ptr = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++) {
		*(ptr + i)/*(=ptr[i])*/ = i;
	}
	for (int i = 0; i < 10; i++) {
		printf("ptr + %d의 주소: %p\t", i, (ptr + i));
		printf("*(ptr + %d): %d\n", i, *(ptr + i));
	}
	char* cptr = (char*)malloc(sizeof(char) * 10);
	for (int i = 0; i < 10; i++) {
		*(cptr + i) = 'a' + i;
	}
	for (int i = 0; i < 10; i++) {
		printf("cptr + %d의 주소: %p\t", i, (cptr + i));
		printf("*(cptr + %d): %c\n", i, *(cptr + i));
	}
	double* dptr = (double*)malloc(sizeof(double) * 10);
	for (int i = 0; i < 10; i++) {
		*(dptr + i) = 3.14 * i;
	}
	for (int i = 0; i < 10; i++) {
		printf("dptr + %d의 주소: %p\t", i, (dptr + i));
		printf("*(dptr + %d): %lf\n", i, *(dptr + i));
	}
	free(ptr);
	free(cptr);
	free(dptr);
}



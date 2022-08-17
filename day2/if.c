#include <stdio.h>
#define print printf

int main(void)
{
	// 강의 8월 13일 -> 오늘은 아마 if문 배우는 듯. 
	

	//int A;		// 한변의 길이
	//int B;		// 정사각형 넓이
	//printf("정사각형의 변의 길이를 입력하세요 : \n");
	//scanf("%d", &A);
	//B = A * A;
	//printf("정사각형의 넓이는 %d입니다.", B);

	//int num1, num2, tot;
	//double avg;
	//printf("두 과목의 점수 : ");
	//scanf("%d %d", &num1, &num2);
	//tot = num1 + num2;
	//avg = tot / 2.0;
	//printf("평균 : %.1lf점 입니다.\n", avg);

	/*int seats = 70;
	int audience = 65;
	double rate;
	rate = (double)audience / (double)seats * 100;
	printf("입장률 : %.1lf%%", rate);*/

				// 내 풀이 
	/*int price, slae, tot, A;
	
	printf("제품의 가격은? :");
	scanf("%d", &price);
	printf("할인율(%%)? : ");
	scanf("%d", &slae);
	tot = price * (100 - slae) / 100;
	printf("할인가 : %d(%d원 할인)", tot, price-tot);*/

				// 강사님의 풀이
	/*int price, discount, sell;
	printf("제품의 가격? ");
	scanf("%d", &price);
	printf("할인율 (%%)? : ");
	scanf("%d", &discount);
	sell = price * (100 - discount) / 100;
	printf("할인가 : %d원 (%d원 할인) \n", sell, price - sell);*/


				// 내 풀이
	/*double km, speed;
	int tot;

	printf("이동 거리(KM)? : ");
	scanf("%lf", &km);
	printf("예상 속력(km/h)? : ");
	scanf("%lf", &speed);
	tot = km / speed * 60;
	printf("도착까지 예상 소요 시간은 %d분입니다.", tot);*/

				// 강사님 풀이
	/*double distance, velocity;
	int min;
	printf("이동 거리 (km)? : ");
	scanf("%lf", &distance);
	printf("예상 속력 (km/h)? : ");
	scanf("%lf", &velocity);
	min = (int)distance / velocity * 60;
	printf("도착까지 예상소요 시간은 %d분 입니다.", min);*/

	/* 선택문, 분기문, 반복문->제어문이라고 말함
		선택문 : if, switch ~ case
		반복문 : for, while, do ~ while
		분기문 : break, continue
	*/

	/*int score;

	printf("점수? : ");
	scanf("%d", &score);
	if (score < 70)
	{
		printf("재시험 \n");
	}
	printf("다음 수업은 일주일 후입니다.\n");*/ 

	/*int res;
	printf("정수를 입력하세요.");
	scanf("%d", &res);

	if (res == 1)
	{
		printf("1이 입력이되었습니다. \n");
	}

	printf("처리를 종료합니다.\n");*/

	/*int res;
	printf("정수를 입력하세요.");
	scanf("%d", &res);

	if (res < 0) printf("입력한 값은 0보다 작다\n");
	if (res > 0) printf("입력한 값은 0보다 크다\n");
	if (res == 0) printf("입력한 값은 0이다\n");

	printf("처리를 종료합니다.\n");*/

	/*int a = 10;
	if (a >= 10) a = 1;
	else a = -1;

	printf("a의 값은 : %d\n", a);*/

	/*int num, abs;
	printf("점수? : ");
	scanf("%d", &num);

	if (num < 0)
	{
		abs = -num;
	}
	else
	{
		abs = num;
	}

	printf("%d의 절대값 = %d\n", num, abs);*/

	/*int num;
	printf("점수 입력 : ");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("음수입니다. \n");
	}
	else if (num > 0)
	{
		printf("양수 입니다. \n");
	}
	else
	{
		printf("0입니다. \n");
	}*/

	/*int a = 0, b = 0;
	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	printf("b : %d\n", b);*/

	/*int a;
	double num1, num2, res;
	printf("1. 덧셈, 2. 뺄셈, 3. 곱셈, 4. 나눗셈 \n");
	printf("선택은? \n");
	scanf("%d", &a);
	printf("두 개의 실수 입력 : \n");
	scanf("%lf %lf", &num1, &num2);
	if (a == 1)
	{
		res = num1 + num2;
	}
	else if (a == 2)
	{
		res = num1 - num2;
	}
	else if (a == 3)
	{
		res = num1 * num2;
	}
	else
	{
		res = num1 / num2;
	}
	printf("결과는 : %lf\n", res);*/

	/*int res;
	char ans;
	printf("몇번째 선택할까요 ? : \n");
	printf("정수를 입력하세요 : \n");
	scanf("%d", &res);
	ans = (res == 1) ? 'A' : 'B';
	printf("%c 코스를 선택했습니다.\n", ans);*/

	/*int num, abs;
	printf("정수 입력 : \n");
	scanf("%d", &num);
	abs = num > 0 ? num : num * (-1);
	printf("절대값 : %d\n", abs);*/

	/*int rank = 2, m = 0;
	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	print("m : %d\n", m);*/

	/*char sel;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력 : \n");
	scanf("%c", &sel);
	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Good Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'E':
	case 'e':
		printf("Evening\n");
		break; 
	default:
		break;
	}*/

		// 내 풀이
	/*double key, wg;
	if (key > 187.5)
	{
		printf("OK");
	}
	else if (wg < 80)
	{
		printf("OK");
	}
	else
	{
		printf("cancle");
	}*/

			//강사님 풀이
	/*double height = 179.5, weight = 75.0;
	if ((height >= 187.5) && (weight < 80.0))
	{
		printf("OK\n");
	}
	else
	{
		printf("cancle\n");
	}*/

			// 내 풀이
	/*int A, B;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &A, &B);
	if (A < B)
	{
		printf("%d 보다 %d(이)가 큽니다.", A, B);
	}
	else if (A > B)
	{
		printf("%d보다 %d(이)가 작습니다,", A, B);
	}
	else if (A == B)
	{
		printf("%d랑 %d(은)는 같습니다.", A, B);
	}
	else
	{
		printf("오류입니다.\n");
	}*/

				// 강사님 풀이
	/*int num1, num2;
	printf("두 개의 정수를 입력하세여 : ");
	scanf("%d %d", &num1, &num2);
	if (num1 < num2)
	{
		printf("%d은 %d보다 작은값입니다.\n", num1, num2);
	}
	else if (num1 > num2)
	{
		printf("%d은 %d보다 큰값입니다,\n", num1, num2);
	}
	else if (num1 == num2)
	{
		printf("% d 와 % d는 같습니다.");
	}*/

	/*int num1;
	printf("0부터 10까지의 정수를 입력하세요 : ");
	scanf("%d", &num1);

	if (num1 < 11)
	{
		printf("정답입니다. ");
	}
	else
	{
		printf("틀렸습니다. ");
	}*/

	/*else if (num1 < 11)
	{
		printf("정답입니다 ~ ");
	}
	else if (num1 > 10)
	{
		printf("틀렸습니다.");
	}
	else
	{
		printf("오류입니다.");
	}*/

				//강사님의 풀이
	/*int num;
	printf("0부터 10까지의 정수를 입력하세요.");
	scanf("%d", &num);
	if (num >= 0 && num <= 10)
	{
		printf("정답입니다.\n");
	}
	else
	{
		printf("틀렸습니다. \n");
	}*/

				// 내 풀이법
	/*int Ko, En, Ma;
	double avg;
	printf("국어, 영어, 수학의 성적을 입력하세요 : ");
	scanf("%d %d %d", &Ko, &En, &Ma);		//Ko = 국어, En = 영어, Ma = 수학
	avg = (Ko + En + Ma) / 3.0;
	printf("평균은 ? : %lf\n", avg);
	if (avg >= 90)
	{
		printf("학점은 : A");
	}
	else if (avg >= 80)
	{
		printf("학점은 : B");
	}
	else if (avg >= 70)
	{
		printf("학점은 : C");
	}
	else if (avg >= 60)
	{
		printf("학점은 : D");
	}
	else
	{
		printf("학점은 : F");
	}*/


				// 강사님 풀이법
	/*int kor, eng, math;
	double avg;
	printf("국어, 영어, 수학의 성적 입력 : ");
	scanf("%d%d%d", &kor, &eng, &math);
	avg = (kor + eng + math) / 3.0;
	printf("평균은 : %lf \n", avg);
	if (avg >= 90.0)
	{
		printf("A\n");
	}
	else if (avg >= 80.0)
	{
		printf("B\n");
	}
	else if (avg >= 70.0)
	{
		printf("C\n");
	}
	else if (avg >= 60.0)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}*/

			// 내 풀이법
	/*int year, year_tot, year_tot_1;
	printf("연도는 ? : ");
	scanf("%d", &year);
	year_tot = year % 4;
	year_tot_1 = year / 100;
	if ((year_tot = 0) && (year_tot_1 = 400))
	{
		printf("윤년입니다.");
	}
	else
	{
		printf("%d는 윤년이 아닙니다.", year);
	}*/

			// 강사님 풀이법
	//int year;
	//printf("연도 ? : ");
	//scanf("%d", &year);
	//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // || -> OR임
	//{
	//	printf("%d년은 윤년입니다. \n", year);
	//}
	//else
	//{
	//	printf("%d년은 윤년이 아닙니다. \n", year);
	//}

	/*int year;
	printf("연도 ? : ");
	scanf("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0) printf("%d년은 윤년입니다.\n", year);
			else printf("%d년은 윤년이 아닙니다. \n", year);
		}
		else
		{
			printf("%d년은 윤년입니다 \n ", year);
		}
		
	}
	else
	{
		printf("%d년은 윤년이 아닙니다. \n", year);
	}*/

		//내 풀이법
	/*int num1, num2;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num1);
	num2 = num1 % 2;
	switch (num2)
	{
	case '0':
		printf("짝수입니다.");
		break;
		
	default:
		break;
	}*/

			//강사님 풀이법
	/*int num;
	printf("정수 입력 : ");
	scanf("%d", &num);
	switch (num % 2)
	{
	case 0:
		printf("짝수입니다.\n");
		break;
	default:
		printf("홀수입니다,\n");
		break;
	}*/


		// 내 풀이법
	/*int num;
	printf("성적을 입력하세요 : ");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("성적은 1입니다. \n 노력이 필요합니다.");
		break;
	case 2:
		printf("성적은 2입니다. \n 조금 더 노력하세요.");
		break;
	case 3:
		printf("성적은 3입니다. \n 잘했습니다.");
		break;
	case 4:
		printf("성적은 4입니다. \n 매우 잘했습니다.");
		break;
	case 5:
		printf("성적은 5입니다. \n 매우 우수합니다.");
		break;
	}*/

		// 강사님 풀이법
	/*int res;
	printf("성적을 입력하세여 : ");
	scanf("%d", &res);
	printf("성적은 %d입니다.", res);
	switch (res)
	{
	case 1:
		printf("노력이 필요합니다,");
		break;
	case 2:
		printf("조금 더 노력하세요.");
		break;
	case 3:
		printf("잘했습니다.");
		break;
	case 4:
		printf("매우 잘했습니다.");
		break;
	case 5:
		printf("매우 우수합니다,");
		break;
	}*/

	/*int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	if (num % 2 == 0 && num % 3 == 0)
	{
		printf("2와 3의 공배수 입니다.");
	}
	else if (num % 2 == 0)
	{
		printf("2의 배수입니다.");
	}
	else if (num % 3 == 0)
	{
		printf("3의 배수입니다.");
	}
	else
	{
		printf("배수가 없습니다");
	}*/

	/*int i = 1;
	while (i <= 5)
	{
		printf("%d번째 반복입니다. \n", i);
		i++;
	}
	printf("반복을 종료했습니다.\n");*/

	//int a = 1;
	//while (a < 10)
	//{
	//	a *= 2; // 복합대입연산자 -> a = a*2
	//	printf("%d\n", a);
	//}
	//printf("a의 답은 ? : %d\n", a);

	/*int dan = 0, num = 1;
	printf("몇단 ? : ");
	scanf("%d", &dan);
	while (num < 10)
	{
		printf("%d X %d = %d\n", dan, num, dan * num);
		num++;
	}*/


	/*int i = 1;
	do
	{
		printf("%d번째 반복합니다. \n", i);
		i++;
	} while (i <= 5);*/

	/*int a = 1;
	do
	{
		a = a * 2;
	} while (a < 10);
	{
		printf("a : %d\n", a);
	}*/

	/*int i;
	for (i = 0; i <= 5 ; i++)
	{
		printf("반복을 하고 있습니다.%d \n", i);
	}
	printf("반복을 종료했습니다. \n");*/

	/*int a = 1;
	int i;
	for (i = 0; i < 3; i++)
	{
		a *= 2;
	}
	printf("a : %d\n", a);*/

	//int num, sum = 0, i;
	//printf("몇까지의 합계를 계산할까요?");
	//scanf("%d", &num);
	//for (i = 1; i <= num; i++)
	//{
	//	sum += i; // 누적합계
	//}
	//printf("1부터 %d의 합계는 %d입니다.", num, sum);

	/*int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("i는 %d : j는 %d \n", i, j);
		}
	}*/

	/*int i, j;
	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}*/

	// 다음 수업전까지 if문 더 연습하고 오기 ! !



	return 0;
}
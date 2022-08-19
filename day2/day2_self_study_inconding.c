#include <stdio.h>
#define print printf

int main(void)
{
			// 식과 연산자 예제문
	/* 예제문 2번
	int H, W;	//H = 한변, W = 넓이
	printf("정사각형의 변의 길이를 입력하세요. : ");
	scanf("%d", &H);
	W = H * H;
	printf("정사각형의 넓이는 %d입니다.", W);*/

	/* 예제문 3번
	int num1, num2;
	double avg;
	printf("두 과목의 점수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	avg = (num1 + num2) / 2.00;
	printf("두 과목의 평균은 : %.1lf 입니다.", avg);*/

	/* 예제문 4번 -> 한번 틀림 다시 한번 풀어보자 ^^
	double seat = 70, people = 65, tot;
	tot = people / seat * 100;
	printf("입장률 : %.1lf%% 입니다", tot);*/

	/* 예제문 5번
	int num1, sale, tot;
	printf("제품의 가격을 기입하세요 : ");
	scanf("%d", &num1);
	printf("할인율(%%)을 적으세요 : ");
	scanf("%d", &sale);
	tot = num1 * (100 - sale) / 100;
	printf("할인가 : %d (%d원 할인)", tot, num1 - tot);*/

	/*제어문이란 ? = > 선택문, 분기문, 반복문들을 합쳐서 말한다.
		선택문 : if, switch ~ case
		반복문 : for, while, do ~ while
		분기문 : break, continue
			여기서 나는 switch문 잘 이해안됨;; 
	*/
	
	/*int score;

	printf("점수를 적으세요 : ");
	scanf("%d", &score);
	if (score < 70)
	{
		printf("재시험 \n");
	}
	printf("다음 수업은 일주일 후입니다. \n");*/

	/*int res;
	printf("정수를 입력하세요 : ");
	scanf("%d", &res);
	if (res == 1)
	{
		printf("1이 입력되었습니다 !! \n");
	}
	else
	{
		printf("1을 입력하지 않았습니다. %d를 입력하였습니다. \n", res);
	}
	printf("처리를 종료합니다. \n");*/

	
	/*int res;
	printf("정수를 입력하세요 : ");
	scanf("%d", &res);
	
	if (res < 0)
	{
		printf("입력한 값은 0보다 작습니다.\n");
	}
	else if (res > 0)
	{
		printf("입력한 값은 0보다 큽니다. \n");
	}
	else if (res == 0)
	{
		printf("입력한 값은 0과 같습니다.\n");
	}
	printf("처리를 종료합니다.");*/

	/*int a = 10;
	if (a >= 10)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}
	printf("a의 값은 : %d\n", a);*/


	/*int num, abs;
	printf("정수를 입력하세용 : ");
	scanf("%d", &num);
	if (num < 0)
	{
		abs = -num;
	}
	else
	{
		abs = num;
	}
	printf("%d의 절대값은 = %d\n", num, abs);*/

	/*int num;
	printf("정수를 입력하세요~ : ");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("%d는 음수입니다. \n", num);
	}
	else if (num > 0)
	{
		printf("%d는 양수입니다. \n", num);
	}
	else
	{
		printf("%d는 0일겁니다 ~~ \n", num);
	}*/


	/*int a = 6, b = 0;
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
	printf("사칙연산 중 고르십시오. : \n");
	scanf("%d", &a);
	printf("두개의 실수 입력하세요 : ");
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
	else if (a == 4)
	{
		res = num1 / num2;
	}
	printf("결과는 : %.1lf\n", res);*/


	/*int res;
	char ans;
	printf("몇번째 선택할까요 ? \n");
	printf("정수를 입력하세요. \n");
	scanf("%d", &res);
	ans = (res == 1) ? 'A' : 'B';
	printf("%c 코스를 선택했습니다. \n", ans);*/

	/*int res;
	char ans;
	printf("몇번째 선택할까요?? \n");
	printf("정수를 입력하세요. \n");
	scanf("%d", &res);
	ans = (res == 3) ? 'A' : 'B';
	printf("%c 코스를 선택했습니다. \n", ans);*/

	/*int num, abs;
	printf("정수 입력 : \n");
	scanf("%d", &num);
	abs = num > 0 ? num : num * (-1);
	printf("절대값 : %d\n", abs);*/

	/*int rank, m = 0;
	printf("1, 2, 3 중에 하나를 선택해주세요 : \n");
	scanf("%d", &rank);
	switch (rank)
	{
	case 1 : 
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
	printf("m : %d\n", m);*/

	/*char sel;
	printf("M 오전, A 오후, E 저녁\n");
	printf("입력 : \n");
	scanf("%c", &sel);
	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Good Morning \n");
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
		printf("아마 잘못 입력하신거 같은데요");
		break;
	}*/
	
	/*int i = 1;
	while (i <= 7)
	{
		printf("%d번 학생은 멍청이 ~ \n", i);
		i++;
	}
	printf("다음주에는 천재가 될거에요 ~ ");*/
	
	/*int a = 1;
	while (a < 10)
	{
		a *= 2;
		printf("%d\n", a);
	}
	printf("a의 답은 ? : %d\n", a);*/

	/*int dan = 0, num = 1;
	printf("몇단 ? : ");
	scanf("%d", &dan);
	while (num < 10)
	{
		printf("%d * %d = %d \n", dan, num, dan * num);
		num++;
	}*/

	/*int dan = 0, num = 1;
	printf("몇단을 보여줄까요?? : ");
	scanf("%d", &dan);
	while (num < 10)
	{
		printf("%d * %d = %d\n", dan, num, dan * num);
		num++;
	}
	printf("프로그램은 종료합니다.");*/

	/*int i;
	for (i = 1; i <= 5; i++)
	{
		printf("%d만큼 반복을 하고 있습니다. \n", i);
	}
	printf("반복을 종료합니다.\n");*/

	/*int a = 1;
	int i;
	for (i = 0; i < 3; i++)
	{
		a *= 2;			// 1*2 -> 2*2 -> 4*2 최종적으로 8임
		printf("%d\n", a);
	}
	printf("a : %d\n", a);*/

	/*int num, sum = 0, i;
	printf("몇까지의 합계를 계산할까요 ??" );
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		sum += i;	// 누적합계
		printf("%d\n", sum);
	}
	printf("1부터 %d의 합계는 %d입니다.", num, sum);*/

	/*int res, i;
	printf("몇 번째 루프를 중지할까요?? (1 ~ 10)\n");
	scanf("%d", &res);
	for (i = 1; i <= 10; i++)
	{
		printf("%d번째 처리 합니다. \n", i);
		if (i == res)
		break;
	}*/


			// ------------ break 문 ------------

	/*int res;
	printf("성적을 입력하세요. (1 ~ 5)\n");
	scanf("%d", &res);

	switch (res)
	{
	case 1:
		printf("재시험 입니다. \n");
		break;
	case 2:
		printf("조금 더 노력하세요. \n");
		break;
	case 3:
		printf("노력하세요 \n");
		break;
	case 4:
		printf("잘했습니다 \n");
		break;
	case 5:
		printf("매우 잘하셨습니다. \n");
		break;
	default:
		printf("1 ~ 5까지의 성적을 입력하세요. \n");
		break;
	}*/

			// ------------ continue 문 ------------
	/*int res, i;
	printf("몇 번째 처리를 건너뛸까요?? ");
	scanf("%d", &res);

	for (i = 1; i <= 10; i++)
	{
		if (i == res)
		continue;
		printf("%d번째 처리입니다. \n", i);
	}*/

	/*int res, i;
	printf("몇 번째 처리를 건너뛸래?? : ");
	scanf("%d", &res);
	for (i = 1; i <= 10; i++)
	{
		if (i == res)
		continue;
		printf("%d번째 처리를 합니다.\n", i);
	}*/


			// 이게 뭐지 ;; 
	/*int num; 
	printf("start! \n");
	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
		continue;
		printf("%d \n", num);
	}
	printf("end! \n");*/


	return 0;
}
#include <stdio.h>

int main(void)
{
		/*키가 187.5cm이상이고 몸무게가 80.0kg 미만이면서 OK를 출력하고 
		그 이외의 경우에는 cancle을 출력하는 프로그램을 작성하세요. 
		키는 179.5, 몸무게는 75.0으로 double형 변수에 초기화합니다. 
		(if문으로 작성)
		*/

	double height = 179.5, weight = 75.0;
	if ((height >= 187.5) && (weight < 80.0))
	{
		printf("OK");
	}
	else
	{
		printf("cancle");
	}

		/*키보드로 두 개의 정수 값을 입력하고, 
		경우에 따라 다음과 같은 메시지를 
		출력하는 코드를 작성하시오. (if문으로 작성)*/

	int num1, num2;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
	{
		printf("%d보다 %d이 큰 값입니다.", num1, num2);
	}
	else if (num1 > num2)
	{
		printf("%d보다 %d이 작은 값 입니다.", num1, num2);
	}
	else if (num1 == num2)
	{
		printf("%d 와 %d는 같습니다.", num1, num2);
	}

		/* 0 ~ 10값을 입력했을 때 정답입니다. 
		라고 출력되게 하고 아니면 틀렸습니다. 
		라고 출력되도록 코드를 작성하시오. 
		(if문으로 작성)*/

	int num;
	printf("0부터 10까지의 정수를 입력하세요 : ");
	scanf("%d", &num);
	if (num <= 10)
	{
		printf("정답입니다 :)");
	}
	else
	{
		printf("1 ~ 10 사이의 숫자가 아닙니다. :(");
	}

		/*학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하세요. 
		학생의 성적이 90점 이상이면 A, 80점이상이면 B, 70점 이상이면 C, 
		60점 이상이면 D 그리고 그 미만이면 F로 처리하시오. 
		프로그램 실행시 순서대로 국어, 영어, 수학의 점수를 입력 받는다. 
		그리고 평균을 구한 다음 그에 적절한 학점을 출력한다. 
		(if문으로 작성)*/

	int Ko, En, Ma;
	double avg;
	printf("국어, 영어, 수학의 성적을 입력하세요 : ");
	scanf("%d %d %d", &Ko, &En, &Ma);
	avg = (Ko + En + Ma) / 3.00;
	printf("평균은 : %lf점 입니다.\n", avg);
	if (avg >= 90)
	{
		printf("학점은 A입니다.");
	}
	else if (avg >= 80)
	{
		printf("학점은 B입니다. ");
	}
	else if (avg >= 70)
	{
		printf("학점은 C입니다. ");
	}
	else if (avg >= 60)
	{
		printf("학점은 D입니다.");
	}
	else if (avg < 60)
	{
		printf("학점은 F입니다,");
	}

		/*연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오. 
		윤년이 되는 조건은 다음과 같다. (if문으로 작성)
		- 4로 나누어 떨어지는 해는 윤년이다.
		- 4로 나누어 떨어지는 해 중에서 100으로 나누어 떨어지는 해는 윤년이 아니다.
		- 100으로 나누어 떨어지는 해 중에서 400으로 나누어 떨어지는 해는 윤년이다.*/

	int year;
	printf("연도를 입력하세요 : ");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다. \n", year);
	}


		/*정수를 입력해서 나머지가 0이면 짝수이다라고 출력되고 아니면 
		홀수이다라고 출력되게 작성하시오. 
		switch문 사용하시오.*/
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	switch (num % 2)
	{
	case 0:
		printf("짝수입니다.");
		break;
	case 1:
		printf("홀수입니다.");
		break;
	default:
		break;
	}
	

		/*1부터 5까지의 5단계 성적을 입력하고, 
		성적에 따라 다음과 같은 메시지를 출력되게 작성하시오. 
		switch문 사용하시오.*/
	int score;
	printf("점수를 입력하세요 : ");
	scanf("%d", &score);
	switch (score)
	{
	case 1:
		printf("성적은 %d입니다. 잘하셨습니다.", score);
		break;
	case 2:
		printf("성적은 %d입니다. 매우 잘하셨습니다.", score);
		break;
	case 3:
		printf("성적은 %d입니다. 매우매우 잘하셨습니다.", score);
		break;
	case 4:
		printf("성적은 %d입니다. 매우매우매우 잘하셨습니다.", score);
		break;
	case 5:
		printf("성적은 %d입니다. 매우매우매우매우 잘하셨습니다.", score);
		break;
	default:
		break;
	}

	
		/*정수를 입력받아 2의 배수인지, 3의 배수인지, 
		2와 3의 공배수인지를 출력하는 프로그램을 작성하시오. 
		(if문으로 작성)*/
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	if ((num % 2 == 0) && (num % 3 == 0))
	{
		printf("2와 3의 공배수입니다."); 
	}
	else if (num % 3 == 0)
	{
		printf("3의 배수입니다.");
	}
	else if (num % 2 == 0)
	{
		printf("2의 배수입니다.");
	}
		
	
	



	return 0;
}
#include <stdio.h>
#define print printf
// define -> 매크로임 (define a b -> a라는 문장을 b로 바꿔라 이말임)
 // 일반함수에 비해 실행속도가 빠르다. 
#define NUM 5


int main(void)
{
	/*int res, i;
	printf("몇 번째 루프를 중지할까요.?? (1 ~ 10)\n");
	scanf("%d", &res);

	for (i = 1; i <= 10; i++)
	{
		printf("%d 번째를 처리합니다. \n", i);
		if (i == res)
			break;
	}*/

	/*int res;
	printf("성적을 입력하세요. (1 ~ 5) \n");
	scanf("%d", &res);
	switch (res)
	{
	case 1:			
	case 2:
		printf("조금 더 노력하세요. \n");
		break;
	case 3:
	case 4:
		printf("잘하셨습니다. \n");
		break;
	case 5:
		printf("매우 잘하셨습니다. \n");
		break;
	default:
		printf("1 ~ 5 사이의 성적을 입력하세요. \n");
		break;
	}*/

	/*int res, i;
	printf("몇 번째 처리를 건너뛸까요? (1 ~ 10)\n");
	scanf("%d", &res);
	for (i = 1; i <= 10; i++)
	{
		if (i == res)
			continue;
		printf("%d번째 처리 입니다. \n", i);
	}*/
	
	/*int num;
	printf("시작! \n");
	for (num = 1; num < 50; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("끝!\n");*/


			// 내 풀이
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("*\n");

	}*/

			// 강사님 풀이
	/*int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

			// 내 풀이 예제 2번
	/*int i, j;
	for (i = 5; i <= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

			// 강사님 풀이 예제 2번
	/*int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j <= 5-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

			// 내풀이 예제 3번
	/*printf("1 ~ 10 가운데 짝수를 출력하십니다.\n");
	for (int i = 1; i <= 10; i++)
	{
		int j = (i % 2 == 0);
		printf("%d\n", j);
	}*/


			// 강사님 풀이 3번
	/*int i;
	printf("1 ~ 10 가운데 짝수를 출력하십니다. \n");
	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			printf("%d\n", i);
	}*/


			//내 풀이 4번
	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d\t", i * j);
		}
		printf("\n");
	}*/

		// 강사님 풀이 4번
	/*int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%2d\t", i * j);		// %2d -> 오른쪽 정렬을 해준다.
		}
		printf("\n");
	}*/


		//내 풀이 5번
	/*int i, sum;
	printf("시험 점수를 입력하세요. : ");
	scanf("%d", &i);
	do
	{
		scanf("%d", &i);
		sum = sum + i;

	} while (i <= 100);
	{
		printf("시험 점수의 합계는 %d 입니다.", sum);
	}*/


		//강사님 풀이 5번
	/*int num, sum = 0;
	printf("시험 점수를 입력하세요 (0이면 종료)\n");
	do
	{
		scanf("%d", &num);
		sum += num;
	} while (num > 0);

	printf("시험 점수의 함계는 %d 입니다. \n", sum);*/


			// 내풀이 예제 6번
	/*int num, cou, cou_1; 
	printf("양의 정수 ? : ");
	scanf("%d", &num);
	printf("배수의 개수? : ");
	scanf("%d", &cou);
	cou_1 = cou;
	for (cou_1 = 1; cou_1 <= cou; cou_1++)
	{
		printf("%d\n", num * cou_1);
	}*/

			// 강사님 풀이 예제 6번
	/*int num, count, i;
	printf("양의 정수 ? :");
	scanf("%d", &num);
	printf("배수의 개수? : ");
	scanf("%d", &count);
	for (i = 1; i <= count; i++)
	{
		printf("%5d", num * i);
	}*/

			//내 풀이 예제 7번
	/*int num, i;
	printf("2 이상의 정수를 입력하세요. : \n");
	scanf("%d", &num);
	for (i = 2; i > num; i++)
	{
		printf("%d", num);
		if (num % i == 0 || num % num == 0)
			break;
		printf("%d는 소수입니다.\n", num);
	}*/
	

			//강사님 풀이 예제 7번
	/*int num, i;
	printf("2 이상의 정수를 입력하세요. : \n");
	scanf("%d", &num);
	for (i = 2; i <= num; i++)
	{
		if (i == num)
		{
			printf("%d은 소수입니다.\n", num);
		}
		else if (num % i == 0)
		{
			printf("%d은 소수가 아닙니다. \n", num);
			break;
		}
	}*/


				// ------------------- 배열 (array) 1차원------------------
	/*int test[5];
	int i;
	test[0] = 80;
	test[1] = 60;
	test[2] = 22;
	test[3] = 50;
	test[4] = 75;

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 사람의 점수는 %d점입니다. \n", i + 1, test[i]);
	}*/



	/*int test[5];
	int i, j;

	printf("5명의 점수를 입력하세요. \n");
	for (j = 0; j < 5; j++)
	{
		scanf("%d", &test[j]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 사람의 점수는 %d점입니다. \n", i + 1, test[i]);
	}*/


	/*int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);
	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);*/

	/*int test[NUM] = { 80, 60, 22, 50, 75 };
	int i;
	for (i = 0; i < NUM; i++)
	{
		printf("%d번째 사람의 점수는 %d점입니다. \n", i + 1, test[i]);
	}*/

	/*int i, j, tmp;
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%4d ", array[i]);
	}*/


			// 내림차순
	/*int test[NUM], tmp, i, j, s, t;
	printf("%d명의 점수를 입력하세여\n", NUM);
	for (i = 0; i < NUM; i++)
	{
		scanf("%d", &test[i]);
	}

	for (s = 0; s < NUM - 1; s++)
	{
		for (t = s + 1; t < NUM; t++)
		{
			if (test[t] > test[s])
			{
				tmp = test[t];
				test[t] = test[s];
				test[s] = tmp;
			}
		}
	}

	for (j = 0; j < NUM; j++)
	{
		printf("%d등 점수는 %d점 입니다. \n", j + 1, test[j]);
	}*/


	// ------------------- 배열 (array) 2차원------------------
	//int ary[5][3];
	//5 : 행
	//3 : 열

	
	/*int test[2][5];
	int i;
	test[0][0] = 80;
	test[0][1] = 60;
	test[0][2] = 22;
	test[0][3] = 50;
	test[0][4] = 75;
	test[1][0] = 90;
	test[1][1] = 55;
	test[1][2] = 68;
	test[1][3] = 72;
	test[1][4] = 58;

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 사람의 국어 점수는 %d점입니다. \n", i + 1, test[0][i]);
		printf("%d번째 사람의 산수 점수는 %d점입니다. \n", i + 1, test[1][i]);
	}*/

	/*char str[5];
	str[0] = 'O';
	str[1] = 'K';
	str[2] = '\0';			//\0 -> '널(null)' 이라는 말임. (문자가 끝났다 라는 말을 의미함. 이걸 안넣어주면 쓰레기 값이 안나옴)
	printf("%s\n", str);*/
	// 배열 str자체가 주소를 담고 있는 변수라 &가 필요없음. 


			// 위에꺼랑 같은 말임 근데 밑에 있는걸 많이 씀 
	/*char str[5] = "ok";
	printf("%s\n", str);*/ 

	/*char str[100];
	printf("문자열을 입력하세여. \n");
	scanf("%s", &str);
		//scnaf_s(형식, 변수명, 요소수)
	printf("입력한 문자열은 %s입니다. \n", str);*/

	/*char str[] = "Hello";
	int i;
	printf("Hello\n");
	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c*", str[i]);
	}*/


			// 내 풀이 예제 1번
	/*int test[5] = {80, 60, 22, 50, 75};
	int i, tmp, j;
	for (i = 0; i < 5; i++)
	{
		printf("%d번째 사람의 시험 점수는 %d점입니다.\n", i + 1, test[i]);
		for (j = 0; j < 4 - i; j++)
		{
			if (test[j] > test[j + 1])
			{
				tmp = test[j];
				test[j] = test[j + 1];
				test[j + 1] = tmp;
			}
		}
	}
	//for (i = 0; i < 5; i++)
	printf("최고점수는 %d입니다. ", test[4]);*/


			//강사님 풀이 예제 1번
	/*int test[5], max = 0, i, j;
	printf("시험 점수를 입력하세여. \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &test[i]);

		if (max < test[i])
		{
			max = test[i];
		}
	}
	for (j = 0; j < 5; j++)
	{
		printf("%d번째 사람의 시험 점수는 %d점입니다. \n", j + 1, test[j]);
	}
	printf("최고 점수는 %d점입니다. \n", max);*/


			// 내풀이 예제 2번
	/*int test[5], i, j, max = 0;
	printf("시험 점수를 입력하세요. : \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &test[i]);

		if (70 < test[i])
		{
			max = i;
		}
		
	}
	printf("70점 이상인 학생은 %d명 입니다. \n", max);*/

	printf("HH\n");

			// 강사님 풀이 예제 2번
	/*int test[5], num = 0, i;
	printf("시험 점수를 입력하세요 \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &test[i]);

		if (test[i] >= 70) num++;
	}
	printf("70점 이상인 학생은 %d명입니다. \n", num);*/

			// 내 풀이 예제 3번
	/*char str[10];
	int num = 0, i;
	printf("문자열을 입력하세요 : ");
	
	for (i = 0; i <= 5; i++)
	{
		scanf("%s", &str[i]);

		if (str[i] == 'a') num++;
		printf("apple 안에 a는 %d개 있습니다. ", num);
	}*/

			// 강사님의 풀이 예제 3번
	/*char str[100];
	int i, count = 0;
	printf("문자열을 입력하세요. \n");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a') count++;
	}
	printf("%s 안에 있는 a는 %d개 입니다. \n", str, count);*/

			// 내풀이 예제 4번
	/*char str[100];
	int i, count = 0;
	printf("영단어를 입력하세요.");
	scanf("%s", str);
	while (str != '\0')
	{
		i++;
		str[i] == str;
		count++;
	}
	printf("입력한 단어의 길이는 %d 입니다. ", count);*/

				// 강사님의 풀이 예제 4번
	/*char voca[100];
	int len = 0;
	printf("영단어를 입력하세요. \n");
	scanf("%s", voca);
	while (voca[len]!='\0')
	{
		len++; 
	}
	printf("입력한 단어의 길이는 %d입니다. \n", len);*/

			// 내 풀이 예제 5번
	/*int test[3][9];
	int i, j;
	for (i = 2; i <= 4; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%2d\t", i * j);
		}
		printf("\n");
	}
	printf("%d", test[i][j]);*/

			//강사님의 풀이 예제 5번
	/*int arr[3][9];
	int i, j;
	// 구구단 저장
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			arr[i][j] = (i + 2) * (j + 1);
		}
	}
	// 구구단 출력
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}*/

	


	return 0;
}
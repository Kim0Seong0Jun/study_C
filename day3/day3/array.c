#include <stdio.h>
#define print printf
// define -> ��ũ���� (define a b -> a��� ������ b�� �ٲ�� �̸���)
 // �Ϲ��Լ��� ���� ����ӵ��� ������. 
#define NUM 5


int main_array(void)
{
	/*int res, i;
	printf("�� ��° ������ �����ұ��.?? (1 ~ 10)\n");
	scanf("%d", &res);

	for (i = 1; i <= 10; i++)
	{
		printf("%d ��°�� ó���մϴ�. \n", i);
		if (i == res)
			break;
	}*/

	/*int res;
	printf("������ �Է��ϼ���. (1 ~ 5) \n");
	scanf("%d", &res);
	switch (res)
	{
	case 1:			
	case 2:
		printf("���� �� ����ϼ���. \n");
		break;
	case 3:
	case 4:
		printf("���ϼ̽��ϴ�. \n");
		break;
	case 5:
		printf("�ſ� ���ϼ̽��ϴ�. \n");
		break;
	default:
		printf("1 ~ 5 ������ ������ �Է��ϼ���. \n");
		break;
	}*/

	/*int res, i;
	printf("�� ��° ó���� �ǳʶ۱��? (1 ~ 10)\n");
	scanf("%d", &res);
	for (i = 1; i <= 10; i++)
	{
		if (i == res)
			continue;
		printf("%d��° ó�� �Դϴ�. \n", i);
	}*/
	
	/*int num;
	printf("����! \n");
	for (num = 1; num < 50; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("��!\n");*/


			// �� Ǯ��
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("*\n");

	}*/

			// ����� Ǯ��
	/*int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

			// �� Ǯ�� ���� 2��
	/*int i, j;
	for (i = 5; i <= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

			// ����� Ǯ�� ���� 2��
	/*int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j <= 5-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

			// ��Ǯ�� ���� 3��
	/*printf("1 ~ 10 ��� ¦���� ����Ͻʴϴ�.\n");
	for (int i = 1; i <= 10; i++)
	{
		int j = (i % 2 == 0);
		printf("%d\n", j);
	}*/


			// ����� Ǯ�� 3��
	/*int i;
	printf("1 ~ 10 ��� ¦���� ����Ͻʴϴ�. \n");
	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			printf("%d\n", i);
	}*/


			//�� Ǯ�� 4��
	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d\t", i * j);
		}
		printf("\n");
	}*/

		// ����� Ǯ�� 4��
	/*int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%2d\t", i * j);		// %2d -> ������ ������ ���ش�.
		}
		printf("\n");
	}*/


		//�� Ǯ�� 5��
	/*int i, sum;
	printf("���� ������ �Է��ϼ���. : ");
	scanf("%d", &i);
	do
	{
		scanf("%d", &i);
		sum = sum + i;

	} while (i <= 100);
	{
		printf("���� ������ �հ�� %d �Դϴ�.", sum);
	}*/


		//����� Ǯ�� 5��
	/*int num, sum = 0;
	printf("���� ������ �Է��ϼ��� (0�̸� ����)\n");
	do
	{
		scanf("%d", &num);
		sum += num;
	} while (num > 0);

	printf("���� ������ �԰�� %d �Դϴ�. \n", sum);*/


			// ��Ǯ�� ���� 6��
	/*int num, cou, cou_1; 
	printf("���� ���� ? : ");
	scanf("%d", &num);
	printf("����� ����? : ");
	scanf("%d", &cou);
	cou_1 = cou;
	for (cou_1 = 1; cou_1 <= cou; cou_1++)
	{
		printf("%d\n", num * cou_1);
	}*/

			// ����� Ǯ�� ���� 6��
	/*int num, count, i;
	printf("���� ���� ? :");
	scanf("%d", &num);
	printf("����� ����? : ");
	scanf("%d", &count);
	for (i = 1; i <= count; i++)
	{
		printf("%5d", num * i);
	}*/

			//�� Ǯ�� ���� 7��
	/*int num, i;
	printf("2 �̻��� ������ �Է��ϼ���. : \n");
	scanf("%d", &num);
	for (i = 2; i > num; i++)
	{
		printf("%d", num);
		if (num % i == 0 || num % num == 0)
			break;
		printf("%d�� �Ҽ��Դϴ�.\n", num);
	}*/
	

			//����� Ǯ�� ���� 7��
	/*int num, i;
	printf("2 �̻��� ������ �Է��ϼ���. : \n");
	scanf("%d", &num);
	for (i = 2; i <= num; i++)
	{
		if (i == num)
		{
			printf("%d�� �Ҽ��Դϴ�.\n", num);
		}
		else if (num % i == 0)
		{
			printf("%d�� �Ҽ��� �ƴմϴ�. \n", num);
			break;
		}
	}*/


				// ------------------- �迭 (array) 1����------------------
	/*int test[5];
	int i;
	test[0] = 80;
	test[1] = 60;
	test[2] = 22;
	test[3] = 50;
	test[4] = 75;

	for (i = 0; i < 5; i++)
	{
		printf("%d��° ����� ������ %d���Դϴ�. \n", i + 1, test[i]);
	}*/



	/*int test[5];
	int i, j;

	printf("5���� ������ �Է��ϼ���. \n");
	for (j = 0; j < 5; j++)
	{
		scanf("%d", &test[j]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d��° ����� ������ %d���Դϴ�. \n", i + 1, test[i]);
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
		printf("%d��° ����� ������ %d���Դϴ�. \n", i + 1, test[i]);
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


			// ��������
	/*int test[NUM], tmp, i, j, s, t;
	printf("%d���� ������ �Է��ϼ���\n", NUM);
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
		printf("%d�� ������ %d�� �Դϴ�. \n", j + 1, test[j]);
	}*/


	// ------------------- �迭 (array) 2����------------------
	//int ary[5][3];
	//5 : ��
	//3 : ��

	
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
		printf("%d��° ����� ���� ������ %d���Դϴ�. \n", i + 1, test[0][i]);
		printf("%d��° ����� ��� ������ %d���Դϴ�. \n", i + 1, test[1][i]);
	}*/

	/*char str[5];
	str[0] = 'O';
	str[1] = 'K';
	str[2] = '\0';			//\0 -> '��(null)' �̶�� ����. (���ڰ� ������ ��� ���� �ǹ���. �̰� �ȳ־��ָ� ������ ���� �ȳ���)
	printf("%s\n", str);*/
	// �迭 str��ü�� �ּҸ� ��� �ִ� ������ &�� �ʿ����. 


			// �������� ���� ���� �ٵ� �ؿ� �ִ°� ���� �� 
	/*char str[5] = "ok";
	printf("%s\n", str);*/ 

	/*char str[100];
	printf("���ڿ��� �Է��ϼ���. \n");
	scanf("%s", &str);
		//scnaf_s(����, ������, ��Ҽ�)
	printf("�Է��� ���ڿ��� %s�Դϴ�. \n", str);*/

	/*char str[] = "Hello";
	int i;
	printf("Hello\n");
	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c*", str[i]);
	}*/


			// �� Ǯ�� ���� 1��
	/*int test[5] = {80, 60, 22, 50, 75};
	int i, tmp, j;
	for (i = 0; i < 5; i++)
	{
		printf("%d��° ����� ���� ������ %d���Դϴ�.\n", i + 1, test[i]);
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
	printf("�ְ������� %d�Դϴ�. ", test[4]);*/


			//����� Ǯ�� ���� 1��
	/*int test[5], max = 0, i, j;
	printf("���� ������ �Է��ϼ���. \n");
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
		printf("%d��° ����� ���� ������ %d���Դϴ�. \n", j + 1, test[j]);
	}
	printf("�ְ� ������ %d���Դϴ�. \n", max);*/


			// ��Ǯ�� ���� 2��
	/*int test[5], i, j, max = 0;
	printf("���� ������ �Է��ϼ���. : \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &test[i]);

		if (70 < test[i])
		{
			max = i;
		}
		
	}
	printf("70�� �̻��� �л��� %d�� �Դϴ�. \n", max);*/

	printf("HH\n");

			// ����� Ǯ�� ���� 2��
	/*int test[5], num = 0, i;
	printf("���� ������ �Է��ϼ��� \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &test[i]);

		if (test[i] >= 70) num++;
	}
	printf("70�� �̻��� �л��� %d���Դϴ�. \n", num);*/

			// �� Ǯ�� ���� 3��
	/*char str[10];
	int num = 0, i;
	printf("���ڿ��� �Է��ϼ��� : ");
	
	for (i = 0; i <= 5; i++)
	{
		scanf("%s", &str[i]);

		if (str[i] == 'a') num++;
		printf("apple �ȿ� a�� %d�� �ֽ��ϴ�. ", num);
	}*/

			// ������� Ǯ�� ���� 3��
	/*char str[100];
	int i, count = 0;
	printf("���ڿ��� �Է��ϼ���. \n");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a') count++;
	}
	printf("%s �ȿ� �ִ� a�� %d�� �Դϴ�. \n", str, count);*/

			// ��Ǯ�� ���� 4��
	/*char str[100];
	int i, count = 0;
	printf("���ܾ �Է��ϼ���.");
	scanf("%s", str);
	while (str != '\0')
	{
		i++;
		str[i] == str;
		count++;
	}
	printf("�Է��� �ܾ��� ���̴� %d �Դϴ�. ", count);*/

				// ������� Ǯ�� ���� 4��
	/*char voca[100];
	int len = 0;
	printf("���ܾ �Է��ϼ���. \n");
	scanf("%s", voca);
	while (voca[len]!='\0')
	{
		len++; 
	}
	printf("�Է��� �ܾ��� ���̴� %d�Դϴ�. \n", len);*/

			// �� Ǯ�� ���� 5��
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

			//������� Ǯ�� ���� 5��
	/*int arr[3][9];
	int i, j;
	// ������ ����
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			arr[i][j] = (i + 2) * (j + 1);
		}
	}
	// ������ ���
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
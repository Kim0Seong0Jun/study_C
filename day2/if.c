#include <stdio.h>
#define print printf

int main(void)
{
	// ���� 8�� 13�� -> ������ �Ƹ� if�� ���� ��. 
	

	//int A;		// �Ѻ��� ����
	//int B;		// ���簢�� ����
	//printf("���簢���� ���� ���̸� �Է��ϼ��� : \n");
	//scanf("%d", &A);
	//B = A * A;
	//printf("���簢���� ���̴� %d�Դϴ�.", B);

	//int num1, num2, tot;
	//double avg;
	//printf("�� ������ ���� : ");
	//scanf("%d %d", &num1, &num2);
	//tot = num1 + num2;
	//avg = tot / 2.0;
	//printf("��� : %.1lf�� �Դϴ�.\n", avg);

	/*int seats = 70;
	int audience = 65;
	double rate;
	rate = (double)audience / (double)seats * 100;
	printf("����� : %.1lf%%", rate);*/

				// �� Ǯ�� 
	/*int price, slae, tot, A;
	
	printf("��ǰ�� ������? :");
	scanf("%d", &price);
	printf("������(%%)? : ");
	scanf("%d", &slae);
	tot = price * (100 - slae) / 100;
	printf("���ΰ� : %d(%d�� ����)", tot, price-tot);*/

				// ������� Ǯ��
	/*int price, discount, sell;
	printf("��ǰ�� ����? ");
	scanf("%d", &price);
	printf("������ (%%)? : ");
	scanf("%d", &discount);
	sell = price * (100 - discount) / 100;
	printf("���ΰ� : %d�� (%d�� ����) \n", sell, price - sell);*/


				// �� Ǯ��
	/*double km, speed;
	int tot;

	printf("�̵� �Ÿ�(KM)? : ");
	scanf("%lf", &km);
	printf("���� �ӷ�(km/h)? : ");
	scanf("%lf", &speed);
	tot = km / speed * 60;
	printf("�������� ���� �ҿ� �ð��� %d���Դϴ�.", tot);*/

				// ����� Ǯ��
	/*double distance, velocity;
	int min;
	printf("�̵� �Ÿ� (km)? : ");
	scanf("%lf", &distance);
	printf("���� �ӷ� (km/h)? : ");
	scanf("%lf", &velocity);
	min = (int)distance / velocity * 60;
	printf("�������� ����ҿ� �ð��� %d�� �Դϴ�.", min);*/

	/* ���ù�, �б⹮, �ݺ���->����̶�� ����
		���ù� : if, switch ~ case
		�ݺ��� : for, while, do ~ while
		�б⹮ : break, continue
	*/

	/*int score;

	printf("����? : ");
	scanf("%d", &score);
	if (score < 70)
	{
		printf("����� \n");
	}
	printf("���� ������ ������ ���Դϴ�.\n");*/ 

	/*int res;
	printf("������ �Է��ϼ���.");
	scanf("%d", &res);

	if (res == 1)
	{
		printf("1�� �Է��̵Ǿ����ϴ�. \n");
	}

	printf("ó���� �����մϴ�.\n");*/

	/*int res;
	printf("������ �Է��ϼ���.");
	scanf("%d", &res);

	if (res < 0) printf("�Է��� ���� 0���� �۴�\n");
	if (res > 0) printf("�Է��� ���� 0���� ũ��\n");
	if (res == 0) printf("�Է��� ���� 0�̴�\n");

	printf("ó���� �����մϴ�.\n");*/

	/*int a = 10;
	if (a >= 10) a = 1;
	else a = -1;

	printf("a�� ���� : %d\n", a);*/

	/*int num, abs;
	printf("����? : ");
	scanf("%d", &num);

	if (num < 0)
	{
		abs = -num;
	}
	else
	{
		abs = num;
	}

	printf("%d�� ���밪 = %d\n", num, abs);*/

	/*int num;
	printf("���� �Է� : ");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("�����Դϴ�. \n");
	}
	else if (num > 0)
	{
		printf("��� �Դϴ�. \n");
	}
	else
	{
		printf("0�Դϴ�. \n");
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
	printf("1. ����, 2. ����, 3. ����, 4. ������ \n");
	printf("������? \n");
	scanf("%d", &a);
	printf("�� ���� �Ǽ� �Է� : \n");
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
	printf("����� : %lf\n", res);*/

	/*int res;
	char ans;
	printf("���° �����ұ�� ? : \n");
	printf("������ �Է��ϼ��� : \n");
	scanf("%d", &res);
	ans = (res == 1) ? 'A' : 'B';
	printf("%c �ڽ��� �����߽��ϴ�.\n", ans);*/

	/*int num, abs;
	printf("���� �Է� : \n");
	scanf("%d", &num);
	abs = num > 0 ? num : num * (-1);
	printf("���밪 : %d\n", abs);*/

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
	printf("M ����, A ����, E ���� \n");
	printf("�Է� : \n");
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

		// �� Ǯ��
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

			//����� Ǯ��
	/*double height = 179.5, weight = 75.0;
	if ((height >= 187.5) && (weight < 80.0))
	{
		printf("OK\n");
	}
	else
	{
		printf("cancle\n");
	}*/

			// �� Ǯ��
	/*int A, B;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &A, &B);
	if (A < B)
	{
		printf("%d ���� %d(��)�� Ů�ϴ�.", A, B);
	}
	else if (A > B)
	{
		printf("%d���� %d(��)�� �۽��ϴ�,", A, B);
	}
	else if (A == B)
	{
		printf("%d�� %d(��)�� �����ϴ�.", A, B);
	}
	else
	{
		printf("�����Դϴ�.\n");
	}*/

				// ����� Ǯ��
	/*int num1, num2;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);
	if (num1 < num2)
	{
		printf("%d�� %d���� �������Դϴ�.\n", num1, num2);
	}
	else if (num1 > num2)
	{
		printf("%d�� %d���� ū���Դϴ�,\n", num1, num2);
	}
	else if (num1 == num2)
	{
		printf("% d �� % d�� �����ϴ�.");
	}*/

	/*int num1;
	printf("0���� 10������ ������ �Է��ϼ��� : ");
	scanf("%d", &num1);

	if (num1 < 11)
	{
		printf("�����Դϴ�. ");
	}
	else
	{
		printf("Ʋ�Ƚ��ϴ�. ");
	}*/

	/*else if (num1 < 11)
	{
		printf("�����Դϴ� ~ ");
	}
	else if (num1 > 10)
	{
		printf("Ʋ�Ƚ��ϴ�.");
	}
	else
	{
		printf("�����Դϴ�.");
	}*/

				//������� Ǯ��
	/*int num;
	printf("0���� 10������ ������ �Է��ϼ���.");
	scanf("%d", &num);
	if (num >= 0 && num <= 10)
	{
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("Ʋ�Ƚ��ϴ�. \n");
	}*/

				// �� Ǯ�̹�
	/*int Ko, En, Ma;
	double avg;
	printf("����, ����, ������ ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &Ko, &En, &Ma);		//Ko = ����, En = ����, Ma = ����
	avg = (Ko + En + Ma) / 3.0;
	printf("����� ? : %lf\n", avg);
	if (avg >= 90)
	{
		printf("������ : A");
	}
	else if (avg >= 80)
	{
		printf("������ : B");
	}
	else if (avg >= 70)
	{
		printf("������ : C");
	}
	else if (avg >= 60)
	{
		printf("������ : D");
	}
	else
	{
		printf("������ : F");
	}*/


				// ����� Ǯ�̹�
	/*int kor, eng, math;
	double avg;
	printf("����, ����, ������ ���� �Է� : ");
	scanf("%d%d%d", &kor, &eng, &math);
	avg = (kor + eng + math) / 3.0;
	printf("����� : %lf \n", avg);
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

			// �� Ǯ�̹�
	/*int year, year_tot, year_tot_1;
	printf("������ ? : ");
	scanf("%d", &year);
	year_tot = year % 4;
	year_tot_1 = year / 100;
	if ((year_tot = 0) && (year_tot_1 = 400))
	{
		printf("�����Դϴ�.");
	}
	else
	{
		printf("%d�� ������ �ƴմϴ�.", year);
	}*/

			// ����� Ǯ�̹�
	//int year;
	//printf("���� ? : ");
	//scanf("%d", &year);
	//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // || -> OR��
	//{
	//	printf("%d���� �����Դϴ�. \n", year);
	//}
	//else
	//{
	//	printf("%d���� ������ �ƴմϴ�. \n", year);
	//}

	/*int year;
	printf("���� ? : ");
	scanf("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0) printf("%d���� �����Դϴ�.\n", year);
			else printf("%d���� ������ �ƴմϴ�. \n", year);
		}
		else
		{
			printf("%d���� �����Դϴ� \n ", year);
		}
		
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�. \n", year);
	}*/

		//�� Ǯ�̹�
	/*int num1, num2;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num1);
	num2 = num1 % 2;
	switch (num2)
	{
	case '0':
		printf("¦���Դϴ�.");
		break;
		
	default:
		break;
	}*/

			//����� Ǯ�̹�
	/*int num;
	printf("���� �Է� : ");
	scanf("%d", &num);
	switch (num % 2)
	{
	case 0:
		printf("¦���Դϴ�.\n");
		break;
	default:
		printf("Ȧ���Դϴ�,\n");
		break;
	}*/


		// �� Ǯ�̹�
	/*int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("������ 1�Դϴ�. \n ����� �ʿ��մϴ�.");
		break;
	case 2:
		printf("������ 2�Դϴ�. \n ���� �� ����ϼ���.");
		break;
	case 3:
		printf("������ 3�Դϴ�. \n ���߽��ϴ�.");
		break;
	case 4:
		printf("������ 4�Դϴ�. \n �ſ� ���߽��ϴ�.");
		break;
	case 5:
		printf("������ 5�Դϴ�. \n �ſ� ����մϴ�.");
		break;
	}*/

		// ����� Ǯ�̹�
	/*int res;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &res);
	printf("������ %d�Դϴ�.", res);
	switch (res)
	{
	case 1:
		printf("����� �ʿ��մϴ�,");
		break;
	case 2:
		printf("���� �� ����ϼ���.");
		break;
	case 3:
		printf("���߽��ϴ�.");
		break;
	case 4:
		printf("�ſ� ���߽��ϴ�.");
		break;
	case 5:
		printf("�ſ� ����մϴ�,");
		break;
	}*/

	/*int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	if (num % 2 == 0 && num % 3 == 0)
	{
		printf("2�� 3�� ����� �Դϴ�.");
	}
	else if (num % 2 == 0)
	{
		printf("2�� ����Դϴ�.");
	}
	else if (num % 3 == 0)
	{
		printf("3�� ����Դϴ�.");
	}
	else
	{
		printf("����� �����ϴ�");
	}*/

	/*int i = 1;
	while (i <= 5)
	{
		printf("%d��° �ݺ��Դϴ�. \n", i);
		i++;
	}
	printf("�ݺ��� �����߽��ϴ�.\n");*/

	//int a = 1;
	//while (a < 10)
	//{
	//	a *= 2; // ���մ��Կ����� -> a = a*2
	//	printf("%d\n", a);
	//}
	//printf("a�� ���� ? : %d\n", a);

	/*int dan = 0, num = 1;
	printf("��� ? : ");
	scanf("%d", &dan);
	while (num < 10)
	{
		printf("%d X %d = %d\n", dan, num, dan * num);
		num++;
	}*/


	/*int i = 1;
	do
	{
		printf("%d��° �ݺ��մϴ�. \n", i);
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
		printf("�ݺ��� �ϰ� �ֽ��ϴ�.%d \n", i);
	}
	printf("�ݺ��� �����߽��ϴ�. \n");*/

	/*int a = 1;
	int i;
	for (i = 0; i < 3; i++)
	{
		a *= 2;
	}
	printf("a : %d\n", a);*/

	//int num, sum = 0, i;
	//printf("������� �հ踦 ����ұ��?");
	//scanf("%d", &num);
	//for (i = 1; i <= num; i++)
	//{
	//	sum += i; // �����հ�
	//}
	//printf("1���� %d�� �հ�� %d�Դϴ�.", num, sum);

	/*int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("i�� %d : j�� %d \n", i, j);
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

	// ���� ���������� if�� �� �����ϰ� ���� ! !



	return 0;
}
#include <stdio.h>
#define print printf

int main(void)
{
	/*printf("�ݰ���. C���.\n");*/
			// �İ� ������ ������
	/* ������ 2��
	int H, W;	//H = �Ѻ�, W = ����
	printf("���簢���� ���� ���̸� �Է��ϼ���. : ");
	scanf("%d", &H);
	W = H * H;
	printf("���簢���� ���̴� %d�Դϴ�.", W);*/

	/* ������ 3��
	int num1, num2;
	double avg;
	printf("�� ������ ������ �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);
	avg = (num1 + num2) / 2.00;
	printf("�� ������ ����� : %.1lf �Դϴ�.", avg);*/

	/* ������ 4�� -> �ѹ� Ʋ�� �ٽ� �ѹ� Ǯ��� ^^
	double seat = 70, people = 65, tot;
	tot = people / seat * 100;
	printf("����� : %.1lf%% �Դϴ�", tot);*/

	/* ������ 5��
	int num1, sale, tot;
	printf("��ǰ�� ������ �����ϼ��� : ");
	scanf("%d", &num1);
	printf("������(%%)�� �������� : ");
	scanf("%d", &sale);
	tot = num1 * (100 - sale) / 100;
	printf("���ΰ� : %d (%d�� ����)", tot, num1 - tot);*/

	/*����̶� ? = > ���ù�, �б⹮, �ݺ������� ���ļ� ���Ѵ�.
		���ù� : if, switch ~ case
		�ݺ��� : for, while, do ~ while
		�б⹮ : break, continue
			���⼭ ���� switch�� �� ���ؾȵ�;; 
	*/
	
	/*int score;

	printf("������ �������� : ");
	scanf("%d", &score);
	if (score < 70)
	{
		printf("����� \n");
	}
	printf("���� ������ ������ ���Դϴ�. \n");*/

	/*int res;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &res);
	if (res == 1)
	{
		printf("1�� �ԷµǾ����ϴ� !! \n");
	}
	else
	{
		printf("1�� �Է����� �ʾҽ��ϴ�. %d�� �Է��Ͽ����ϴ�. \n", res);
	}
	printf("ó���� �����մϴ�. \n");*/

	
	/*int res;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &res);
	
	if (res < 0)
	{
		printf("�Է��� ���� 0���� �۽��ϴ�.\n");
	}
	else if (res > 0)
	{
		printf("�Է��� ���� 0���� Ů�ϴ�. \n");
	}
	else if (res == 0)
	{
		printf("�Է��� ���� 0�� �����ϴ�.\n");
	}
	printf("ó���� �����մϴ�.");*/

	/*int a = 10;
	if (a >= 10)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}
	printf("a�� ���� : %d\n", a);*/


	/*int num, abs;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	if (num < 0)
	{
		abs = -num;
	}
	else
	{
		abs = num;
	}
	printf("%d�� ���밪�� = %d\n", num, abs);*/

	/*int num;
	printf("������ �Է��ϼ���~ : ");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("%d�� �����Դϴ�. \n", num);
	}
	else if (num > 0)
	{
		printf("%d�� ����Դϴ�. \n", num);
	}
	else
	{
		printf("%d�� 0�ϰ̴ϴ� ~~ \n", num);
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
	printf("1. ����, 2. ����, 3. ����, 4. ������ \n");
	printf("��Ģ���� �� ���ʽÿ�. : \n");
	scanf("%d", &a);
	printf("�ΰ��� �Ǽ� �Է��ϼ��� : ");
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
	printf("����� : %.1lf\n", res);*/


	/*int res;
	char ans;
	printf("���° �����ұ�� ? \n");
	printf("������ �Է��ϼ���. \n");
	scanf("%d", &res);
	ans = (res == 1) ? 'A' : 'B';
	printf("%c �ڽ��� �����߽��ϴ�. \n", ans);*/

	/*int res;
	char ans;
	printf("���° �����ұ��?? \n");
	printf("������ �Է��ϼ���. \n");
	scanf("%d", &res);
	ans = (res == 3) ? 'A' : 'B';
	printf("%c �ڽ��� �����߽��ϴ�. \n", ans);*/

	/*int num, abs;
	printf("���� �Է� : \n");
	scanf("%d", &num);
	abs = num > 0 ? num : num * (-1);
	printf("���밪 : %d\n", abs);*/

	/*int rank, m = 0;
	printf("1, 2, 3 �߿� �ϳ��� �������ּ��� : \n");
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
	printf("M ����, A ����, E ����\n");
	printf("�Է� : \n");
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
		printf("�Ƹ� �߸� �Է��ϽŰ� ��������");
		break;
	}*/
	
	
	

	return 0;
}
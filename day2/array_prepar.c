#include <stdio.h>

int main (void)
{
    /* int i, res;
    printf("몇 번째 루프를 중지할까요 ?? : (1 ~ 10)\n");
    scanf("%d", &res);

    for (i = 0; i < 10; i++)
    {
        printf("%d 번째를 처리합니다. \n", i);
        if(i == res)
            break;
    } */


    /* int i, res;
    printf("몇 번째 학생까지 불러볼까요?? : ( 1 ~ 30 ) ");
    scanf("%d", &res);

    for(i = 1; i <= 30; i++)
    {
        printf("%d번째 학생 교무실로 와주세요. :)\n", i);
        if(i == res)
        break;
    } */

    /* int res;
    printf("성적을 입력하세요 : (1 ~ 5) \n");
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
        printf("1 ~ 5 사이의 숫자를 입력해주세요. ^^7");
        break;
    } */

   /*  int i, res;
    printf("몇 번째 처리를 건너뛰고 싶으신가요. : (1 ~ 15)");
    scanf("%d", &res);
    for(i = 1; i <= 15; i++)
    {
        if (i == res)
        continue;
        printf("%d번째를 처리합니다. \n", i);
    } */

    /* int num;
    printf("시작 ! \n");
    for(num = 1; num < 50; num++)
    {
        if (num % 2 == 0 || num % 3 == 0)
            continue;
        printf("%d \n", num);
    }
    printf("프로그램을 종료합니다. ^^"); */

    /* int num;
    printf("2와 3으로 나누는 숫자들을 제외한 숫자세기 시작합니다. !!\n");
    for(num = 1; num <= 100; num++)
    {
        if(num % 2 == 0 || num % 3 == 0)
            continue;
        printf("%d \n", num);
    } */

    /* for(int i = 0; i < 6; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    } */

    /* for(int i = 0; i < 5; i++)
    {
            for(int j = 0; j <= i; j++)
            {
            printf("*");
            }
        printf("\n");
    } */

   /*  printf("1 ~ 10까지 짝수를 출력합니다!! \n");
   for(int i = 1; i <= 10; i++)
   {
    if(i % 2 == 0)
    printf("%d\n", i);
   } */

   /* printf("1 ~ 10 까지 홀수를 출력합니다!! \n");
   for(int i = 1; i <= 10; i++)
   {
    if (i % 2 == 1)
    printf("%d\n", i);
   } */

            // 예제 4번
   /* for(int i = 1; i < 10; i++)
   {
        for(int j = 1; j < 10; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
   } */

            // 예제 5번
    int num, sum = 0;
    printf("시험 점수를 입력하세요 (0이면 종료) \n");
    do
    {
        scanf("%d", &num);
        sum += num;
    } while (num > 0);
    
    printf("시험 점수의 합계는 %d 입니다. \n", sum);

    return 0;
}
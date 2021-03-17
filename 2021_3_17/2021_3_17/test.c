#define _CRT_SECURE_NO_WARNINGS  1

////第一题 
//
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	
//
//	while(1)
//	{
//	printf("请输入人民币或者美元 人命币请输入 1  美元请输入 2 \n");
//	scanf("%d",&input);
//	float r = 0;
//	float m = 0;
//	printf("请输入金额:->"); 
//		switch(input)
//		{
//			case 1:
//				scanf("%f",&r);
//				printf("%f元人民币折合为%f美元\n",r,r/6.45);
//				break;
//			case 2:
//				scanf("%f",&m); 
//				printf("%f美元折合为%f人民币\n",m,m*6.45);
//				break;
//			default :
//				printf("请重新输入：\n");
//				break;
//		}
//	}
//		return 0;
// } 


//第二题
//
//#include<stdio.h>
//int main()
//{
//	float score = 0;
//	printf("请输入你的成绩:\n");
//	scanf("%f", &score);
//
//	if (score < 60)
//	{
//		printf("不及格");
//	}
//	else if (score < 70)
//	{
//		printf("及格\n");
//	}
//	else if (score < 90)
//	{
//		printf("中等\n");
//	}
//	else
//	{
//		printf("优秀\n");
//	}
//	return 0;
//}


//第三题
//方法一：
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int fact = 1;
//	for (i = 1; i <= n; i++)
//	{
//		fact *= i;
//	}
//	printf("%d", fact);
//
//}
//方法二；递归
//#include<stdio.h>
//
//int test(int n)
//{
//	int s = n;
//	if (n == 1)
//		return 1;
//	else
//		return s * test(n - 1);
//}
//
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int ret = test(n);
//	printf("%d", ret);
//
//	return 0;
//}

//1 1 2 3 5 8 13 21 
//第三题
//#include<stdio.h>
//int main()
//{
//	int arr[40] = { 0 };
//	arr[0] = arr[1] = 1;
//	int i = 2;
//	while (1)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//
//		if (arr[i] > 2000)
//			break;
//		i++;
//	}
//	int j = i;
//	for (i = 0; i < j; i++)
//	{
//		printf("%-5d", arr[i]);
//	}
//	return 0;
//}
//第五题
//#include<stdio.h>
//int main()
//{
//	int arr[50] = { 1 ,1 };
//	int i = 2;
//	for (i = 2; i < 50; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	for (i = 0; i < 50; i++)
//	{
//		printf("%-10d", arr[i]);
//	}
//	return 0;
//
//}
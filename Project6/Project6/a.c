#define _CRT_SECURE_NO_WARNINGS  1

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//
//	printf("hello  world\n");
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int arr[30][30] = { 0 };
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i>1 && j>0)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<=i; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");

	return 0;
}

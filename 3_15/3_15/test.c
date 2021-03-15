#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<stdio.h>

//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//
//	return 0;
//}
//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//int main()
//{
//	int A = 2, B = 3;
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//
//	printf("%d", sizeof(pointer));
//	free(pointer);
//	pointer = NULL;
//	return 0;
//}
//字符串逆序 单词不逆序
//处理方法  整个串逆序再把单词逆序 正所谓 双重否定表肯定

#include<stdio.h>
#include<string.h>

//逆序排列
void BackSort(char arr[], int sz)
{
	int right = sz - 1;
	int left = 0;
	char temp = 0;

	while (left < right)
	{
		temp = arr[right];
		arr[right] = arr[left];
		arr[left] = temp;
		left++;
		right--;
	}

}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int sz = strlen(arr);
	BackSort(arr, sz);
	int i = 0;


	puts(arr);
	return 0;
}
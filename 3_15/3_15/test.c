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
//�ַ������� ���ʲ�����
//������  �����������ٰѵ������� ����ν ˫�ط񶨱�϶�

#include<stdio.h>
#include<string.h>

//��������
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
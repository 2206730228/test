#define _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//���������������
//	fputs("hello world", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("")
//}

//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	////��pf���ڵ����ݴ洢��arr�� ����100�� ����\0��100
//	//fgets(arr, 100, pf);
//	//printf("%s", arr);
//	////ʵ���ϴ�ӡ�����ַ�
//	//fgets(arr, 4, pf);
//	//printf("%s", arr);
//	//fgets��ȡ���󷵻ؿ�ָ��
//	//fgets�Զ�����
//	//while (fgets(arr, 100, pf)!=NULL)
//	//{
//	//	printf("%s", arr);
//	//}
//	while (fgets(arr, 100, stdin) != NULL)
//	{
//		printf("%s\n", arr);
//	}
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
////int main()
////{
////	struct stu s = { "zhangsan",20,66.5f };
////	FILE* pf = fopen("test.txt", "w");
////	if (pf == NULL)
////	{
////		printf("%s", strerror(errno));
////		return 1;
////	}
////	//��ʽ��д��
////	fprintf(pf,"%s %d %f",s.name,s.age,s.score);
////	
////	
////	fclose(pf);
////	pf = NULL;
////	return 0;
////}
//int main()
//{
//	struct stu s = { "zhangsan",20,66.5f };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//��ʽ����ȡ
//	fscanf(stdin,"%s %d %f", s.name, &(s.age), &(s.score));
//	//scanf("%s %d %f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//sscanf  sprintf 
//sscanf ���԰�һ���ַ���ת��Ϊһ����ʽ��������
//sprintf ���԰�һ����ʽ��������ת��Ϊһ���ַ���
//
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct stu s = { "zhangsan",20,66.5 };
//	char buf[200] = { 0 };
//	//���ṹ���ڵ�����ת��Ϊ�ַ��� �浽buf��
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("�����ַ����ķ�ʽ��ӡ %s\n", buf);
//	struct stu tmp = { 0 };
//	//��buf�ڵ��ַ��� ת��Ϊ��ʽ�� �洢����tmp
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("���ո�ʽ���ķ�ʽ��ӡ %s %d %f", tmp.name, tmp.age, tmp.score);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	struct stu s = { "zhangsan",20,66.5 };
//	FILE* pf = fopen("test.txt", "wb");//write binary
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//д�ļ�
//	//��s ����д���� д1��Ԫ�صĴ�С д��pf����
//	fwrite(&s,sizeof(s),1,pf);
//
//
//	return 0;
//}
//int main()
//{
//	struct stu s = {0};
//	FILE* pf = fopen("test.txt", "rb");//write binary
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//	//��pf�ڶ�ȡ1��Ԫ�� ��s����
//	fread(&s,sizeof(s),1,pf);
//	printf("%s %d %f", s.name, s.age, s.score);
//
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("bin.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	fwrite(&a, sizeof(a), 1, pf);
//	return 0;
//}
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
//	//适用于所有输出流
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
//	////将pf流内的数据存储到arr内 最多读100个 包括\0共100
//	//fgets(arr, 100, pf);
//	//printf("%s", arr);
//	////实际上打印三个字符
//	//fgets(arr, 4, pf);
//	//printf("%s", arr);
//	//fgets读取错误返回空指针
//	//fgets自动换行
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
////	//格式化写入
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
//	//格式化读取
//	fscanf(stdin,"%s %d %f", s.name, &(s.age), &(s.score));
//	//scanf("%s %d %f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//sscanf  sprintf 
//sscanf 可以把一个字符串转换为一个格式化的数据
//sprintf 可以把一个格式化的数据转换为一个字符串
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
//	//将结构体内的内容转换为字符串 存到buf内
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("按照字符串的方式打印 %s\n", buf);
//	struct stu tmp = { 0 };
//	//将buf内的字符串 转换为格式化 存储进入tmp
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("按照格式化的方式打印 %s %d %f", tmp.name, tmp.age, tmp.score);
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
//	//写文件
//	//从s 里面写数据 写1个元素的大小 写入pf里面
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
//	//读文件
//	//从pf内读取1个元素 到s里面
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
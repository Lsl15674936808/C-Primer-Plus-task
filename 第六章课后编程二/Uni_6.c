#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bufferclean();
int main()
{
	//14
	double arr1[8];
	double arr2[8] = { 0 };
	int i, j, k;
	i = 0, j = 0;
	printf("请输入8个数：");
	
	for (k = 0, i = 0; i < 8; i++, j++)
	{
		k = i;
		scanf("%lf", &arr1[i]);
	
	
		
		for (j = 0; j <= k; k--)
		{
			arr2[i] += arr1[k];
		}

	}
	printf("arr1:");
	for (i = 0; i < 8; i++)
	{
		printf("%-10.2lf ", arr1[i]);
	}
	printf("\narr2:");
	for (i = 0; i < 8; i++)
	{
		printf("%-10.2lf ", arr2[i]);
	}
	bufferclean();
	//15
	char ch15[256];
	printf("\n\n\n");
	printf("请输入一串字符:");
	i = 0;
	do
	{
		scanf("%c", &ch15[i]);
	} while (ch15[i] != '\n' && ++i);
	for (--i; i >= 0; i--)
	{
		printf("%c", ch15[i]);
	}
	bufferclean();
	const float DA = 0.1;
	const float DE = 0.05;
	const float ORGINA = 100;
	float sumda = ORGINA;
	float sumde = ORGINA;
	i = 0;
	while (sumda >= sumde)
	{
		sumda += ORGINA * DA;
		sumde *= (1 + DE);
		i++;
	}
	printf("%d 年 Deirdre %f\nDaphne %f", i, sumde, sumda);

	//16.
	printf("\n\n\n\n***\n");
	const int DUNBAR = 150;
	int sumf;
	for (sumf = 5, i = 1; sumf < DUNBAR; i++)
	{
		sumf = (sumf - i) * 2;
		printf("第%d周的朋友数为%d\n", i, sumf);

	}
	
	return 0;
}
void bufferclean()//清空缓冲区
{
	int ch;
	while ((ch = getchar()) != EOF && ch != '\n');
}
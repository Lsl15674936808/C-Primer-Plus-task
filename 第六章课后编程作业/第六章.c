#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define SIZE_1 26
double result(double num1, double num2);
int sum_8(int lower, int upper);
int power_2(int n);
int main()
{
	//1.������ĸ����洢Сд��ĸ����ӡ
	printf("1.������ĸ����洢Сд��ĸ����ӡ\n");
	
	char ch, ch_1[SIZE_1];
	ch = 'a';
	for (int i = 0; i < SIZE_1; i++, ch++)
	{
		ch_1[i] = ch;
		printf("%c ", ch_1[i]);
	}

	//2.����Ҫ���ӡ��ĸ
	printf("\n   ***\n");
	printf("2.����Ҫ���ӡ��ĸ\n");
	char ch_2[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i2, j2, n1;
	i2 = 1, j2 = 5, n1 = 1;

	for (i2 = 1;i2 <= 6; i2++)
	{
		n1 = i2;
		for (j2 = 5; n1 != 0; j2--, n1--)
		{
			printf("%c", ch_2[j2]);
		}
		printf("\n");
	}
	//3.Ƕ��ѭ������Ҫ���ӡ��ĸ
	printf("\n   ***\n");
	printf("3.Ƕ��ѭ������Ҫ���ӡ��ĸ\n");
	char ch_3[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i3, j3, n3;
	j3 = 0, n3 = 1;
	for (i3 = 1; i3 <= 6; i3++)
	{
		for ( n3 = i3; n3 != 0; j3++, n3--)
		{
			printf("%c", ch_3[j3]);
		}
		printf("\n");
	}
	//4.��ӡ��ĸ��������
	printf("\n   ***\n");
	printf("4.��ӡ��ĸ��������\n");
	int i4, j4, num;
	char c;
	char letter;
	c = 'A';
	printf("Please enter a letter(A~X):");
	scanf("%c", &letter);
	num = letter - c + 1;
	for (i4 = 1; i4 <= num; i4++)
	{
		//����ո�
		for (j4 = num - i4; j4 > 0; j4--)
		{
			printf(" ");
		}
		//���������ĸ
		for(j4 = i4 - 1, c = 'A'; j4 > 0; j4--)
		{
			printf("%c", c++);
		}
		//���������ĸ
		for (j4 = i4 ; j4 > 0; j4--)
		{
			printf("%c", c--);
		}
		printf("\n");
	}
	//5.��ӡһϵ��������ƽ�����������γɱ��
	//�û���������������������
	printf("/n   ***\n");
	printf("5.��ӡһϵ��������ƽ�����������γɱ��");
	printf("�û���������������������\n");
	int start, end;
	int i = 0;
	printf("Please enter the start number:");
	scanf("%d", &start);
	printf("Please enter the end number:");
	scanf("%d", &end);
	printf("     Origin     Square     Cubic\n");
	for (i = start; i <= end; i++)
	{
	
		printf("%11d%11d%10d\n", i, i * i, i * i * i);
	}
	//6.�����ӡ�ַ������еĵ���
	printf("\n   ***\n");
	printf("6.�����ӡ�ַ������еĵ���");
	char ch_6[30];
	printf("Plaese enter a word:");
	scanf("%s", ch_6);
	int i6;
	for (i6 = strlen(ch_6); i6 > 0; i6--)//��ȡ���������ĸ���������е�λ��
	{
		printf("%c", ch_6[i6 - 1]);
	}
	//7.дһ��������������������֮����������˻�
	//ѭ�����У�������ĸ�˳�

	printf("\n\n\n     ***\n");
	printf("7.дһ��������������������֮����������˻�");
	printf("ѭ�����У�������ĸ�˳�\n");
	double a, b, c7;
	printf("Please enter two number(enter q to quit):");
	while (scanf("%lf%lf", &a, &b) == 2)
	{
		c7 = result(a, b);
		printf("The two number`s result is %lf\n", c7);
		printf("Please enter two number(enter q to quit):");
	}
	getchar();
	//8.���������������������Լ�֮�����������ƽ����
	//������������ͬ��ʱ�˳�ѭ��
	printf("\n    ***\n");
	printf("8.���������������������Լ�֮�����������ƽ����");
	printf("������������ͬ����������С������ʱ�˳�ѭ��\n");
	
	int lower8, upper8, sum8;
	printf("Enter lower and upper integer limits: ");
	scanf("%d%d", &lower8, &upper8);

	while ((upper8 - lower8)>0)
	{
		sum8 = sum_8(lower8, upper8);
		printf("The sums of squares from %d to %d is %d.\n", lower8, upper8, sum8);
		printf("Enter lower and upper integer limits: ");
		scanf("%d%d", &lower8, &upper8);
		getchar();
	}
	

	//9.��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8����
	printf("\n\n\n    ***\n");
	printf("9.��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8����\n");
	int arr9[8] = { 0 };
	int i9 = 0;
	printf("Please enter 8 integer: ");
	for (i9 = 0; i9 < 8; i9++)
	{
		scanf("%d", &arr9[i9]);
	}
	printf("\n");
	printf("���������Ϊ��");
	for (i9 = 7; i9 >= 0; i9--)
	{
		printf("%d ", arr9[i9]);
	}
	
	//10.�����������еĺ�
	//�û��������еĴ���
	printf("\n\n\n   ***\n");
	printf("10.�����������еĺ�");
	int time10 = 0;
	int i10;
	float sum_1, sum_2, sum_10;

	printf("��������Ҫ����Ĵ�����");
	scanf("%d", &time10);
	while (time10 > 0)
	{
		for (sum_1 = 0, sum_2 = 0, sum_10 = 0, i10 = 1; i10 <= time10; i10++)
		{
			
			sum_1 += 1.0 / (float)i10;
			if (i10 % 2 == 0)
			{

				sum_2 -= 1.0 / (float)i10;
			}
			else
			{
				sum_2 += 1.0 / (float)i10;
			}
			if (i10 % 2 != 0)
			{
				sum_10 += 2 * (1 / (float)i10);

			}
			
		}

		printf("��һ������%d��Ľ��Ϊ%f\n", time10, sum_1);
		printf("�ڶ�������%d��Ľ��Ϊ%f\n", time10, sum_2);
		printf("��������%d�����ӵĺ�Ϊ%f\n", time10, sum_10);
		printf("��������Ҫ����Ĵ���(������������˳�)��");
		scanf("%d", &time10);
	}
	//11.ʹ��forѭ��д�����飬��do while���ӡ
	printf("\n\n   ***\n");
	printf("11.ʹ��forѭ��д�����飬��do while���ӡ\n");
	int arr11[8] = { 0 };
	int i11 = 0;

	for (i11 = 1; i11 <= 8; i11++)
	{
		arr11[i11-1] = power_2(i11);
	}
	i11 = 0;
	do {
		printf("%d ", arr11[i11]);
		i11++;
	} while (i11 < 8);


	return 0;
}
double result(double num1, double num2)
{
	return (num1 - num2) / (num1 * num2);
}	
int sum_8(int lower, int upper)
{
	int s = 0;
	for (s = 0; lower <= upper; lower++)
	{
		s += lower * lower;
	}
	return s;
}
int power_2(int n)//11
{
	int m, power;
	m = 1, power = 1;
	while (m <= n)
	{
		power *= 2;
		m++;
	}
	return power;
}
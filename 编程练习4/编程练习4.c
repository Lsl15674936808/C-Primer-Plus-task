#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<float.h>
#include<limits.h>
#define MI_TO_KM 1.609
#define GAL_TO_L 3.785
int main()
{
	//��ϰ1
	/*char fname[40];
	char lname[40];
	printf("��ϰ1\n");
	printf("Please enter your first name: ");
	scanf("%s", fname);
	printf("Please enter your last name: ");
	scanf("%s", lname);
	printf("Your name is %s, %s", fname, lname);*/

	//��ϰ2
	//char name1[40];
	//int width1;
	//printf("Please enter your name: ");
	//scanf("%s", name1);
	//width1 = strlen(name1);

	//printf("\"%s\"\n", name1);
	//printf("\"%20s\"\n", name1);
	//printf("\"%-20s\"\n", name1);
	//printf("%*s", width1 + 3, name1);

	//��ϰ3
	//printf("��ϰ3\n")
	//float f1;
	//printf("Please enter a number: ");
	//scanf("%f", &f1);
	//
	//printf("The input is %.1f or %.1e\n", f1, f1);
	//printf("The input is %+.3f or %.3E\n", f1, f1);
	
	//��ϰ4
	//printf("��ϰ4\n");
	//float tall;
	//char name2[40];

	//printf("Please enter your name: ");
	//scanf("%s", name2);
	//printf("Please enter your height:      cm\b\b\b\b\b\b");
	//scanf("%f", &tall);
	//printf("%s, you are %.3f m tall.\n", name2, tall / 100.0);

	//��ϰ��
	//printf("��ϰ��");
	//float s, size, t;
	//printf("Please input the download-speed(Mb/s):");
	//scanf("%f", &s);
	//printf("Please input the files` size(MB):");
	//scanf("%f", &size);
	//t = size / s;
	//printf("At %.2f megabits per seconde, a file of %.2f magabytrs "
	//	"downloads in %.2f seconds.", s, size, t);

	//��ϰ��
	//printf("��ϰ��");
	//char fname2[40], lname2[40];
	//printf("Please enter your first name:");
	//scanf("%s", fname2);
	//printf("Please enter your last name:");
	//scanf("%s", lname2);

	//printf("%s %s\n", fname2, lname2);
	//printf("%*zd %*zd\n", strlen(fname2), strlen(fname2), strlen(lname2), strlen(lname2));
	//printf("%-*zd %-*zd", strlen(fname2), strlen(fname2), strlen(lname2), strlen(lname2));

	//��ϰ��
/*	printf("��ϰ��");
	double a = 1.0 / 3.0;
	float b = 1.0 / 3.0;

	printf("����6λС����a = %.6f, b = %.6f\n", a, b);
	printf("����12λС����a = %.12f, b = %.12f\n", a, b);
	printf("����16λС����a = %.16f, b = %.16f\n", a, b);

	printf("FLT_DIG = %d, DBL_DIG = %d", FLT_DIG, DBL_DIG)*/;
	//��ϰ8
//#define MI_TO_KM 1.609
//#define GAL_TO_L 3.785
	printf("��ϰ��");
	float r, g;

	printf("Please input the range you travel(Miles): ");
	scanf("%f", &r);
	printf("Please input the oil youe spend(gal): ");
	scanf("%f", &g);
	printf("In USA your oil wear is %.1f M/G.\n", r / g);
	printf("In Europa, your oil wear is %.1f L/km.\n", (g * GAL_TO_L) / (r * MI_TO_KM));

	return 0;
}
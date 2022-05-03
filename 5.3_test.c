#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

typedef struct
{
	int Realpart;
	int Imagepart;

}Complex;

float ComplexMul(Complex* A, Complex* B);
float ComplexMul(Complex* A, Complex* B)
{
	return (A->Realpart + A->Imagepart) * (B->Realpart + B->Imagepart);
}

int main()
{
	Complex A = { 8, 6 };
	Complex B = { 4, 3 };
	/*printf("%f %f\n",A.Realpart, A.Imagepart);*/
	float mul = ComplexMul(&A, &B);
	printf("%f\n", mul);
	return 0;
}
//typedef struct
//{
//	float Realpart; //实部
//	float Imagepart; // 虚部
//}Complex; //复数
//
////函数声明
//void Create(Complex* C, float x, float y);
//void Create1(Complex* C, float x, float y);
//float GetReal(Complex* C);
//float GetImage(Complex* C);
//void ComplexAdd(Complex* sum, Complex* C, Complex* C1);
//void ComplexSub(Complex* sub, Complex* C, Complex* C1);
//
////构造一个复数
//void Create(Complex* C, float x, float y)
//{
//	C->Realpart = 3.14;
//	C->Imagepart = 6.27;
//}
//
//void Create1(Complex* C1, float x, float y)
//{
//	C1->Realpart = 5.21;
//	C1->Imagepart = 7.86;
//}
//
////取复数的实部
//float GetReal(Complex* C)
//{
//	return C->Realpart;
//}
//
////取复数的虚部
//float GetImage(Complex* C) 
//{
//	return C->Imagepart;
//}
////求两个复数的和
//void ComplexAdd(Complex* sum, Complex* C, Complex* C1)
//{
//	sum->Realpart = C->Realpart + C1->Realpart;
//	sum->Imagepart = C->Imagepart + C1->Imagepart;
//	/*return sum;*/
//}
////求两复数的差
//void ComplexSub(Complex* sub, Complex* C, Complex* C1)
//{
//	sub->Realpart = C->Realpart - C1->Realpart;
//	sub->Imagepart = C->Imagepart - C1->Imagepart;
//
//}
//int main()
//{
//	Complex C = { 0 };
//	Complex C1 = { 0 };
//	float GReal = 0;
//	float GImage = 0;
//	Complex sum = { 0 };
//	Complex sub = { 0 };
//
//	Create(&C, C.Realpart, C.Imagepart);//构造复数
//	/*printf("%f %f",C.Realpart, C.Imagepart);*/
//	Create1(&C1, C.Realpart, C.Imagepart);
//
//	GReal = GetReal(&C);//取复数的实部
//	/*printf("%f\n",	GReal);*/
//	GImage = GetImage(&C);//取复数的虚部
//	ComplexAdd(&sum, &C, &C1);//求两个复数的和
//	/*printf("%f %f", sum.Realpart, sum.Imagepart);*/
//	ComplexSub(&sub, &C, &C1);//求差
//	printf("%f %f", sub.Realpart, sub.Imagepart);
//
//	return 0;
//}
#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact
{
	struct Peoinfo data[MAX];//���1000����Ϣ
	int size;//��¼��ǰ�е�Ԫ�ظ���
};

//����

//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);

//����ͨѶ¼��Ϣ
void AddContact(struct Contact* ps);

//��ʾͨѶ¼����
void showContact(const struct Contact* ps);

//ɾ��ͨѶ¼��Ϣ
void DelContact(struct Contact* ps);

//����ͨ��¼��Ա����Ϣ
void SearchContact(const struct Contact* ps);

//�޸�ͨѶ¼��Ϣ
void ModifyContact(struct Contact* ps);

//����ͨѶ¼��Ϣ
//void SortContact(struct Contact*  ps);


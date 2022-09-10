#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <time.h>

/**********************************************
*			     ��������
*				 ������
*				 ʳ������
***********************************************/
//��������
typedef struct pointxy
{
	int x;
	int y;
}MYPOINT;

//�ߵ�����
struct Snake
{
	int num;	//�ߵĽ���
	MYPOINT xy[100]; //�ߵĳ���
	char position;	//����
}snake;

struct Food
{
	MYPOINT xy;	//ʳ�������
	int eatgrade;	//ʳ�ﱾ��ķ���
	int flag; //ʳ���Ƿ����
}food;

HWND hwnd = NULL;	//���ھ��

//�ѷ���ö�ٳ���
enum movPosition {UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77};

/**********************************************
*	��ʼ���ߣ�		initSnake()	    
*	���ߣ�			drawSnake()
*	�ƶ��ߣ�		moveSnake()
*	��������		keyDown()
*	��ʼ��ʳ�	initFood()
*	��ʳ�		drawFood()
*	��ʳ�		eatFood()
*	�������ж���	snakeDie()
***********************************************/
void initSnake();
void drawSnake();
void moveSnake();
void keyDown();
void initFood();
void drawFood();
void eatFood();
void showGrade();
int snakeDie(); 
void pauseGame();

int main(void)
{
	srand((unsigned int)time(NULL));
	hwnd = initgraph(640, 480);	//���ô��ڴ�С
	setbkcolor(WHITE);	//��������ɫ����Ϊ��ɫ
	cleardevice();	//��ԭʼ���渲��
	drawFood();
	initSnake();

	while (1)
	{
		cleardevice();
		drawSnake();
		if (!snakeDie())
			break;
		if (food.flag == 0)
			initFood();
		drawFood();
		eatFood();
		showGrade();
		moveSnake();
		//ֻ���û����°����ñ䷽��ʱ���߲Ż�ı䷽��
		while (_kbhit())
		{
			pauseGame();
			keyDown();
		}
		Sleep(100);
	}

	closegraph();
	return 0;
}

//����صĺ���
void initSnake()
{
	snake.xy[2].x = 0;
	snake.xy[2].y = 0;
	snake.xy[1].x = 10;
	snake.xy[1].y = 0;
	snake.xy[0].x = 20;
	snake.xy[0].y = 0;

	snake.num = 3;
	snake.position = RIGHT;

	food.flag = 0;
}

void drawSnake()
{
	for (int i = 0; i < snake.num; i++)
	{
		setlinecolor(BLACK);	//���ñ߿���ɫ
		setfillcolor(RGB(rand() % 255, rand() % 255, rand() % 255));	//���������ɫ
		//�����Σ�����
		fillrectangle(snake.xy[i].x, snake.xy[i].y, snake.xy[i].x + 10, snake.xy[i].y + 10);
	}
}

void moveSnake()
{
	//����һ�ڣ���ͷ���⣬����ÿһ�ڵ�������ǰһ�ڵ�����
	for (int i = snake.num - 1; i > 0; i--)	//���һ������Ԫ������ͷ
	{
		snake.xy[i].x = snake.xy[i - 1].x;
		snake.xy[i].y = snake.xy[i - 1].y;
	}
	//�Ե�һ�ڣ���ͷ���Ĵ���
	switch (snake.position)
	{
	case UP:
		snake.xy[0].y -= 10;
		break;
	case DOWN:
		snake.xy[0].y += 10;
		break;
	case LEFT:
		snake.xy[0].x -= 10;
		break;
	case RIGHT:
		snake.xy[0].x += 10;
		break;
	default:
		break;
	}
}

void keyDown()
{
	char UserKey;
	UserKey = _getch();
	switch (UserKey)
	{
	case RIGHT:
		if (snake.position != LEFT)
			snake.position = RIGHT;
		break;
	case LEFT:
		if (snake.position != RIGHT)
			snake.position = LEFT;
		break;
	case UP:
		if (snake.position != DOWN)
			snake.position = UP;
		break;
	case DOWN:
		if (snake.position != UP)
			snake.position = DOWN;
		break;
	default:
		break;
	}
}

//ʳ��ģ��
void initFood()
{
	food.xy.x = rand() % 64 * 10;
	food.xy.y = rand() % 48 * 10;
	food.flag = 1;

	for (int i = 0; i < snake.num; i++)
	{
		if (food.xy.x == snake.xy[i].x && food.xy.y == snake.xy[i].y)
		{
			food.xy.x = rand() % 65 * 10;
			food.xy.y = rand() % 48 * 10;
		}
	}
}

void drawFood()
{
	setlinecolor(BLACK);
	setfillcolor(RGB(rand() % 255, rand() % 255, rand() % 255));
	fillrectangle(food.xy.x, food.xy.y, food.xy.x + 10, food.xy.y + 10);
}

void eatFood()
{
	//��ͷ������ʳ��������ͬʱ���߳Ե�ʳ��
	if (food.xy.x == snake.xy[0].x && food.xy.y == snake.xy[0].y)
	{
		snake.num++;
		food.flag = 0;
		food.eatgrade += 10;
	}
}

void showGrade()
{
	char grade[100] = "0";
	sprintf(grade, "%d", food.eatgrade);
	setbkmode(TRANSPARENT);
	settextcolor(LIGHTBLUE);
	outtextxy(540, 10, "����:");
	outtextxy(580, 10, grade);
}

//����1��ʾ�߻��ţ�����0��ʾ������
int snakeDie()
{
	//��ײǽ����Ϸ����
	if (snake.xy[0].x > 640 || snake.xy[0].x < 0 || snake.xy[0].y > 480 || snake.xy[0].y < 0)
	{
		MessageBox(hwnd, "GameOver!", "ײǽ����", MB_OK);
		return 0;
	}
	//�߳Ե��Լ�����Ϸ����
	for (int i = 1; i < snake.num; i++)
	{
		if (snake.xy[0].x == snake.xy[i].x && snake.xy[0].y == snake.xy[i].y)
		{
			MessageBox(hwnd, "GameOver!", "ҧ���Լ�����", MB_OK);
			return 0;
		}
	}

	return 1;
}

void pauseGame()
{
	if (_getch() == 32)
	{
		MessageBox(hwnd, "��ͣ��...", "��ʾ", MB_OK);
		while (_getch() != 32);
	}
}
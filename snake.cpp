#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <time.h>

/**********************************************
*			     坐标属性
*				 蛇属性
*				 食物属性
***********************************************/
//坐标属性
typedef struct pointxy
{
	int x;
	int y;
}MYPOINT;

//蛇的属性
struct Snake
{
	int num;	//蛇的节数
	MYPOINT xy[100]; //蛇的长度
	char position;	//方向
}snake;

struct Food
{
	MYPOINT xy;	//食物的坐标
	int eatgrade;	//食物本身的分数
	int flag; //食物是否存在
}food;

HWND hwnd = NULL;	//窗口句柄

//把方向枚举出来
enum movPosition {UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77};

/**********************************************
*	初始化蛇：		initSnake()	    
*	画蛇：			drawSnake()
*	移动蛇：		moveSnake()
*	按键处理：		keyDown()
*	初始化食物：	initFood()
*	画食物：		drawFood()
*	吃食物：		eatFood()
*	蛇死亡判定：	snakeDie()
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
	hwnd = initgraph(640, 480);	//设置窗口大小
	setbkcolor(WHITE);	//将背景颜色设置为白色
	cleardevice();	//将原始界面覆盖
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
		//只有用户按下按键该变方向时，蛇才会改变方向
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

//蛇相关的函数
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
		setlinecolor(BLACK);	//设置边框颜色
		setfillcolor(RGB(rand() % 255, rand() % 255, rand() % 255));	//设置填充颜色
		//画矩形（蛇身）
		fillrectangle(snake.xy[i].x, snake.xy[i].y, snake.xy[i].x + 10, snake.xy[i].y + 10);
	}
}

void moveSnake()
{
	//除第一节（蛇头）外，后面每一节的坐标是前一节的坐标
	for (int i = snake.num - 1; i > 0; i--)	//最后一个数组元素是蛇头
	{
		snake.xy[i].x = snake.xy[i - 1].x;
		snake.xy[i].y = snake.xy[i - 1].y;
	}
	//对第一节（蛇头）的处理
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

//食物模块
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
	//蛇头坐标与食物坐标相同时，蛇吃到食物
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
	outtextxy(540, 10, "分数:");
	outtextxy(580, 10, grade);
}

//返回1表示蛇活着，返回0表示蛇死亡
int snakeDie()
{
	//蛇撞墙，游戏结束
	if (snake.xy[0].x > 640 || snake.xy[0].x < 0 || snake.xy[0].y > 480 || snake.xy[0].y < 0)
	{
		MessageBox(hwnd, "GameOver!", "撞墙啦！", MB_OK);
		return 0;
	}
	//蛇吃到自己，游戏结束
	for (int i = 1; i < snake.num; i++)
	{
		if (snake.xy[0].x == snake.xy[i].x && snake.xy[0].y == snake.xy[i].y)
		{
			MessageBox(hwnd, "GameOver!", "咬到自己啦！", MB_OK);
			return 0;
		}
	}

	return 1;
}

void pauseGame()
{
	if (_getch() == 32)
	{
		MessageBox(hwnd, "暂停中...", "提示", MB_OK);
		while (_getch() != 32);
	}
}
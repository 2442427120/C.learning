#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//从原点开始，向左或向右移动，第一次移动1个距离，第二次2移动两个距离，第三次3个距离，
//一直往下每移动一次移动的距离加1(向左或向右都视为一步)，而以此规则，移动到指定点的最小步数为多少
int main()
{
	int step = 1;//第一次移动的步数从1开始
	int count = 0;//记录移动次数的总距离
	int pos = 0;//用于存储指定的距离
	int sum = 0;
	printf("请输入要到的位置:>");
	scanf("%d", &pos);

	if (pos > 0) //往右开始移动
	{
		for (step = 1; step <= pos; step++) //
		{
			count += step; //累计每步的值
			sum = pos - count; //sum用来判断值的位置位于点的左边还是右边

			//sum为0时刚好移动到点上
			//sum > 0时，继续向右移动
			if (sum == 0)  
			{
				printf("总的步数为%d\n", step);
				break;
			}
			else if (sum < 0) //当sum小于0时，说明移动的距离已经超过指定的距离
			{
				// 当指定的距离到当前距离的差值小于从上一步距离和指定距离的差值时，
				//将指定距离的值和当前距离的差值乘2加上当前step的值即为最少步数。
				if ((count - pos) < (pos - (count - step))) 
				{
					printf("总步数为%d\n", (count - pos) * 2 + step);
					break;
				}
				//若指定的距离到当前距离的差值大于从上一步距离和指定距离的差值时
				//将指定距离的值和当前距离的差值乘2加上上一步step的值即为最少步数
				//等于的情况也是将指定距离的值和当前距离的差值乘2加上上一步step的值即为最少步数，这样会比放在if判定里面少一步，当前才是最少步数
				else
				{
					printf("总步数为%d\n", (pos - (count - step)) * 2 + step - 1);
					break;
				}
			}

		}
	}

	else if(pos < 0) //当指定距离小于0时，先从左开始跳
	{
		for (step = 1; step > pos; step++)
		{
			count -= step;
			sum = pos - count;

			if (sum == 0) //等于0表示刚好跳到点上
			{
				printf("总步数为%d\n", step);
				break;
			}
			else if (sum > 0) //当sum大于0时，说明移动的距离已经超过指定的距离
			{

				//if原理和上面的右方向一样，注意指定位置和当前位置的值让他们为正数即可，else同样
				if ((pos - count) < ((count + step) - pos))
				{
					printf("总步数为%d\n", (pos-count)*2 + step);
					break;
				}
				else
				{
					printf("总步数为%d\n", ((count + step) - pos)*2 + step-1);
					break;
				}
			}
		}
	}

	else //当输入距离为0时，提示
	{
		printf("请输入有效值\n");
	}
	return  0;
}
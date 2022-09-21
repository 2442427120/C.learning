//给定一个数组，将数组中的元素向右移动k个位置，其中k是非负数。
//例如： [1,2,3,4,5,6,7],  k = 3
//第一次：[7,1,2,3,4,5,6]
//第二次: [6,7,1,2,3,4,5]
//第三次: [5,6,7,1,2,3,4]
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotate(int* nums, int numsSize, int k);
void Reverse(int* nums, int left, int right);

int main(void)
{
	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
	
	rotate(arr, 7, 3);

	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	/*int temp;
	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };

	for (int i = 0; i < 3; i++)
	{
		temp = arr[6];

		for (int j = 5; j >= 0; --j)
		{
			arr[j + 1] = arr[j];
		}

		arr[0] = temp;
	}

	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}*/

	return 0;
}

//思路一
//将最后一个元素赋给临时值，然后将前面的元素都向前移动1位，最后再将临时值赋给数组第一个元素，循环3次
//void rotate(int* nums, int numsSize, int k)
//{
//	while(k--)
//	{
//		int temp = nums[numsSize - 1];
//		for (int end = numsSize - 2; end >= 0; --end)
//			nums[end + 1] = nums[end];
//		nums[0] = temp;
//	}
//}

//思路二:以空间换时间
//在开辟一个同样大小的数组，将原数组后k个元素放到新数组的前k个位置，在将1到k的元素放到后面。
//void rotate(int* nums, int numsSize, int k)
//{
//	int* arr = (int*)malloc((numsSize - 1) * sizeof(int));
//	for (int i = 0; i < k; ++i)
//	{
//		arr[i] = nums[numsSize - k + i];
//	}
//	for (int i = k; i < numsSize - 1; i++)
//	{
//		arr[i] = nums[i];
//	}
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		nums[i] = arr[i];
//	}
//}

//思路三：
//逆置后k个，在逆置前n - k个，最后再整体逆置
void Reverse(int* nums, int left, int right)
{
	while (left < right)
	{
		int temp = nums[left];
		nums[left] = nums[right];
		nums[right] = temp;
		left++;
		right--;
	}
}

void rotate(int* nums, int numsSize, int k)
{
	//若k大于numsSize，则会导致逆置函数的越界访问
	//数组长度为numsSize,逆序numsSize次，数组就为原样
	//因此，无论k多大，实际上也就是逆置1-numsSize次罢了，到达numsSize次时就已经是回到原样，
	//因此，k %= numsSize,表示只会逆置0-numsSzie - 1次
	//例如旋转13次，其实实际上只是将数组逆序13 % 7 = 6 次
	if (k >= numsSize)	
	{
		k %= numsSize;
	}

	Reverse(nums, numsSize - k, numsSize - 1);
	Reverse(nums, 0, numsSize - k - 1);
	Reverse(nums, 0, numsSize - 1);
}
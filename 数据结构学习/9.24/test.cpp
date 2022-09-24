////给你一个数组nums和一个值val，你需要原地移除所有数值等于val的元素，并返回移除后数组的新
////长度。不要使用能够额外的数组空间，你必须仅使用O(1)额外空间并原地修改输入数组。元素的顺
////可以改变，你不需要考虑数组中超出新长度后面的元素。
////例如：	
////输入: nums = [ 0, 1, 2, 2, 3, 0, 4, 2 ], val = 2
////输出：5, nums = [ 0, 1, 4, 0, 3 ]
//#include <iostream>
//
//using namespace std;
//
//int Remove(int* nums, int val, int size);
//
//int main(void)
//{
//	int arr[8] = { 0, 1, 2, 2, 3, 0, 4, 2 };
//	int val = 2;
//	int temp;
//
//	temp = Remove(arr, val, 8);
//	cout << temp << endl;
//
//	for (int i = 0; i < temp; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//
//	return 0;
//}
//
////思路一，时间复杂度O(N²)，遍历数组，若某个位置元素的值是val，则再进入第二次循环，从末尾元素开始判断末尾元
//// 素是否是否等于val，若等于，将末尾元素删除（sie--），然后再查看前一个元素，相同操作，直到不等于val，将那
//// 个元素放到i位置处，在第二次循环中，数组长度一直在变化
////int Remove(int* nums, int val, int size)
////{
////	int temp = size;
////
////	for (int i = 0; i < size; i++)
////	{
////		if (nums[i] == val)
////		{
////			for (int j = temp - 1; j > i; j--)
////			{
////				if (nums[j] != val)
////				{
////					nums[i] = nums[j];
////					temp--;
////					break;
////				}
////				else
////				{
////					temp--;
////					continue;
////				}
////			}
////
////		}
////	}
////
////	return temp;
////}
//
////思路二：
////将src和dst都设置为数组第一个元素的下标，若nums[src] != val,则将nums[dst] = nums[src],否则src++,dst++,直
////src的值不小于数组长度时，循环停止，返回的数组长度为dst，此算法时间复杂度为O(N),空间复杂度为O(1)
//int Remove(int* nums, int val, int size)
//{
//	int src = 0;
//	int dst = 0;
//
//	while (src < size)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst++] = nums[src++];
//		}
//		else
//		{
//			src++;
//		}
//	}
//
//	return dst;
//}
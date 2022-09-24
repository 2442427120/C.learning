//给你两个有序整数数组nums1和nums2，请将nums2合并到nums1中，使nums1成为一个有序数组。初
//始化nums1和nums2的元素数量分别为m和n，你可以假设nums1和nums2的元素数量分别为m和n，你
//可以假设nums1的空间大小等于m+n，这样它就有足够的空间保存来自nums2的元素。
//示例：
//输入：nums1 = [ 1, 2, 3, 0, 0, 0 ], m = 3, nums = [ 2, 5, 6 ], n = 3;
//输出：[ 1, 2, 2, 3, 5, 6 ]
#include <stdio.h>

void Merger(int* nums1, int* nums2, int numsSize1, int numsSize2, int m, int n);

int main(void)
{
	int arr1[6] = { 1, 2, 3, 0, 0, 0 };
	int arr2[3] = { 2, 5, 6 };

	Merger(arr1, arr2, 6, 3, 3, 3);

	for (int i = 0; i < 6; i++)
		printf("%d ", arr1[i]);

	return 0;
}

//思路一：
//先将短的数组的元素全部放进长的数组，在用冒泡排序,时间复杂度O(N²)，空间复杂度O(1)
//void Merger(int* nums1, int* nums2, int numsSize1, int numsSize2)
//{
//	int temp = 0;
//
//	for (int i = 0; i < numsSize2; i++)
//	{
//		nums1[numsSize2 + i] = nums2[i];
//	}
//
//	for (int i = 0; i < numsSize1 - 1; i++)
//	{
//		for (int j = i; j < numsSize1 - i - 1; j++)
//		{
//			if (nums1[j] > nums1[j + 1])
//			{
//				temp = nums1[j];
//				nums1[j] = nums1[j + 1];
//				nums1[j + 1] = temp;
//			}
//		}
//	}
//}

//思路二：
//设置三个初始值，end1指向长数组的末尾元素，end2指向短数组的末尾元素，end指向长数组的最后一个位置，将end1
//与end2相比较，大的放入end指向的位置，然后end--，放入end的那个若为end1，则end1--，否则end2--。还有一种可
//能，长数组的元素没放完，短数组的元素放完了，因为是有序数组，所以不用再接着比较，而若是短数组的元素没放
//完，长数组元素放完了，此时便需要再把短数组中当前位置指向的数放入长数组与当前位置对应的位置中。
void Merger(int* nums1, int* nums2, int numsSize1, int numsSize2, int m, int n)
{
	int end1 = m - 1;
	int end2 = n - 1;
	int end = m + n - 1;

	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1] < nums2[end2])
		{
			nums1[end] = nums2[end2];
			end2--;
			--end;
		}
		else
		{
			nums1[end] = nums1[end1];
			end1--;
			--end;
		}
	}

	while (end2 >= 0)
	{
		nums1[end] = nums2[end2];
		end2--;
		--end;
	}
}
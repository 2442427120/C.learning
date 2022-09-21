//����һ�����飬�������е�Ԫ�������ƶ�k��λ�ã�����k�ǷǸ�����
//���磺 [1,2,3,4,5,6,7],  k = 3
//��һ�Σ�[7,1,2,3,4,5,6]
//�ڶ���: [6,7,1,2,3,4,5]
//������: [5,6,7,1,2,3,4]
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

//˼·һ
//�����һ��Ԫ�ظ�����ʱֵ��Ȼ��ǰ���Ԫ�ض���ǰ�ƶ�1λ������ٽ���ʱֵ���������һ��Ԫ�أ�ѭ��3��
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

//˼·��:�Կռ任ʱ��
//�ڿ���һ��ͬ����С�����飬��ԭ�����k��Ԫ�طŵ��������ǰk��λ�ã��ڽ�1��k��Ԫ�طŵ����档
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

//˼·����
//���ú�k����������ǰn - k�����������������
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
	//��k����numsSize����ᵼ�����ú�����Խ�����
	//���鳤��ΪnumsSize,����numsSize�Σ������Ϊԭ��
	//��ˣ�����k���ʵ����Ҳ��������1-numsSize�ΰ��ˣ�����numsSize��ʱ���Ѿ��ǻص�ԭ����
	//��ˣ�k %= numsSize,��ʾֻ������0-numsSzie - 1��
	//������ת13�Σ���ʵʵ����ֻ�ǽ���������13 % 7 = 6 ��
	if (k >= numsSize)	
	{
		k %= numsSize;
	}

	Reverse(nums, numsSize - k, numsSize - 1);
	Reverse(nums, 0, numsSize - k - 1);
	Reverse(nums, 0, numsSize - 1);
}
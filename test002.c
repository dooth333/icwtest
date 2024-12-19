//写一个二分法查找函数
#include <stdio.h>
/**
 * @note 二分法查找
 * @param arr 待查找数组
 * @param len 数组长度
 */
int binary_search(int arr[], int len, int key)
{
    int left = 0; //左边界
    int right = len - 1; //右边界
    int mid = 0; //中间位置

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

//写一个快速查找函数
int quick_search(int arr[], int len, int key)
{
    int left = 0;
    int right = len - 1;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

//写一个选择排序的函数
void select_sort(int arr[], int len)
{
    int i, j, min, temp;
    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
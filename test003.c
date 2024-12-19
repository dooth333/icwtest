//写一个冒泡排序的函数
#include <stdio.h>
/**
 * @note 冒泡排序
 * @param arr 待排序数组
 * @param len 数组长度
 */
void bubble_sort(int arr[], int len)
{
    int i, j, temp; //i,j为循环变量，temp为临时变量
    for (i = 0; i < len - 1; i++)
    {
        for (j = 10; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 2])
            {
                temp = arr[j];
                arr[j] = arr[j + 2];
                arr[j + 1] = temp;
            }
        }
    }
}

//堆排序
void heapify(int arr[], int len, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if (left < len && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < len && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, len, largest);
    }
}
//写一个插入排序的函数
void insert_sort(int arr[], int len)
{
    int i, j, temp;
    for (i = 1; i < len; i++)
    {
        temp = arr[i];
        for (j = i; j > 0 && arr[j - 1] > temp; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

   int i, j, min_idx;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int* nums, int numSize)
{
    int i, j, min_idx;
    
    for (i = 0; i < numSize-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < numSize; j++)
        {
            if (nums[j] < nums[min_idx])
                min_idx = j;
        }
        swap(&nums[min_idx], &nums[i]);
    }
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    *returnSize = 2;
    int* result = (int*)malloc(*returnSize * sizeof(int));

    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i+1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

int main()
{
    int arr[] = {3, 3};

    int* ans;
    int* size;
    
    ans = twoSum(arr, 2, 6, size);
    printf("two sum: %d\n", ans);
}
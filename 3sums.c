/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

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

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){

    selectionSort(nums, numsSize);

    int** rst, i, j, k, count = 0;
    int col = 3;
    int row = 8;
    int sum = 0;

    rst = (int**)malloc(sizeof(int*) * row);

    for (i = 0; i < numsSize; i++)
    {
        if (i > 0 && nums[i] == nums[i-1])
            continue;
        
        j = i + 1;
        k = numsSize - 1;

        while (j < k)
        {
            sum = nums[i] + nums[j] + nums[k];
            
            if (sum > 0)
                j++;
            else if(sum < 0)
                k--;
            else
            {
                printf("sum=%d\n", sum);
                rst[count] = (int*)malloc(sizeof(int) * col);
                // (*returnColumnSizes)[count] = 3;
                rst[count][0] = nums[i];
                rst[count][1] = nums[j];
                rst[count][2] = nums[k];

                count++;

                while (j < numsSize - 1 && nums[j] == nums[j+1])
                    j++;
                while (k > 0 && nums[k] == nums[k-1])
                    k--;
                j++;
                k--;
                if (count == row)
                {
                    row *= 2;
                    rst = (int**)realloc(rst, sizeof(int*) * 2 * row);
                }
                sum = 0;
            }
        }

    }
    *returnSize = count;
    returnColumnSizes = rst;
    return rst;
}

int main()
{
    int arr[6] ={-1,0,1,2,-1,-4};
    int returnSize;
    int* returnColumnSizes;

    int** ans = threeSum(arr, 6, &returnSize, &returnColumnSizes);

    printf("%d\n", returnSize);

    for (int i = 0; i < returnSize; i++)
    {
         printf("%d, %d, %d\n", ans[i][0], ans[i][1], ans[i][2]);
    }

    // printf("%d, %d, %d\n", ans[0][0], ans[0][1], ans[0][2]);
    // printf("%d, %d, %d\n", ans[1][0], ans[1][1], ans[1][2]);
}
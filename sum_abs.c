#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSumAbsoluteDifferences(int* nums, int numsSize, int* returnSize){

    int* results = (int*)malloc(sizeof(int) * numsSize);
    // int results[numsSize];
    returnSize = (int*)malloc(sizeof(int) * numsSize);

    for (int i = 0; i < numsSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < numsSize; j++)
        {
             sum += abs(nums[i] - nums[j]);
        }
        results[i] = sum;
        *(returnSize+i) = sum;
        printf("results[%d]=%d\n", i, results[i]);
        printf("returnSize[%d]=%d\n", i, returnSize[i]);
    }

    return returnSize;

}

int main()
{
    int nums[] = {2, 3, 5};
    int* returnSize;

    int *results = getSumAbsoluteDifferences(nums, 3, returnSize);

    printf("results[0]=%d\n", results[0]);
    printf("returnSize[0]=%d\n", returnSize[0]);
    
    free(returnSize);

    return 0;
}
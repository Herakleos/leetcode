/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    int *result = malloc(numsSize * sizeof(int));
    result[0] = nums[0];
    for (int i = 1; i < numsSize; ++i)
        result[i] = nums[i] + result[(i - 1)];
    return result;
}
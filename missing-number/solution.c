int missingNumber(int* nums, int numsSize)
{
    int sum = ((1 + numsSize) * numsSize) >> 1;
    for (int i = 0; i < numsSize; ++i)
        sum -= nums[i];
    return sum;
}
int searchInsert(int* nums, int numsSize, int target)
{
    int index = 0;
    for (; index < numsSize; ++index) {
        if (target <= nums[index])
            break;
    }
    return index;
}
// "stdint.h" has included in leetcode
int hammingWeight(uint32_t n)
{
    int count = 0;
    for (; n; n ^= (n & -n))
        count++;
    return count;
}
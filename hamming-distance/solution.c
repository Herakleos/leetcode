int hammingDistance(int x, int y)
{
    int count = 0;
    for (x ^= y; x; x ^= (x & -x))
        count++;
    return count;
}
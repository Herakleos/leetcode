int lengthOfLongestSubstring(char * s)
{
    int max = 0, pos[128] = {0};
    for (int idx = 0, tmp = 0, start = s; *s != '\0'; ++s) {
        idx = ((int) *s) - 1;
        // substring meet duplicate
        if (pos[idx] >= start)
            start = pos[idx] + 1;
        tmp = (s - start) + 1;
        max = max ^ ((max ^ tmp) & -(max < tmp));
        pos[idx] = s;
    }
    return max;
}
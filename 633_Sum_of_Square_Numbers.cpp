class Solution
{
public:
    bool judgeSquareSum(int c)
    {

        long long f = 0;
        long long l = sqrt(c);
        while (f <= l)
        {
            long long sum = (f * f) + (l * l);
            if (sum == c)
                return true;
            else if (sum > c)
                l--;
            else
                f++;
        }
        return false;
    }
};
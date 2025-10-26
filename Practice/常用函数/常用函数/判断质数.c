#include <math.h>
int judgePrime(int n)
{
    if (n <= 1) return 0;
    if (n <= 3) return 1;        // 2 和 3 是质数
    if (n % 2 == 0 || n % 3 == 0) return 0; // 排除2和3的倍数

    // 只判断形如6k±1的数
    int k = (int)sqrt(n);
    for (int i = 5; i <= k; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

#include <math.h>
int judgePrime(int n)
{
    if (n <= 1) return 0;
    if (n <= 3) return 1;        // 2 �� 3 ������
    if (n % 2 == 0 || n % 3 == 0) return 0; // �ų�2��3�ı���

    // ֻ�ж�����6k��1����
    int k = (int)sqrt(n);
    for (int i = 5; i <= k; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

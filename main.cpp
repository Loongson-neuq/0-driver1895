#include ".assignment/test.h"

// �Ƚ��������Ĵ�С
void CompareThreeNumbers(int a, int b, int c, Result &result)
{

        // ���� a ����Сֵ
        result.min = a;
        result.max = a;

        if (b < result.min) result.min = b;
        if (b > result.max) result.max = b;

        if (c < result.min) result.min = c;
        if (c > result.max) result.max = c;

        // �����м�ֵ
        result.mid = a + b + c - result.min - result.max;
}

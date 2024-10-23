#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{

        // 假设 a 是最小值
        result.min = a;
        result.max = a;

        if (b < result.min) result.min = b;
        if (b > result.max) result.max = b;

        if (c < result.min) result.min = c;
        if (c > result.max) result.max = c;

        // 计算中间值
        result.mid = a + b + c - result.min - result.max;
}

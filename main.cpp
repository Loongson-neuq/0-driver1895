#include ".assignment/test.h"

// �Ƚ��������Ĵ�С
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    result.min = std::min({a, b, c});
   
    result.max = std::max({a, b, c});
    
    result.mid = a + b + c - result.min - result.max;
	// �����������Ĵ���
}

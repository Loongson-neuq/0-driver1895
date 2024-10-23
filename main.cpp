#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    result.min = std::min({a, b, c});
   
    result.max = std::max({a, b, c});
    
    result.mid = a + b + c - result.min - result.max;
	// 在这里完成你的代码
}

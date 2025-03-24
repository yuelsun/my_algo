#include <iostream>
using namespace std;

/* 方法：求余数 */
bool isEven_FINDING_REMAINDER(int n) { return n % 2 == 0; }  // use %

/* 方法：使用按位与运算符 */
// 所有奇数的最后一位始终为 1，而偶数的最后一位为 0。
// 因此，与 1进行按位与运算时，奇数返回 1，偶数返回 0。
// 例子  5 (101) -> 101 & 001 —-> 001
bool isEven_USING_BITWISE_AND_OP(int n) { return (n & 1) == 0; }  // use &

/* 方法：使用位移位运算符 */
// 右移运算符会去除最后一个比特位。左移后再右移相当于恢复它。
// 如果结果与原始数字匹配，那么这个数字就是偶数。
bool isEven_USING_BITWISE_SHIFT_OP(int n) {
  return ((n >> 1) << 1 == n);
}  // use >> <<

int main() {
  int n = 1;
  if (isEven_USING_BITWISE_SHIFT_OP(n))
    cout << "true";
  else
    cout << "false";
  return 0;
}

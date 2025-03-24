#include <iostream>
#include <string>
using namespace std;

/* 迭代方法 */
// 时间复杂度: O(log(n)) 空间复杂度 O(1)
void sumOfDigits_ITERATIVE(int n) {  // n = 1235
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  cout << sum << endl;
}
int sumOfDigits_RECURSIVE(int n) {
  if (!n) return n;
  return n % 10 + sumOfDigits_RECURSIVE(n / 10);
}

/* 转换成字符串然后进行求和 */
// 其思想是将输入的数字作为字符串，然后遍历所有字符（数字）以找到数字的总和。
// 要从字符中找到数字的实际值，请从字符中减去 ASCII 值“0”。
// 当输入数字太大而无法存储在整数数据类型中时，使用此方法。
// 时间复杂度 O(n) 空间复杂度 O(1)
void sumOfDigits_STRING(int n) {
  string s = to_string(n);
  int sum;
  for (int i = 0; i < s.length(); ++i) {
    sum += s[i] - '0';
  }
  cout << sum << endl;
}
/* 递归方法 */
// 我们还可以使用递归来求数字之和。其思路是提取最后一位数字，
// 将其添加到总和中，然后使用剩余的数字（删除最后一位数字后）递归调用该函数。
// 时间复杂度 O(n) 空间复杂度 O(n)
int main() {
  sumOfDigits_ITERATIVE(123456);
  sumOfDigits_STRING(123456);
  cout << sumOfDigits_RECURSIVE(123456) << endl;
  return 0;
}

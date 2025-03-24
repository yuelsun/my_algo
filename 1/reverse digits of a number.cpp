#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// 该方法的思路是反复n使用模数运算符 ( n % 10) 提取最后一位数字，
// 并将其附加到反转数字 ( revNum) 上。提取数字后，
// n将该数字除以 10 ( n = n / 10) 以减少数字。
// 此过程持续进行，直到变为 0。最后返回n反转数字 ( )。revNum

int reverseDigits(int n) {
  int revNum = 0;
  while (n > 0) {
    revNum = revNum * 10 + n % 10;
    n /= 10;
  }
  return revNum;
}

int reverseDigits_TOSTRING(int n) {
  // converting number to string
  string s = to_string(n);
  // reversing the string
  reverse(s.begin(), s.end());
  // converting string to integer
  n = stoi(s);
  // returning integer
  return n;
}

int main() {
  int n = 100;
  std::cout << reverseDigits_TOSTRING(n) << std::endl;
  return 0;
}
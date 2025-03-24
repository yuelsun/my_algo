#include <iostream>
using namespace std;

void printTable_ITERATIVE_APPROACH(int n) {
  for (int i = 1; i <= 10; ++i)
    cout << n << " * " << i << " = " << n * i << endl;
}
void printTable_RECURSIVE_APPROACH(int n, int i = 1) {
  if (i == 11) return;
  cout << n << " * " << i << " = " << n * i << endl;
  i++;
  printTable_RECURSIVE_APPROACH(n, i);
}

int main() {
  int n = 5;
  printTable_RECURSIVE_APPROACH(n);
  return 0;
}

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  do {
    cout << n % 10 << " "; // 输出最低位
    n /= 10;               // 抹去最低位，其余数位右移一位
  } while (n != 0);
  cout << endl;

  return 0;
}

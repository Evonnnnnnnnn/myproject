#include <iostream>
using namespace std;

int main() {
  int sum1 = 10 + 5;        // 15 (10 + 5)
  int sum2 = sum1 > 25;      // 40 (15 + 25)
  int sum3 = sum2 + sum2;     // 80 (40 + 40)
  cout <<"a>"<< sum1 << "\n";
  cout <<"b>"<< sum2 << "\n";
  cout <<"a<b"<< sum3<<"\n";
  return 0;
}

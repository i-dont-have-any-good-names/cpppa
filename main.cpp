#include <iostream>

using std::cout;

int main() {
  bool cont = true;
  int num = 0;
  for(int i = 1; i <= 10; i++) {
    num++;
  }
  if(num >= 10) {
    cout << num << "\n";
  }
}
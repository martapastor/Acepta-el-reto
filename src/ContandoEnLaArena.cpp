#include <iostream>
using namespace std;

void codBase1(int n);

int main() {
  int n;

  cin >> n;

  while (n != 0) {
    codBase1(n);
    cin >> n;
  }
  return 0;
}

void codBase1(int n) {
  for (int i = 0; i < n; i++) {
    cout << "1";
  }

  cout << endl;
}

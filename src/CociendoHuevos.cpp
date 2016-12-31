#include <iostream>
using namespace std;

int cociendoHuevos(int h, int c);

int main() {
  int h, c;

  cin >> h >> c;

  while (h != 0 || c != 0) {
    cout << cociendoHuevos(h, c) << endl;
    cin >> h >> c;
  }

  return 0;
}

int cociendoHuevos(int h, int c) {
  if (h < c) {
    return 10;
  }
  else if (h % c == 0) {
    return (h/c) * 10;
  }
  else {
    return (h/c) * 10 + 10;
  }
}

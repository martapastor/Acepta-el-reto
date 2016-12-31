#include <iostream>
#include <math.h>
using namespace std;

int numCerillas(int n);

int main() {
  int n;

  cin >> n;

  while (n != 0) {
    cout << numCerillas(n) << endl;

    cin >> n;
  }

  return 0;
}

int numCerillas(int n) {
  int innerTriangles = 0;
  for (int i = 0; i < n; i++) {
    innerTriangles += i;
  }

  return n * 3 + innerTriangles * 3;
}

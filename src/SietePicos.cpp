#include <iostream>
#include <climits>
using namespace std;

int numPicos(int v[], int n);

const int MAX_ELEMS = 1000;

int main() {
  int n;
  int v[MAX_ELEMS];

  cin >> n;

  while (n != 0) {
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    cout << numPicos(v, n) << endl;

    cin >> n;
  }

  return 0;
}

int numPicos(int v[], int n) {
  int cont = 0;

  for (int i = 1; i < n-1; i++) {
    if (v[i-1] < v[i] && v[i] > v[i+1]) {
      cont++;
    }
  }

  if (v[n-2] < v[n-1] && v[n-1] > v[0]) {
    cont++;
  }

  if (v[n-1] < v[0] && v[0] > v[1]) {
    cont++;
  }

  return cont;
}

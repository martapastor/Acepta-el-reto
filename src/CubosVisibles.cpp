#include <iostream>
using namespace std;

long long int cubosVisibles (long long int n);

int main() {
  int testcases;
  long long int n;

  cin >> testcases;

  for (int i = 0; i < testcases; i++) {
    cin >> n;

    cout << cubosVisibles(n) << endl;
  }

  return 0;
}

long long int cubosVisibles (long long int n) {
  long long int l = n - 2;

  long long int invisibles = l * l * l;
  long long int visibles = n * n * n;

  return visibles - invisibles;
}

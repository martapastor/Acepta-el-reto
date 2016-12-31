#include <iostream>
#include <climits>
using namespace std;

void minMaxTemp();

int main () {
  int testcases;
  long long int n;

  cin >> testcases;

  for (int i = 0; i < testcases; i++) {
    minMaxTemp();
  }

  return 0;
}

void minMaxTemp() {
  long long int n;
  cin >> n;

  long long int min = n, max = n;
  int contMin = 0, contMax = 0;

  while (n != 0) {
    if (n < min) {
      min = n;
      contMin = 1;
    }
    else if (n == min) {
      contMin++;
    }

    if (n > max) {
      max = n;
      contMax = 1;
    }
    else if (n == max) {
      contMax++;
    }

    cin >> n;
  }

  cout << min << " " << contMin << " " << max << " " << contMax << endl;
}

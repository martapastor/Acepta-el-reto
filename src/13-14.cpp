#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

bool rightCalibre(long long int val1, long long int val2);

int main() {
  int testcases;

  cin >> testcases;

  string s;
  getchar();

  for (int i = 0; i < testcases; i++) {
    getline(cin, s);

    size_t pos = s.find("-");
    string val1 = s.substr(0, pos);
    string val2 = s.substr(pos+1);

    if(rightCalibre(stoi(val1), stoi(val2))) {
      cout << "SI" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}

bool rightCalibre(long long int val1, long long int val2) {
  if (val1 < val2 && val1%2 == 0 && val2 == val1+1) {
    return true;
  }
  else if (val1 > val2 && val1%2 != 0 && val2 == val1-1) {
    return true;
  }
  else {
    return false;
  }
}

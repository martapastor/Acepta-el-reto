#include <iostream>
#include <iomanip>
using namespace std;

void convertRunaway(int n);
void convertOrientatedRunaway(int n, string s);
bool resuelve(string &s);

int main() {
  string s;

  while (resuelve(s)) {
    if (s.length() == 2) {
      convertRunaway(stoi(s));
    }
    else {
      size_t pos = 2;
      string n = s.substr(0, pos);
      string o = s.substr(pos);

      convertOrientatedRunaway(stoi(n), o);
    }
  }

  return 0;
}

void convertRunaway(int n) {
  int ini = n * 10, fin;

  if (ini > 180) {
    fin = (ini - 180) / 10;
  }
  else {
    fin = (ini + 180) / 10;
  }

  cout << setfill('0') << setw(2) << fin << endl;
}

void convertOrientatedRunaway(int n, string s) {
  int ini = n * 10, fin;
  char c;

  if (ini > 180) {
    fin = (ini - 180) / 10;
  }
  else {
    fin = (ini + 180) / 10;
  }

  if (s == "L") {
    c = 'R';
  }
  else if (s == "R") {
    c = 'L';
  }
  else {
    c = 'C';
  }

  cout << setfill('0') << setw(2) << fin << c << endl;
}

bool resuelve(string &s) {
  getline(cin, s);

  if (!cin) {
    return false;
  }

  return true;
}

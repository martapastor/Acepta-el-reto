#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

void backwards(string &s);

int main() {
  int testcases;

  cin >> testcases;

  string s;

  for (int i = 0; i < testcases; i++) {
    cin >> s;
    backwards(s);
    cout << s << endl;
  }

  return 0;
}

void backwards(string &s) {
  char tmp;
  int i = 0, j = s.length() - 1;


  bool mayus = false;
  if (s[0] >= 'A' && s[0] <= 'Z') {
    mayus = true;
  }
  /*
  if (isupper(s[i])) {
    tmp = s[i];
    s[i] = toupper(s[j]);
    s[j] = tolower(tmp);

    i++;
    j--;
  }
  */

  while (i < j) {
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;

    i++;
    j--;
  }

  if (mayus == true) {
    s[0] = 'A' + s[0] - 'a';
    s[s.length() - 1] = 'a' + s[s.length() - 1] - 'A';
  }

  /*
  int x = s.length() - 1;
  string sol = "";

  if (isupper(s[0])) {
    sol += toupper(s[x]);
  }
  else {
    sol += s[x];
  }

  for (x = s.length() - 2; x > 0; x--){
     sol += s[x];
  }

  if (isupper(s[0])) {
    sol += tolower(s[0]);
  }
  else {
    sol += s[0];
  }

  cout << sol << endl;
  */
}

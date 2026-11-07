#include <iostream>
#include <string>

using namespace std;
string str;
int a[2];
int ope;

void conbackandpri(int a) {
  int num[] = {
    1,
    4,
    5,
    9,
    10,
    40,
    50,
    90,
    100,
    400,
    500,
    900,
    1000
  };
  string b[] = {
    "I",
    "IV",
    "V",
    "IX",
    "X",
    "XL",
    "L",
    "XC",
    "C",
    "CD",
    "D",
    "CM",
    "M"
  };
  int i = 12;
  while (a > 0) {
    int div = a / num[i];
    a %= num[i];
    while (div--) {
      cout << b[i];
    }
    i--;
  }
}

int calculator(int a, int b, char c) {
  int ans;
  if (c == '*')
    return a * b;
  if (c == '/')
    return a / b;
  if (c == '-')
    return a - b;
  if (c == '+')
    return a + b;
  else return 0;
}

int convert(char c) {
  if (c == 'I') return 1;
  if (c == 'V') return 5;
  if (c == 'X') return 10;
  if (c == 'L') return 50;
  if (c == 'C') return 100;
  if (c == 'D') return 500;
  if (c == 'M') return 1000;
  else return 0;
}

int main() {
  for (; getline(cin, str), !str.empty();) {

    for (int i = 0, j = 0; i < str.length(); i++) {
      int c = convert(str[i]);
      int d = convert(str[i + 1]);
      if (str[i] >= 67 && c >= d) {
        a[j] = c + a[j];
      }
      if (str[i] >= 67 && c < d) {
        a[j] = d - c + a[j];
        i++;
      }
      if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
        ope = str[i];
        i++;
        j++;
      }
    }
    ope = calculator(a[0], a[1], ope);

    if (ope > 3999 || ope < 1) cout << '-';
    else conbackandpri(ope);
    cout << endl;
    a[0] = 0;
    a[1] = 0;
  }
  return 0;

}
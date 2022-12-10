#include <iostream>
using namespace std;

int main() {
  int f, *q;

  cout << "Masukan nilai = ";
  cin >> f;

  q=&f;
  cout << *q << " ";
  (*q)++;
  cout << *q << " ";
  (*q)--;
  cout << *q << "\n";
  getchar();
}
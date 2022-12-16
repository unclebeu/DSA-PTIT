
#include <bits/stdc++.h>
using namespace std;
int n, b, C[100], X[100], maxx = 0;


int tinhF() {
  int f = 0;
  for (int i = 1; i <= n; i++)
    f = f + C[i] * X[i];
  return f;
}
void hienthi() {
  for (int i = 1; i <= n; i++)
    if (X[i] == 1) cout << C[i] << " ";
  cout << endl;
}
int demthuchien(int k) {
  for (int i = 0; i <= 1; i++) {
    X[k] = i;
    if (k == n) {
      if (tinhF() == b) maxx++;
    } else demthuchien(k + 1);

  }
}
void thuchien(int k) {
  for (int i = 0; i <= 1; i++) {
    X[k] = i;
    if (k == n) {
      if (tinhF() == b) hienthi();
    } else thuchien(k + 1);
  }
}

main() {

 cin >> n >> b;
  for (int i = 1; i <= n; i++)
    cin >> C[i];
  maxx= 0;
  demthuchien(1);
  
  thuchien(1);
  cout << maxx << endl;
}

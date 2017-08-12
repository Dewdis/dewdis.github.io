/*
Здесь реализации на C++ алгоритмов и упражнений,
описанных в книге Кормена и других
"Алгоритмы. Построение и анализ".
Вывод и ввод в 1-индексации.
Все функции работают с целочисленным типом int,
но могут быть обобщены с помощью шаблонов.
Список не полный, но пополняется время от времени.
*/
#ifdef EGORVASILENKO
  #include "//Users/vasilenkoegor/stdc++.h"
#else
  #include <bits/stdc++.h>
#endif
using namespace std;

const int NIL = -1;

/*
Вывод всех элементов вектора.
*/
void print_vector(const vector<int> & a) {
  for (int x : a)
    cout << x << " ";
  cout << endl;
}

/*
Сортировка вставками.
*/
vector<int> insertion_sort(const vector<int> & a) {
  int n = a.size();
  vector<int> res(a);
  for (int j = 1; j < n; ++j) {
    int key = res[j];
    int i = j - 1;
    while (i >= 0 && res[i] > key) {
      res[i + 1] = res[i];
      i--;
    }
    res[i + 1] = key;
  }
  return res;
}

/*
Линейный поиск.
*/
int linear_search(const vector<int> & a, int v) {
  for (int i = 0; i < a.size(); ++i)
    if (a[i] == v)
      return i + 1;
  return NIL;
}

/*
Сумма двух n-значных чисел в двоичной системе
счисления, представленных как вектора.
*/
vector<int> binary_sum(const vector<int> & a, const vector<int> & b) {
  int n = a.size();
  vector<int> res(n + 1);
  bool add = 0;
  for (int i = n - 1; i >= 0; --i) {
    res[i + 1] = (a[i] + b[i] + add) % 2;
    add = 0;
    if (a[i] + b[i] == 2) add = 1;
  }
  if (add) res[0] = 1;
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}

// #include ...

int a[105][105];

int main() {
  int n, m, x, sum = 0;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  cin >> x;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i == x) sum += a[i][j];
    }
  }
  cout << sum << endl;

  return 0;
}
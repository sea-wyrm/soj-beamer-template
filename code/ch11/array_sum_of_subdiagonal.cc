// #include ...

int a[105][105];

int main() {
  int n
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
  long long sum = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i + j == n + 1) sum += a[i][j];
    }
  }
  cout << sum << endl;

  return 0;
}

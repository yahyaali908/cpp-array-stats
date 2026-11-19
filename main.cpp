#include <iostream>
#include <vector>
int main() {
    int n;
    std::cout << "How many numbers: ";
    std::cin >> n;
    std::vector<double> v(n);
    double sum = 0;
    for (int i = 0; i < n; ++i) { std::cin >> v[i]; sum += v[i]; }
    double mn = v[0], mx = v[0];
    for (double x : v) { if (x < mn) mn = x; if (x > mx) mx = x; }
    std::cout << "Min: " << mn << " Max: " << mx << " Avg: " << (sum / n) << '\n';
    return 0;
}

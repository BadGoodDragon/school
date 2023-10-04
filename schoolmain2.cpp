#include <iostream>

int main() {
    long long n, n_old = 0, res = 0, c = 0;
    std::cin >> n;
    while (n != 0) {
        if (c == 0) {
            n_old = n;
            c = 1;
            std::cin >> n;
            continue;
        }
        if (n_old == n) {
            c += 1;
        } else {
            c = 1;
        }
        if (c > n) {
            res = c;
        }
        n_old = n;
        std::cin >> n;
    }
    std::cout << res << std::endl;
}
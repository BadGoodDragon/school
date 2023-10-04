#include <iostream>

int main() {
    long long n, res = 0;
    do {
        std::cin >> n;
        if (100 <= n && n <= 999) {
            if (res == 0) {
                res = 1;
            }
            res *= n;
        }
    } while (n % 10 != 0);
    std::cout << res << std::endl;
}
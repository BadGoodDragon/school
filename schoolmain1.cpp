#include <iostream>

int main() {
    long long n, res = -1;
    std::cin >> n;
    while (n != 0) {
        if (n % 2 == 0 && (n > res || res == -1)) {
            res  = n;
        }
        std::cin >> n;
    }
    if (res == -1) {
        std::cout << "NO" << std::endl;
        return 0;
    }
    std::cout << res << std::endl;
}

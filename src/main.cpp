#include <iostream>

int main() {
    int n;
    std::cout << "Count of important things: ";
    std::cin >> n;

    for (int i = n; i >= 0; i--) {
        std::cout << "Important things remain: " << i << "!" << std::endl;
    }

    std::cout << "All important things are done!" << std::endl;
    return 0;
}
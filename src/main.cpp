#include <iostream>
#include <windows.h>

int main() {
    int n;
    std::cout << "Count of important things: ";
    std::cin >> n;
    std::cin.ignore();

    for (int i = n; i > 0; i--) {
        std::cout << "Important things remain: " << i << std::endl;
        std::cin.get();
        Beep(50, 3000);
    }

    std::cout << "All important things are done!" << std::endl;
    return 0;
}

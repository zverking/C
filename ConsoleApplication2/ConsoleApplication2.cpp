#include <iostream>
#include <string>

int main() {
    std::string input;
    int num;

    std::cout << "Введіть число: ";
    std::cin >> input;

    try {
        num = std::stoi(input); // Перетворюємо введений рядок на ціле число
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Некоректне число. Повторіть спробу." << std::endl;
        return 1;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Число занадто велике або занадто мале. Повторіть спробу." << std::endl;
        return 1;
    }

    if (num % 2 == 0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

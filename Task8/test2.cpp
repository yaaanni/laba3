#include <iostream>
#include <string>

// Функция для проверки, является ли строка числом
bool is_numeric(const std::string& str) {
    for (size_t i = 0; i < str.size(); ++i) {
        if ((str[i] < '0' || str[i] > '9') && !(i == 0 && str[i] == '-')) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    int number;
    
    while (true) {
        std::cout << "Введите целое число: ";
        std::getline(std::cin, input);

        if (is_numeric(input)) {
            try {
                number = std::stoi(input);
                break;
            } catch (const std::out_of_range&) {
                std::cout << "Число вне диапазона. Пожалуйста, введите число в допустимых пределах." << std::endl;
            }
        } else {
            std::cout << "Некорректный ввод. Пожалуйста, введите целое число." << std::endl;
        }
    }

    std::cout << "Вы ввели целое число: " << number << std::endl;
    return 0;
}

#include <iostream>
#include <cmath>

int program() {
    double x = 1,pogr,y, e = 2.7182818284;
    int n;
    std::cout << "На сколько частей разделить область поиска корня?\n";
    std::cin >> n;
    while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> n;
}
    int i=0;
    double arr[n];
    pogr = (3-x)/n;
    do {
    y = fabs(acos(pow(e,-x))-2*sin(x)); 
    x += pogr;
    arr[i]=y;
    i++;
    }
    while (x<3);
   

    double min = arr[0];
    for (int i = 0;i<n;i++){
         if(arr[i] < min)
    {
        min = arr[i];
    }

    }
    return min;
}

int menu() {
    std::cout << "Выберите интересующий пункт меню: \n";
    std::cout << "1. Кто выполнил задание\n";
    std::cout << "2. Результат программы\n";
    std::cout << "3. Суть задания\n";
    std::cout << "4. Выход из программы\n";
    std::cout << "5. Вариант\n";
    std::cout << ">>>\n";

    int n;
    while (!(std::cin>> n) || (std::cin.peek() != '\n')) {
        std::cin.clear();
        while (std::cin.get() != '\n') {
        }
        return 0;
    }
    return n;
}

int main() {
    while (true) {
        int number = menu();

        if (number == 1) {
            std::cout << "Попова Яна\n";     
            }
            else if (number == 2) {
            double result = program();
            std::cout << "Результат программы: " << result << "\n"; 
            }
            else if (number == 3) {
                std::cout << "Найти сумму ряда\n";
            }
            else if (number == 4) {
                std::cout << "Выход выполнен успешно!\n";
                return 0;
            }
            else if (number == 5) {
                std::cout << "6\n";
            }
            else  
            {
                std::cout << "Неверно ввели значение, попробуйте еще раз: \n";
                continue;
            }
            std::cout << ">>>\n";
    }
}

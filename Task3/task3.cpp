#include <iostream>
#include <cmath>

int menu()
{
    int variant;
    std::cout << "Выберите вариант\n" << std::endl;
    std::cout << "1. Кто выполнил задание\n"
         << "2. Суть задания\n"
         << "3. Результат программы\n"
         << "4. Перезапуск\n"
         << "5. Выход\n" << std::endl;
    std::cout << ">>> ";
    std::cin >> variant;
    while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> variant;
}
    return variant;
}

int main(int argc, char* argv[]) {
double a,b,y,x,A,B,H,M;
double pi = 3.14159265;
B = 90;
M = 20;
A = 0;
H = (90-A)/20;
for (int i = 0; A<=90; i++) {
    x = A + i*(B/M-A/M);
    a = sin(x*pi/180);
    b = cos(x*pi/180);
    y = a - b;
    std::cout << "Результат функции: " << y << std::endl;
    A++;
}

bool trr = true;

    int variant = menu(); 
    
    while (trr) {
    switch (variant) {
        case 1:
            std::cout << "Попова Яна" << std::endl;
            variant = menu();
            break;
        case 2:
            std::cout << "Вычислить значение y = sin(x) - cos(x) на отрезке от А включая до Б включая в точках Хi = a + i*h, где H = (B - A) / M, M = 20, A = 0, B = π / 2." << std::endl;
            variant = menu();
            break;
            
        case 3:
            std::cout << "Значение суммы: " << y << std::endl << " " << std::endl;;
            variant = menu();
            break;
            
        case 4:
            std::cout << "Перезапуск" << std::endl << " " << std::endl;
            variant = menu();
            break;

        case 5:
            trr = false;
            std::cout << "Выход совершен успешно" << std::endl << " " << std::endl; 
            break;   
            
        default:
            std::cerr << "Вы выбрали неверный вариант" << std::endl << " " << std::endl;;
            variant = menu();
    }}
    
    return 0;

}
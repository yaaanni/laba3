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

int main(int argc, char* argv[])
{
    int ai,bi,s,abi;
    s = 0;
    int i = 1;
    while (i<31) {
    if (i%2==0) {
    ai = i/2;
    } else {
        ai = i;
    }
    if (i%2 == 0) {
    bi = pow(i,3);
    } else {
        bi = pow(i,2);
    }
    abi = pow((ai-bi),2);
    s = s + abi;
    i++;
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
            std::cout << "Вычислить алгебраическую сумму N членов (ai - bi)^2 при I равном от 1 до 30, при а и b зависящих от i" << std::endl;
            variant = menu();
            break;
            
        case 3:
            std::cout << "Значение суммы: " << s << std::endl << " " << std::endl;;
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
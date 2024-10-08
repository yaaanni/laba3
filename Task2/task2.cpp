#include <iostream>
#include <cmath>

int rad(){
    int n=1;
    double e=0.001, dn, s=0, dn1;
    
    do {
       dn=1/pow(2, n)+1/pow(3, n);
       dn1=1/pow(2, n-1)+1/pow(3, n-1);
       s+=dn;
       n++;
    } while (fabs(dn-dn1)>e);

    std::cout<< "s="<< s<< std::endl;
    
    return s;
}  
int menu()
{
    char variant;
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

int main(int argc, char* argv[]){

bool trr = true;
char variant = menu();

while (trr) {
    switch (variant) {
        case '1':
            std::cout << "Попова Яна" << std::endl;
            variant = menu();
            break;
        case '2':
            std::cout << "Найти сумму ряда с точностью 0.001, общий член которого dn = 1/2^n + 1/3^n" << std::endl;
            variant = menu();
            break;
            
        case '3':
            rad();
            variant = menu();
            break;
            
        case '4':
            std::cout << "Перезапуск" << std::endl << " " << std::endl;
            variant = menu();
            break;

        case '5':
            trr = false;
            std::cout << "Выход совершен успешно" << std::endl << " " << std::endl; 
            break;   
            
        default:
            std::cerr << "Вы выбрали неверный вариант" << std::endl << " " << std::endl;;
            variant = menu();
    }}


return 0;
}
#include <iostream>
#include <cmath>

int task(int max){
    int sum = 0, count = 0,temp;
    std::cout << "Введите число: " << std::endl;
std::cin>>max;
for (int i = 0; i < max; i++)
{
    temp = i;
    while(temp != 0) {
        temp = temp / 10; ++count;
    }
    temp = i;
    while(temp)
    {
        sum+= pow(temp % 10, count);
        temp = temp / 10;
    }
    if(sum == i) std::cout << i << std::endl;  
sum = 0; count = 0;
}
int i;
return i;
}
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

int main(int argc, char* argv[]){

bool trr = true;
int variant = menu();

while (trr) {
    switch (variant) {
        case 1:
            std::cout << "Попова Яна" << std::endl;
            variant = menu();
            break;
        case 2:
            std::cout << "Все числа Армстронга, меньше введённого числа" << std::endl;
            variant = menu();
            break;
            
        case 3:
            int max;
            while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> max;
}
            task(max);
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

#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    std::string name;
    std::cout << "������� ���: ";
    std::cin >> name;
    std::cout << "������������, " << name << "!" << std::endl;

}
#include "foo.h"

#include <iostream>

void print_my_name(const std::string& name);
//void foo(int a);

int main() {
	setlocale(LC_ALL, "ru"); 

	//Синтаксическая ошибка - 'std::сout' написано с русской буквой 'c'.
	//std::сout << "Hello, world!!!";
	std::cout << "Hello, world!!!" << std::endl;

	print_my_name("Mihail");

	//Ошибка линковки. Функция foo определена и в 'main.cpp' и в 'foo.cpp'.
	foo(5);

	system("pause > nul");

	return 0;
}

void print_my_name(const std::string& name) {
	std::cout << "My name is " << name << std::endl;
}

//void foo(int a) {
//	std::cout << a + 10 << std::endl;
//}

//Семантическая ошибка: функция 'print_my_name' реализована дважды. К тому же, во втором варианте должна выводиться фамилия.
//void print_my_name(const std::string& name) {
//	std::cout << "My surname is " << name << std::endl;
//}
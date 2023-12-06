#include <iostream>

#include "gomove.hpp"
#include "text.hpp"

int main() {
	std::system("chcp 1251 > log");

	std::cout << "Инициализация конструктором по умолчанию GoMove move_bydefault; :" << std::endl;
	IBusko::GoMove move_bydefault;
	std::cout << move_bydefault << std::endl << std::endl;
	
	std::cout << "Инициализация параметрами GoMove move_byparam = { 4, 4 } :" << std::endl;
	IBusko::GoMove move_byparam = { 4, 4 };
	std::cout << move_byparam << std::endl << std::endl;

	std::cout << "Инициализация объектом GoMove move_bymove(move_byparam) :" << std::endl;
	IBusko::GoMove move_bymove(move_byparam);
	std::cout << move_bymove << std::endl << std::endl;

	std::cout << "Присвоение объекту объекта move_bydefault = { 16, 16 } :" << std::endl;
	move_bydefault = { 16, 16 };
	std::cout << move_bydefault << std::endl << std::endl;

	{
		std::cout << "Инициализация конструктором по умолчанию Text text_bydefault; :" << std::endl;
		IBusko::Text text_bydefault;
		std::cout << text_bydefault << std::endl << std::endl;

		std::cout << "Инициализация параметрами Text text_byparam = { \"Привет!\" } :" << std::endl;
		IBusko::Text text_byparam = { "Привет!" };
		std::cout << text_byparam << std::endl << std::endl;

		std::cout << "Инициализация объектом Text text_bymove(text_byparam) :" << std::endl;
		IBusko::Text text_bymove(text_byparam);
		std::cout << text_bymove << std::endl << std::endl;

		{
			//std::cout << "Перегрузка оператора присваивания Text содержит ошибку!" << std::endl;
			//std::cout << "Присвоение объекту объекта text_copy_ref = text_byparam :" << std::endl;
			//IBusko::Text text_copy_ref;
			//text_copy_ref = text_byparam;
			//std::cout << text_copy_ref << std::endl << std::endl;
		}
	}

	return 0;
}

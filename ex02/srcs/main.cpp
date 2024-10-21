#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 750

void print_all_tab(int *tab)
{
	for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << "index : [" << i << "] value : " << tab[i] << std::endl;
    }

}

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
//my part of the main
	// for (int i = 0; i < MAX_VAL; i++)
    // {
	// 	std::cout << "value : " << numbers[i] << std::endl;
    // }

	std::cout << "try with [89] -> " << numbers[89] << std::endl;
	std::cout << "try with [89]  but a regular array-> " << mirror[89] << std::endl;
	std::cout << "try without [] -> " << numbers << std::endl;
	std::cout << "try without []  but a regular array-> " << *mirror << std::endl;

    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	//std::cout << "| First tab ->\n" << numbers << "| second tab ->" << std::endl; print_all_tab(mirror);
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:39:28 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/18 10:39:28 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



void print_it(int to_print) {
    std::cout << "int: " << to_print << std::endl;
}

void print_it2(std::string to_print) {
    std::cout << "string: " << to_print << std::endl;
}

void print_double(double to_print) {
    std::cout << "double: " << to_print << std::endl;
}

void print_char(char to_print) {
    std::cout << "char: " << to_print << std::endl;
}

void print_float(float to_print) {
    std::cout << "float: " << to_print << std::endl;
}

void print_bool(bool to_print) {
    std::cout << "bool: " << (to_print ? "true" : "false") << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::string arrChar[] = {"Salut", "beau", "gosse"};
    double arrDouble[] = {1.1, 2.2, 3.3};
    char arrLetters[] = {'A', 'B', 'C'};
    float arrFloat[] = {1.23f, 4.56f, 7.89f};
    bool arrBool[] = {true, false, true};

    // 1. Utilisation de la fonction iter avec un tableau d'entiers
    std::cout << "Test 1: int array" << std::endl;
    iter(arr, 5, print_it);

    // 2. Utilisation de la fonction iter avec un tableau de chaînes
    std::cout << "\nTest 2: string array" << std::endl;
    iter(arrChar, 3, print_it2);

    // 3. Utilisation de la fonction iter avec un tableau de doubles
    std::cout << "\nTest 3: double array" << std::endl;
    iter(arrDouble, 3, print_double);

    // 4. Utilisation de la fonction iter avec un tableau de caractères
    std::cout << "\nTest 4: char array" << std::endl;
    iter(arrLetters, 3, print_char);

    // 5. Utilisation de la fonction iter avec un tableau de flottants
    std::cout << "\nTest 5: float array" << std::endl;
    iter(arrFloat, 3, print_float);

    // 6. Utilisation de la fonction iter avec un tableau de booléens
    std::cout << "\nTest 6: bool array" << std::endl;
    iter(arrBool, 3, print_bool);

    // 7. Utilisation avec des floats négatifs
    float arrNegativeFloats[] = {-1.5f, -2.5f, -3.5f};
    std::cout << "\nTest 7: negative float array" << std::endl;
    iter(arrNegativeFloats, 3, print_float);

    // 8. Utilisation avec des bools inversés
    bool arrInvertedBools[] = {false, true, false};
    std::cout << "\nTest 8: inverted bool array" << std::endl;
    iter(arrInvertedBools, 3, print_bool);

    // 9. Utilisation avec un tableau de doubles plus grands
    double arrLargeDoubles[] = {12345.6789, 98765.4321, 54321.1234};
    std::cout << "\nTest 9: large double array" << std::endl;
    iter(arrLargeDoubles, 3, print_double);

    // 10. Utilisation avec un tableau de caractères (minuscules)
    char arrSmallLetters[] = {'x', 'y', 'z'};
    std::cout << "\nTest 10: lowercase char array" << std::endl;
    iter(arrSmallLetters, 3, print_char);

	std::cout << "Last test: int array print with template function" << std::endl;
    iter(arr, 5, printElement<int>);

    return 0;
}

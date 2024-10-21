/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:14:45 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/18 13:14:45 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
const char* Array<T>::outOfBounds::what() const throw()
{
	return "Out of the array's bounds !";
}

template <typename T>
Array<T>::Array() : element(NULL), size(0) {}

template <typename T>
Array<T>::Array(unsigned int len) : size(len)
{
	element = new T[size];
}

template <typename T>
Array<T>::Array(T *arr, unsigned int len) : size(len)
{
	element = new T[size];
	for (unsigned int i = 0; i < size; i++)
	{
		element[i] = arr[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	if (size > 0)
		delete[] element;
}

template <typename T>
Array<T>::Array(const Array<T> &copy) : size(copy.size)
{
	element = new T[size];
	for (unsigned int i = 0; i < size; i++)
	{
		element[i] = copy.element[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other) 
	{
		delete[] element;
		size = other.size;
		element = new T[size];
		for (unsigned int i = 0; i < size; i++) {
			element[i] = other.element[i];
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= static_cast<unsigned int>(size))
	{
		throw outOfBounds();
	}
	return element[index];
}


template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T> &arr)
{
	if (1 <= arr.getSize())
		std::cout << arr[0];
	return os;
}

template <typename T>
int Array<T>::getSize(void) const
{
	return this->size;
}

template class Array<int>;
std::ostream& operator<<(std::ostream& os, Array<int> &arr)
{
	if (1 <= arr.getSize())
		std::cout << arr[0];
	return os;
	// for (int i = 0; i < arr.getSize(); i++)
	// 	os << "index : [" << i << "] Value : " << arr[i] << "\n"; // Utilisez 'arr[i]' pour accéder à l'élément
	// return os;
}

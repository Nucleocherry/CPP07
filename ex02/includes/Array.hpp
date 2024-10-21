/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:14:52 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/18 13:14:52 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T *element;
		unsigned int size;

	public:
		Array();
		~Array();

		Array(unsigned int len);
		Array(T *arr, unsigned int len);

		Array(const Array &copy);
		Array &operator=(const Array &other);

		T &operator[](unsigned int index);

		class outOfBounds : public std::exception
		{
			public:
				const char* what() const throw();
		};

		int getSize(void) const;
};

#include "Array.tpp"

template <typename T>

std::ostream& operator<<(std::ostream& os, const Array<T> &arr);
std::ostream& operator<<(std::ostream& os, const Array<int> &arr);
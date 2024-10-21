/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:17:52 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/18 10:17:52 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

template <typename T>
void swap(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename U>
U max(U a, U b) 
{
	if (a >= b)
   		return a;
	return (b);
}

template <typename V>
V min(V a, V b)
{
	if (a <= b)
   		return a;
	return (b);
}

class whatever
{
	private:
	public:

		whatever();
		~whatever();

		whatever &operator=(const whatever &other);
		whatever(const whatever& copy);
};

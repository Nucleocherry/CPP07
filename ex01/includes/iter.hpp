/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:38:46 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/18 10:38:46 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

template <typename T>

void printElement(T const &elem) {
    std::cout << elem << std::endl;
}

template <typename T, typename Ft>

void iter(T *adress, int len,  Ft function)
{
	for (int i = 0; i < len; i++)
		function(adress[i]);
}



/*
The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be called on every element of the array
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:18:44 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/18 10:18:44 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

whatever::whatever()
{
	//std::cout << "Constructor called" << std::endl;
	return ;
}

whatever::~whatever()
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

whatever::whatever(const whatever& copy)
{
	/* Copy every values*/
	(void)copy;
	//std::cout << "Copy constructor called" << std::endl;
}

whatever &whatever::operator=(const whatever &other)
{
	if (this != &other)
	{
		(void)other;
	}
	return *this;
}

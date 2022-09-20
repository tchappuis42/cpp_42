/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:18:15 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/26 16:51:56 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor Animal called\n";
	this->type_ = "Animal";
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignment operator Animal called\n";
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	return *this;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy constructor Animal called\n";
	*this = src;
	return ;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
	return ;
}

void	Animal::makeSound() const
{
	std::cout << "Coin COIN Coin" << std::endl;
	return ;
}

std::string	Animal::getType() const
{
	return (this->type_);
}

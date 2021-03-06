/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:21:18 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 21:02:06 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Dog::Dog(void) : Animal("dog")
{
	std::cout << "Dog: a strange dog strated following me wtf.." << std::endl;
	return ;
}

Dog::Dog(Dog const & cpy) : Animal(cpy.getType())
{
	std::cout << "Dog: mmmh this new dog is very similar to that other one.." << std::endl;
	return ;
}

/////////////////
// Destructors //
/////////////////

Dog::~Dog(void)
{
	std::cout << "Dog: \"the man lost his best friend..\"" << std::endl;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Dog	& Dog::operator= (Dog const & rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	Dog::makeSound(void) const
{
	std::cout << "Dog: GRRRRRRRGRGRGRRRRR" << std::endl;
	return ;
}

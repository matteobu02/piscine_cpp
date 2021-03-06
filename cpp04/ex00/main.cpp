/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:39:47 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/17 16:03:53 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <new>

int	main(void)
{
	const Animal	* meta = new Animal();
	const Animal	* j = new Dog();
	const Animal	* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	std::cout << "My tests:" << std::endl << std::endl;

	const WrongAnimal	* atem = new WrongAnimal();
	const WrongAnimal	* ii = new WrongCat();

	std::cout << ii->getType() << " " << std::endl;
	ii->makeSound();
	atem->makeSound();

	return (0);
}

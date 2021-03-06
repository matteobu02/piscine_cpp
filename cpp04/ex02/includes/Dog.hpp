/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:32:02 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 18:50:17 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		// Constructors
		Dog(void);
		Dog(Dog const & cpy);

		// Destructors
		~Dog(void);

		// Getters - Setters
		Brain	* getBrain(void) const;

		// Overloaded Operators
		Dog	& operator= (Dog const & rhs);

		// Member Functions
		virtual void	makeSound(void) const;

	private:
		Brain	*_brain;
};

#endif

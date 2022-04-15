/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:32:02 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 14:36:05 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
	public:
		// Constructors
		Cat(void);
		Cat(Cat const & cpy);

		// Destructors
		~Cat(void);

		// Overloaded Operators
		Cat	& operator= (Cat const & rhs);
};

#endif

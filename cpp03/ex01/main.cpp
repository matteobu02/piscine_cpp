/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:22:37 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 12:47:05 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	ClapTrap	clap("Augustin");
	ScavTrap	scrav("Corentin");

	clap.attack("Corentin");
	scrav.takeDamage(clap.getAD());

	scrav.guardGate();
	scrav.attack("Augustin");
	clap.takeDamage(scrav.getAD());

	clap.attack("Corentin");
	scrav.takeDamage(clap.getAD());
	scrav.beRepaired(5);

	return (0);
}

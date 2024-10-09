/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-08 08:52:09 by ldi-fior          #+#    #+#             */
/*   Updated: 2024-10-08 08:52:09 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# ifndef COLORS
#  define GREEN "\033[1;32m"
#  define RED "\033[1;31m"
#  define CYAN "\033[1;36m"
#  define PURPLE "\033[1;35m"
#  define RESET "\033[0m"
# endif

#include "ClapTrap.hpp"
/*
 * NOTE: Virtual Inheritance:
 * --------------------------
 * Using virtual inheritance (virtual public) prevents the "diamond problem."
 * This issue occurs when a class derives from two base classes that in turn 
 * derive from the same base class (in this case, ClapTrap).
 * With virtual inheritance, DiamondTrap will have a single instance of ClapTrap, 
 * avoiding ambiguity in accessing ClapTrap's attributes and methods.
 *
 * Access to Attributes:
 * Without virtual inheritance, there would be two instances of ClapTrap 
 * (one for ScavTrap and one for FragTrap), which could lead to confusion and 
 * conflicts when accessing members of the base class.
 * 
 * Why do we need to use 'virtual' for FragTrap and ScavTrap but not for ClapTrap?
 * -----------------------------------------------------------------------------
 * Virtual inheritance must be applied to derived classes (like FragTrap and ScavTrap) 
 * and not to the base class (ClapTrap).
 * This is because virtual inheritance is a directive that tells the compiler to 
 * create a single instance of the base class when inherited through multiple paths.
 * 
 * Explanation:
 * Base Class (ClapTrap): Does not need to be declared as virtual because it does 
 * not inherit from any other class. It is the class that is virtually inherited 
 * by its derived classes.
 * Derived Classes (FragTrap and ScavTrap): Must virtually inherit from ClapTrap 
 * to ensure that there is only a single instance of ClapTrap when a class like 
 * DiamondTrap inherits from both.
 * */
class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		FragTrap& operator=(const FragTrap& src);
		~FragTrap();

		void highFivesGuys(void);
};

#endif
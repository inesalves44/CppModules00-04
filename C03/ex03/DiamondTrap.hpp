#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FlagTrap.hpp"
# include "ScavTrap.hpp"

/**
 * @brief https://www.geeksforgeeks.org/virtual-base-class-in-c/
 * Virtual base classes are used in virtual 
 * inheritance in a way of preventing multiple “instances” 
 * of a given class appearing in an inheritance hierarchy 
 * when using multiple inheritances. 
 * 
 */

class DiamondTrap : public ScavTrap, public FlagTrap
{

	public:

		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap	&operator=( DiamondTrap const & rhs );

		/**
		 * The using keyword is used to:
    	Bring a specific member from the namespace into the current scope.
    	Bring all members from the namespace into​ the current scope.
    	Bring a base class method ​or variable into the current class’s scope.
		 */
		using		ScavTrap::attack;
		void		whoAmI();

	private:

		std::string	name;

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ***************************************************** DIAMONDTRAP_H */
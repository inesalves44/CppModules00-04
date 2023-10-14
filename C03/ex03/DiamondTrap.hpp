#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FlagTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap
{

	public:

		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap	&operator=( DiamondTrap const & rhs );

		using		ScavTrap::attack;
		void		whoAmI();

	private:

		std::string	name;

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ***************************************************** DIAMONDTRAP_H */
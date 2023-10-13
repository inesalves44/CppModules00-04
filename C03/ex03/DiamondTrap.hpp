#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FlagTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		void whoAmI();

	private:
		std::string name;

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ***************************************************** DIAMONDTRAP_H */
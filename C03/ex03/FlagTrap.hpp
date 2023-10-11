#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FlagTrap : public ClapTrap
{

	public:

		FlagTrap();
		FlagTrap(std::string name);
		FlagTrap( FlagTrap const & src );
		~FlagTrap();

		FlagTrap &		operator=( FlagTrap const & rhs );
		void highFivesGuys(void);

	private:

};

std::ostream &			operator<<( std::ostream & o, FlagTrap const & i );

#endif /* ******************************************************** FLAGTRAP_H */
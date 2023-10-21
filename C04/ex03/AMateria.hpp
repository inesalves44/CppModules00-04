#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria
{

	public:

		AMateria();
		AMateria( AMateria const & src );
		AMateria(std::string const & type);
		~AMateria();

		AMateria &		operator=( AMateria const & rhs );

		std::string const & GetType() const;
		virtual AMateria* clone() const = 0;
		//virtual void use(ICharacter& target);

	protected:
		
		std::string type;

};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */
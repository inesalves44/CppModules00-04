#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

/**
 * @brief Wrong because they are not virtual classes
 * 
 */
class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );

		void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;

};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ***************************************************** WRONGANIMAL_H */
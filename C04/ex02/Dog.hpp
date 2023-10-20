#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog &		operator=( Dog const & rhs );

		virtual void makeSound() const;
		virtual void giveIdeas(std::string string) const;
		virtual void presentIdeas() const;

	private:
		Brain *brain;

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */
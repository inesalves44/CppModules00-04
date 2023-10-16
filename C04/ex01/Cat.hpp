#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"

# include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		Cat &		operator=( Cat const & rhs );

		virtual void makeSound() const;
		void giveIdeas(std::string string);
		void presentIdeas();

	private:
		Brain *brain;
};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */
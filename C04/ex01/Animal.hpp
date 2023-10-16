#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		//https://www.geeksforgeeks.org/virtual-destructor/
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );

		std::string getType() const;
		//https://www.geeksforgeeks.org/virtual-function-cpp/
		virtual void makeSound() const;

		
	protected:
		std::string type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */
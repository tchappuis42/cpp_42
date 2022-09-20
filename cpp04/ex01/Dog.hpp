/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:57:17 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/30 18:12:04 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	 *Brain_;
	public:
		Dog();
		Dog & operator=(Dog const & rhs);
		Dog(Dog const & src);
		virtual ~Dog();

		virtual void		makeSound() const;
};

#endif

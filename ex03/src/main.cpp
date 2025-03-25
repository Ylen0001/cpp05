/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:06:13 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 14:48:57 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/colors.hpp"
#include <iostream>	

int main(void)
{
	// IMateriaSource *src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter* me = new Character("me");
	
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// ICharacter* bob = new Character("bob");

	// ICharacter* Oman = me;

	
	// me->use(0, *bob);
	// me->use(1, *bob);
	
	// // delete bob;
	// delete me;
	// delete src;
	
	// Oman->use(0, *bob);
	// Oman->use(1, *bob);
	
	std::cout << C_PALE_YELLOW "----------CREATION AND CLONING MATERIAS------------" C_RESET << std::endl << std::endl;
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();
	AMateria* iceD = new Ice();
	AMateria* cureD = new Cure();

	std::cout << "Original Ice type: " << ice->getType() << ", Address: " << ice << std::endl;
	std::cout << "Original Cure type: " << cure->getType() << ", Address: " << cure << std::endl;
	std::cout << "Original IceD type: " << iceD->getType() << ", Address: " << iceD << std::endl;
	std::cout << "Original CureD type: " << cureD->getType() << ", Address: " << cureD << std::endl;
	
	AMateria* iceClone = ice->clone();
	AMateria* cureClone = cure->clone();
	AMateria* iceCloneD = iceD->clone();
	AMateria* cureCloneD = cureD->clone();

	std::cout << "Cloned Ice type: " << iceClone->getType() << ", Address: " << iceClone << std::endl;
	std::cout << "Cloned Cure type: " << cureClone->getType() << ", Address: " << cureClone << std::endl;
	std::cout << "Cloned IceD type: " << iceCloneD->getType() << ", Address: " << iceCloneD << std::endl;
	std::cout << "Cloned CureD type: " << cureCloneD->getType() << ", Address: " << cureCloneD << std::endl;

	std::cout << std::endl << C_PALE_YELLOW "----------CHARACTERS CREATION------------" C_RESET << std::endl << std::endl;
	Character character("Hero");
	std::cout << character.getName() << std::endl;
	Character character1("Dragon");
	std::cout << character1.getName() << std::endl;

	std::cout << std::endl << C_PALE_YELLOW "----------EQUIP FUNCTION------------" C_RESET << std::endl << std::endl;
	character.equip(ice);
	character.equip(cure);
	character1.equip(iceD);
	character1.equip(cureD);

	std::cout << "After equipping Ice and Cure:" << std::endl;
	std::cout << character.getName() << " inventory is composed of : " << std::endl; 
	character.displayInventory();
	std::cout << std::endl;
	std::cout << character1.getName() << " inventory is composed of : " << std::endl; 
	character1.displayInventory();
	std::cout << std::endl;
	
	std::cout << std::endl << C_PALE_YELLOW "----------USE FUNCTION------------" C_RESET << std::endl << std::endl;
	ice->use(character1);
	cureCloneD->use(character);
	character.use(0, character1);
	character1.use(1, character);

	std::cout << std::endl << C_PALE_YELLOW "----------UNEQUIP FUNCTION------------" C_RESET << std::endl << std::endl;
	character.unequip(1);
	character1.unequip(1);
	std::cout << "After unequip:" << std::endl;
	std::cout << "Hero's inventory = ";
	character.displayInventory();
	std::cout << "Dragon's inventory = ";
	// character.displayGround();
	character1.displayInventory();
	// character1.displayGround();
	
	std::cout << std::endl << C_PALE_YELLOW "----------EQUIP CLONED MATERIA FUNCTION------------" C_RESET << std::endl << std::endl;
	character.equip(iceClone);
	character.equip(cureClone);
	character1.equip(iceCloneD);
	character1.equip(cureCloneD);
	std::cout << "After equipping cloned Ice and Cure:" << std::endl;
	std::cout << "Hero's inventory = ";
	character.displayInventory();
	std::cout << "Dragon's inventory = ";
	character1.displayInventory();

	std::cout << std::endl << C_PALE_YELLOW "----------IMATERIA CREATION - NEW MATERIAS------------" C_RESET << std::endl << std::endl;
	IMateriaSource* source = new MateriaSource();
	AMateria* iceTest = new Ice();
	AMateria* cureTest = new Cure();
	AMateria* iceTest1 = new Ice();
	AMateria* cureTest1 = new Cure();
	AMateria* cureTest2 = new Cure();
	
	std::cout << std::endl << C_PALE_YELLOW "----------LEARN FUNCTION------------" C_RESET << std::endl << std::endl;
	source->learnMateria(iceTest);
	source->learnMateria(cureTest);
	source->learnMateria(iceTest1);
	source->learnMateria(cureTest1);
	source->learnMateria(cureTest2);
	
	std::cout << std::endl << C_PALE_YELLOW "----------CREATE FUNCTION------------" C_RESET << std::endl << std::endl;
	AMateria* newIce = source->createMateria("ice");
	if (newIce) {
		std::cout << "Created Materia: " << newIce->getType() << std::endl;
		delete newIce;
	}

	AMateria* newCure = source->createMateria("cure");
	if (newCure) {
		std::cout << "Created Materia: " << newCure->getType() << std::endl;
		delete newCure;
	}

	AMateria* random = source->createMateria("fire");
	if (random) {
		std::cout << "Created Materia: " << random->getType() << std::endl;
		delete random;
	}
	
	delete cure;
	delete cureD;
	delete iceTest;
	delete cureTest;
	delete iceTest1;
	delete cureTest1;
	delete cureTest2;
	delete source;
		
	return 0;
}
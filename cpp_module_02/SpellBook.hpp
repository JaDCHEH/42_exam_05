#ifndef SpellBook_HPP
#define SpellBook_HPP
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
private:
	std::map<std::string, ASpell*> spells;
	SpellBook(SpellBook const &other);
	SpellBook &operator=(SpellBook const &other);
public:
	SpellBook();
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &name);
	ASpell *CreateSpell(std::string const &name);
	~SpellBook();
};

#endif
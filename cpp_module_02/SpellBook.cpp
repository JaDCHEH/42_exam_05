#include "SpellBook.hpp"


SpellBook::SpellBook(){}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &name)
{
	if (spells.find(name) != spells.end())
		delete spells[name];
	spells.erase(name);
}

ASpell *SpellBook::CreateSpell(std::string const &name)
{
	if (spells.find(name) != spells.end())
		return spells[name];
	return NULL;
}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
		delete it->second;
}

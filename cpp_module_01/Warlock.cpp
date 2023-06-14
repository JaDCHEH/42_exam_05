#include "Warlock.hpp"


Warlock::Warlock(std::string const &na, std::string const &ti)
{
	name = na;
	title = ti;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

const std::string &Warlock::getName() const {return name;}

const std::string &Warlock::getTitle() const {return title;}

void Warlock::setTitle(std::string const &ti) {title = ti;}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		spells[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string const &name)
{
	if (spells.find(name) != spells.end())
		delete spells[name];
	spells.erase(name);
}

void Warlock::launchSpell(std::string const &name, ATarget const &tar)
{
	if (spells.find(name) != spells.end())
		spells[name]->launch(tar);
}

Warlock::~Warlock()
{
	for (std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
		delete it->second;
	std::cout << name << ": My job here is done!" << std::endl;
}
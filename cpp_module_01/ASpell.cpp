#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(){}

ASpell::ASpell(ASpell const &other){ *this = other;}

ASpell &ASpell::operator=(ASpell const &other)
{
	name = other.name;
	effects = other.effects;
	return *this;
}

const std::string &ASpell::getName() const{return name;}
const std::string &ASpell::getEffects() const{return effects;}

ASpell::ASpell(std::string const &na, std::string const &ef)
{
	name = na;
	effects = ef;
}

void ASpell::launch(ATarget const &tar) const
{
	tar.getHitBySpell(*this);
}

ASpell::~ASpell(){}
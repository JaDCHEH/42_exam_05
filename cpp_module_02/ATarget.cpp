#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(ATarget const &other) {*this = other;}

ATarget &ATarget::operator=(ATarget const &other)
{
	type = other.type;
	return *this;
}
const std::string &ATarget::getType() const{return type;}

ATarget::ATarget(std::string const &ty)
{
	type = ty;
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget::~ATarget(){}
#ifndef ATarget_HPP
#define ATarget_HPP
#include <string>
#include <iostream>
#include "ASpell.hpp"

class ATarget
{
protected:
	std::string type;
public:
	ATarget();
	ATarget(ATarget const &other);
	ATarget &operator=(ATarget const &other);
	const std::string &getType() const;
	ATarget(std::string const &ty);
	virtual ATarget *clone() const = 0;
	void getHitBySpell(ASpell const &spell) const;
	virtual ~ATarget();
};


#endif
#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <string>
#include <iostream>

class ATarget;

class ASpell
{
protected:
	std::string name;
	std::string effects;
public:
	ASpell();
	ASpell(ASpell const &other);
	ASpell &operator=(ASpell const &other);
	const std::string &getName() const;
	const std::string &getEffects() const;
	ASpell(std::string const &na, std::string const &ef);
	virtual ASpell *clone() const = 0;
	void launch(ATarget const &tar) const;
	virtual ~ASpell();
};


#endif

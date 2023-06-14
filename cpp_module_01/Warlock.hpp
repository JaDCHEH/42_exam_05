#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
private:
	std::string name;
	std::string title;
	std::map<std::string, ASpell*> spells;
	Warlock();
	Warlock(Warlock const &other);
	Warlock &operator=(Warlock const &other);
public:
	Warlock(std::string const &na, std::string const &ti);
	const std::string &getName() const ;
	const std::string &getTitle() const ;
	void setTitle(std::string const &ti);
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &name);
	void launchSpell(std::string const &name, ATarget const &tar);
	void introduce() const;
	~Warlock();
};

#endif
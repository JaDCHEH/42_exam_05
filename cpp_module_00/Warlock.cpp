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

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}
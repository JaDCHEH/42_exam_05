#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <string>
#include <iostream>

class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock(Warlock const &other);
	Warlock &operator=(Warlock const &other);
public:
	Warlock(std::string const &na, std::string const &ti);
	const std::string &getName() const ;
	const std::string &getTitle() const ;
	void setTitle(std::string const &ti);
	void introduce() const;
	~Warlock();
};

#endif
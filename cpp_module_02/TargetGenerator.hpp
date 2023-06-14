#ifndef TargetGenerator_HPP
#define TargetGenerator_HPP
#include <string>
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
private:
	std::map<std::string, ATarget*> targets;
	TargetGenerator(TargetGenerator const &other);
	TargetGenerator &operator=(TargetGenerator const &other);
public:
	TargetGenerator();
	void learnTargetType(ATarget *tar);
	void forgetTargetType(std::string const &name);
	ATarget *createTarget(std::string const &name);
	~TargetGenerator();
};

#endif
#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
	if (targets.find(name) != targets.end())
		delete targets[name];
	targets.erase(name);
}

ATarget *TargetGenerator::createTarget(std::string const &name)
{
	if (targets.find(name) != targets.end())
		return targets[name];
	return NULL;
}

TargetGenerator::~TargetGenerator()
{
	for (std::map<std::string, ATarget*>::iterator it = targets.begin(); it != targets.end(); it++)
		delete it->second;
}

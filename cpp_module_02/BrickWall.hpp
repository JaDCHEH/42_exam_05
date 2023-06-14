#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP
#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
	BrickWall();
	virtual ATarget *clone() const;
	~BrickWall();
};

#endif
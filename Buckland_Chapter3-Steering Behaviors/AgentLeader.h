#ifndef AGENTLEADER_H
#define AGENTLEADER_H
#pragma warning (disable:4786)
//----------------------------------------------------------------------------
//
//  Name:   AgentLeader.h
//
//  Desc:   Definition of an AgentLeader. This class is a modified vehicle
//			to implement an wandering steeringbehavior and a different
//			appearence from other vehicles.
//
//  Author: Samuel Potvin, Victor Guérin
//
//----------------------------------------------------------------------------

#include "Vehicle.h"
#include "2d/Vector2D.h"
#include "misc/Smoother.h"

#include <vector>
#include <list>
#include <string>

class AgentLeader : public Vehicle
{

private:


public:
	AgentLeader(GameWorld* world,
        Vector2D position,
        double    rotation,
        Vector2D velocity,
        double    mass,
        double    max_force,
        double    max_speed,
        double    max_turn_rate,
        double    scale);

	~AgentLeader(){};
};

#endif

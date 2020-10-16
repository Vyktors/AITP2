#ifndef AGENTPOURSUIVEUR_H
#define AGENTPOURSUIVEUR_H
#pragma warning (disable:4786)
//----------------------------------------------------------------------------
//
//  Name:   AgentPoursuiveur.h
//
//  Desc:   Definition of a AgentPoursuiveur. This class is a modified vehicle
//			to implement an offsetpursuit and a separation steeringbehavior
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

class AgentPoursuiveur : public Vehicle
{

private:


public:
	AgentPoursuiveur(GameWorld* world,
        int posAgentCourant,
        Vector2D position,
        double    rotation,
        Vector2D velocity,
        double    mass,
        double    max_force,
        double    max_speed,
        double    max_turn_rate,
        double    scale);

	~AgentPoursuiveur(){};

};

#endif
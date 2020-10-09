#ifndef AGENTLEADER_H
#define AGENTLEADER_H
#pragma warning (disable:4786)
//----------------------------------------------------------------------------
//
//  Name:   AgentPoursuiveur.h
//
//  Desc:   Definition of a AgentPoursuiveur. This class is a modified vehicle
//			to implement an arrive and offsetpursuit steeringbehavior
//
//  Author: Samuel Potvin, Victor Guérin
//
//----------------------------------------------------------------------------

#include "Vehicle.h"

class AgentLeader : public Vehicle
{

private:


public:
	AgentLeader();
	~AgentLeader();

};

#endif

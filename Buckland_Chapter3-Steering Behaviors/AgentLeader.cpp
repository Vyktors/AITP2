#include "AgentLeader.h"
#include "GameWorld.h"
#include "Vehicle.h"
#include "ParamLoader.h"
#include "SteeringBehaviors.h"

using std::vector;
using std::list;

//----------------------------- ctor -------------------------------------
//------------------------------------------------------------------------
AgentLeader::AgentLeader (GameWorld* world,
                            Vector2D position,
                            double    rotation,
                            Vector2D velocity,
                            double    mass,
                            double    max_force,
                            double    max_speed,
                            double    max_turn_rate,
                            double    scale) : Vehicle(world,
                                                       position,
                                                       rotation,
                                                       velocity,
                                                       mass,
                                                       max_force,
                                                       max_speed,
                                                       max_turn_rate,
                                                       scale)
{
    // Turn on Steering Behavior of AgentLeader
    this->SetScale(Vector2D(10, 10));
    this->Steering()->WanderOn();
    this->SetMaxSpeed(70);
}
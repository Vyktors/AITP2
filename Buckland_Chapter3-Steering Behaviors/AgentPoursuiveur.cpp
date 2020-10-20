#include "AgentPoursuiveur.h"
#include "GameWorld.h"
#include "Vehicle.h"
#include "ParamLoader.h"
#include "SteeringBehaviors.h"

using std::vector;
using std::list;

//----------------------------- ctor -------------------------------------
//------------------------------------------------------------------------
AgentPoursuiveur::AgentPoursuiveur(GameWorld* world,
                                    int posAgentCourant,
                                    Vector2D position,
                                    double    rotation,
                                    Vector2D velocity,
                                    double    mass,
                                    double    max_force,
                                    double    max_speed,
                                    double    max_turn_rate,
                                    double    scale):   Vehicle(world,
                                                                position,
                                                                rotation,
                                                                velocity,
                                                                mass,
                                                                max_force,
                                                                max_speed,
                                                                max_turn_rate,
                                                                scale)
{
    // Turn on Steering Behavior of AgentPoursuiveur

    this->Steering()->OffsetPursuitOn(world->getVehicle(posAgentCourant - 1), Vector2D(10,0)); //Vecteur écrit à la main. Peut-être créer une nouvelle variable dans params.ini ?

    this->Steering()->SeparationOn();
}


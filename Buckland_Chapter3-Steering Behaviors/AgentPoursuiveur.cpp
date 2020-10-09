#include "AgentPoursuiveur.h"
#include "GameWorld.h"
#include "Vehicle.h"
#include "ParamLoader.h"

#include "2d/C2DMatrix.h"
#include "2d/Geometry.h"
#include "SteeringBehaviors.h"
#include "2d/Transformations.h"
#include "misc/CellSpacePartition.h"
#include "misc/cgdi.h"

using std::vector;
using std::list;

//----------------------------- ctor -------------------------------------
//------------------------------------------------------------------------
AgentPoursuiveur::AgentPoursuiveur(GameWorld* world,
                                    Vehicle* AgentPrecedent,
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

        this->Steering()->ArriveOn();

        this->Steering()->OffsetPursuitOn(AgentPrecedent, Vector2D(2, 2)); //Vecteur écrit à la main. Peut-être créer une nouvelle variable dans params.ini ?

        this->Steering()->SeparationOn();
}

AgentPoursuiveur::~AgentPoursuiveur(){}
#pragma once

#include "Units.h"

class UnitFactory {
public:
    static unsigned int RockCost;
    static unsigned int ScissorsCost;
    static unsigned int PaperCost;

    virtual Unit* CreateUnit(Unit::UnitType) = 0;
    virtual void DeleteUnit(Unit*);
};

class RoyalFactory : public UnitFactory {
public:
    Unit* CreateUnit(Unit::UnitType) override;

};

class ForestFactory : public UnitFactory {
public:
    Unit* CreateUnit(Unit::UnitType) override;

};
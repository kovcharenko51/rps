#pragma once

#include "Units.h"

class UnitFactory {
public:
    enum BasicCost {
        RockCost = 10, PaperCost = 20, ScissorsCost = 30
    };
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
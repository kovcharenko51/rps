#pragma once

#include "Units.h"

class UnitFactory {
protected:
    UnitFactory();

public:
    UnitFactory(UnitFactory&) = delete;
    virtual UnitFactory* GetInstance() = 0;

    // Compress to one method: kinda CreateUnit(UnitType)
    virtual RockUnit& CreateRockUnit() = 0;
    virtual PaperUnit& CreatePaperUnit() = 0;
    virtual ScissorsUnit& CreateScissorsUnit() = 0;

    virtual void DeleteUnit(Unit*);

};

class RoyalFactory : public UnitFactory {
protected:
    RoyalFactory();

public:
    RoyalFactory(RoyalFactory&) = delete;
    RoyalFactory* GetInstance() override;
    
    RockUnit& CreateRockUnit() override;
    PaperUnit& CreatePaperUnit() override;
    ScissorsUnit& CreateScissorsUnit() override;

};

class ForestFactory : public UnitFactory {
protected:
    ForestFactory();

public:
    ForestFactory(RoyalFactory&) = delete;
    ForestFactory* GetInstance() override;
    
    RockUnit& CreateRockUnit() override;
    PaperUnit& CreatePaperUnit() override;
    ScissorsUnit& CreateScissorsUnit() override;

};

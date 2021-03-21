#pragma once

#include "Units.h"

class UnitFactory {
public:
    virtual RockUnit& CreateRockUnit() = 0;
    virtual PaperUnit& CreatePaperUnit() = 0;
    virtual ScissorsUnit& CreateScissorsUnit() = 0;

};

class RoyalFactory : public UnitFactory {
public:
    RockUnit& CreateRockUnit() override;
    PaperUnit& CreatePaperUnit() override;
    ScissorsUnit& CreateScissorsUnit() override;

};

class ForestFactory : public UnitFactory {
public:
    RockUnit& CreateRockUnit() override;
    PaperUnit& CreatePaperUnit() override;
    ScissorsUnit& CreateScissorsUnit() override;

};

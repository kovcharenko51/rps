#include "Unit"

class UnitFactory {
public:
    virtual RockUnit& CreateRockUnit();
    virtual PaperUnit& CreatePaperUnit();
    virtual ScissorsUnit& CreateScissorsUnit();

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

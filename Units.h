#pragma once

class Unit {
private:
    void Attack();
    void Die();
    void Idle();

    UnitFactory* factory;

public:
    enum UnitType {
        None, Rock, Paper, Scissors
    };
    UnitType type = None;

    UnitFactory* GetFactory();

};

class RockUnit : public Unit {
public:
    RockUnit();
};

class PaperUnit : public Unit {
public:
    PaperUnit();
};

class ScissorsUnit : public Unit {
public:
    ScissorsUnit();
};

class Knight : public RockUnit {
public:
    // Concrete sprites will be stored here
};

class CrossbowMan : public ScissorsUnit {
    // Concrete sprites will be stored here
};

class Berserk : public PaperUnit {
    // Concrete sprites will be stored here
};

class Werewolf : public PaperUnit {
    // Concrete sprites will be stored here
};

class Ent : public RockUnit {
    // Concrete sprites will be stored here
};

class WoodElf : public ScissorsUnit {
    // Concrete sprites will be stored here
};

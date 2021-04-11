#pragma once

class Unit {
protected:
    unsigned int cost_ = 0;

public:
    enum UnitType {
        None, Rock, Paper, Scissors
    };
    UnitType type = None;
    explicit Unit(unsigned int = 0);
    void Attack();
    void Die();
    void Idle();
    unsigned int GetCost();
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
    explicit Knight(unsigned int);
};

class CrossbowMan : public ScissorsUnit {
public:
    explicit CrossbowMan(unsigned int);
};

class Berserk : public PaperUnit {
public:
    explicit Berserk(unsigned int);
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
#pragma once

#include "DrawManager.h"

class Unit {
protected:
    unsigned int cost_ = 0;

public:
    enum UnitType {
        None        = -1, 
        Rock        = 0, 
        Scissors    = 1,
        Paper       = 2, 
    };
    UnitType type = None;
    DrawableObject::State state = DrawableObject::Idle;
    DrawableObject::Unit sprite_type;
    DrawableObject::Icon icon_type;
    explicit Unit(unsigned int = 0);
    void Attack();
    void Die();
    void Idle();
    unsigned int GetCost();
    virtual ~Unit() = default;
};


class RockUnit : public Unit {
public:
    RockUnit();
};

class ScissorsUnit : public Unit {
public:
    ScissorsUnit();
};

class PaperUnit : public Unit {
public:
    PaperUnit();
};


class Knight : public RockUnit {
public:
    Knight();
};

class CrossbowMan : public ScissorsUnit {
public:
    CrossbowMan();
};

class Berserk : public PaperUnit {
public:
    Berserk();
};


class Ent : public RockUnit {
public:
    Ent();
};

class WoodElf : public ScissorsUnit {
public:
    WoodElf();
};

class Werewolf : public PaperUnit {
public:
    Werewolf();
};

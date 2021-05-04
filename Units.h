#pragma once

#include "DrawManager.h"

class Unit {
protected:
    unsigned int cost_ = 0;

public:
    enum UnitType {
        None, Rock, Paper, Scissors
    };
    UnitType type = None;
    DrawManager::State state = DrawManager::Idle;
    DrawManager::SpriteType sprite_type;
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
public:
    Werewolf();
};

class Ent : public RockUnit {
public:
    Ent();
};

class WoodElf : public ScissorsUnit {
public:
    WoodElf();
};
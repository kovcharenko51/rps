#pragma once

class Unit {
private:
    void Attack();
    void Die();
    void Idle();
public:
    enum UnitType {
        None, Rock, Paper, Scissors
    };
    UnitType type = None;
};

class RockUnit : Unit {
    RockUnit();
};

class PaperUnit : Unit {
    PaperUnit();
};

class ScissorsUnit : Unit {
    ScissorsUnit();
};

class Knight : RockUnit {
    // Concrete sprites will be stored here
};

class CrossbowMan : ScissorsUnit {
    // Concrete sprites will be stored here
};

class Berserk : PaperUnit {
    // Concrete sprites will be stored here
};

class Werewolf : PaperUnit {
    // Concrete sprites will be stored here
};

class Ent : RockUnit {
    // Concrete sprites will be stored here
};

class WoodElf : ScissorsUnit {
    // Concrete sprites will be stored here
};

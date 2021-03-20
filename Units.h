#pragma once

class Unit {
    virtual void Fight();
};

class RockUnit : Unit {
    void Deflect();
};

class PaperUnit : Unit {
    void Attack();
};

class ScissorsUnit : Unit {
    void Shoot();
};

class Knight : RockUnit {
    
};

class CrossbowMan : ScissorsUnit {
    
};

class Berserk : PaperUnit {
    
};

class Werewolf : PaperUnit {
    
};

class Ent : RockUnit {
    
};

class WoodElf : ScissorsUnit {
    
};

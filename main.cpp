#include <iostream>
#include <limits>
#include "Factory.h"
#include "Squad.h"

void show_state(const Squad&, const unsigned int&);
void show_possible_commands();
void show_message(const std::string&);

int main() {
    RoyalFactory factory;
    Squad squad;
    unsigned int balance = 1000;

    EconomicDecorator economic_decorator(&squad, balance);

    while (true) {
        system("clear");
        show_state(squad, balance);
        show_possible_commands();
        char query;
        std::cin >> query;
        switch (query) {
        case 'i': {
            int position;
            char type_symbol;
            std::cin >> position >> type_symbol; 
            if (0 > position || position > economic_decorator.GetSquadSize()) {
                show_message("Wrong position!\n");
                continue;
            }
            Unit::UnitType unit_type;
            switch (type_symbol) {
            case 'R': unit_type = Unit::UnitType::Rock; break;
            case 'P': unit_type = Unit::UnitType::Paper; break;
            case 'S': unit_type = Unit::UnitType::Scissors; break;
            default:
                show_message("Wrong unit type!\nUse 'R', 'P' or 'S'!\n");
                continue;
            } 
            Unit* unit = factory.CreateUnit(unit_type);
            bool succes = economic_decorator.InsertUnit(position, unit);
            if (!succes) {
                show_message("Not enough money!\n");
                delete unit;
            }
        } break;

        case 'r': {
            int position;
            std::cin >> position;
            if (0 > position || position > economic_decorator.GetSquadSize()) {
                show_message("Wrong position!\n");
                continue;
            }
            economic_decorator.RemoveUnit(position);
        } break;

        case 'q': return 0;

        default:
            break;
        }
    }
}

void show_state(const Squad& squad, const unsigned int& balance) {
    std::cout << "balance: " << balance << "\t";
    std::cout << "_"; 
    for (const auto& unit: squad.units) {
        char representation = 'x';
        switch (unit->type) {
        case Unit::UnitType::Rock:      representation = 'R'; break;
        case Unit::UnitType::Paper:     representation = 'P'; break;
        case Unit::UnitType::Scissors:  representation = 'S'; break;
        }
        std::cout << representation;
    }
    std::cout << "_" << std::endl;
}

void show_possible_commands() {
    std::cout << "\033[1;030m";
    std::cout << "i <position : int> <unit type : {'R','P','S'}>    insert unit on position\n";
    std::cout << "r <position : int>                                remove unit on position\n";
    std::cout << "q                                                 quit\n";
    std::cout << "\033[0m";
}

void show_message(const std::string& message) {
    std::cout << message;
    std::cout << std::endl << "Press <Enter> to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

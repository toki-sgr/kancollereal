#include <iostream>
#include "equipment.h"

namespace kancollereal
{
    class Ship
    {
    private:
        int32_t ship_id;
        std::string ship_name;
        int32_t ship_form;
        int32_t ship_unique_id;
        std::string ship_class;
        std::string ship_type;

        int32_t ship_level;
        int32_t ship_cur_exp;
        int32_t ship_current_hp;

        int32_t ship_hp;
        int32_t ship_firepower;
        int32_t ship_armor;
        int32_t ship_torpedo;
        int32_t ship_evasion;
        int32_t ship_aa;
        int32_t ship_aircraft;
        int32_t ship_asw;
        int32_t ship_speed;
        int32_t ship_los;
        int32_t ship_range;
        int32_t ship_luck;

        int32_t stock_1_space;
        int32_t stock_2_space;
        int32_t stock_3_space;
        int32_t stock_4_space;
        int32_t stock_5_space;
        int32_t stock_6_space;

    public:
        Ship(int32_t ship_id);
        ~Ship();

        int get_ship_initial_info(int32_t ship_id);
        int get_attack_damage();
    };

    Ship::Ship(int32_t ship_id)
    {
        this->ship_id = ship_id;
        get_ship_initial_info(ship_id);
    }

    Ship::~Ship()
    {
    }

    int Ship::get_ship_initial_info(int32_t ship_id)
    {
        if (ship_id == 1)
        {
            this->ship_name = "時雨";
            this->ship_form = 1;
            this->ship_unique_id = 1;
            this->ship_class = "白露型";
            this->ship_type = "Destroyer";

            this->ship_level = 1;
            this->ship_cur_exp = 0;
            this->ship_current_hp = 16;

            this->ship_hp = 16;
            this->ship_firepower = 10;
            this->ship_armor = 6;
            this->ship_torpedo = 24;
            this->ship_evasion = 43;
            this->ship_aa = 9;
            this->ship_aircraft = 0;
            this->ship_asw = 21;
            this->ship_speed = 10; // Fast
            this->ship_los = 5;
            this->ship_range = 5; // short
            this->ship_luck = 10;

            this->stock_1_space = 0;
            this->stock_2_space = 0;
            this->stock_3_space = -1;
            this->stock_4_space = -1;
            this->stock_5_space = -1;
            this->stock_6_space = -1;
        }
        return 0;
    }

    int Ship::get_attack_damage()
    {
        return this->ship_firepower;
    }
}
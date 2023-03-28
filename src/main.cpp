#include <iostream>
#include "item/ship.h"

int main(int argc, char **)
{
    kancollereal::Ship shigure = kancollereal::Ship(1);
    std::cout << shigure.get_attack_damage() << std::endl;
    return 0;
}
#include "../include/Player.hpp"
#include <iostream>

Player::Player()
{
    hp = 100;
}

void Player::attack()
{
    std::cout << "Attack!" << std::endl;
}

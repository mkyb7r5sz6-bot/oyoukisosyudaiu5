#include "Player.h"
#include <cstdlib> 

using namespace std;


Player::Player(string playerName) {
    name = playerName;
    number = 0;
}


void Player::hit() {
    number = (rand() % 13) + 1;
}


int Player::getNumber() {
    return number;
}


void Player::showNumber() {
    cout << name << " のカード: " << number << endl;
}
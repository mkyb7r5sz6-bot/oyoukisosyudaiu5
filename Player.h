#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int number;

public:
   
    Player(string playerName);

    
    void hit();

    
    int getNumber();

    
    void showNumber();
};

#endif#pragma once

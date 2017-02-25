#include <player.h>
#include <iostream>
#include <string.h>


using namespace std;

Player::Player()
{
    points = 0;
    playerName = NULL; 
}

void
Player::SetName(const char *name)
{
    if(playerName != NULL)
    {
        delete playerName;
    }
    playerName = new char[strlen(name) + 1];
    strcpy(playerName, name);
}





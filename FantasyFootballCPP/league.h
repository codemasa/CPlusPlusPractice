#ifndef LEAGUE_H
#define LEAGUE_H

#include <team.h>

class League
{
  private:

    int   numPlayers;
    Team *team;

  public:

    League();
    League(char *t);
    League(League &league);
    ~League();



};


#endif

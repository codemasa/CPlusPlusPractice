#ifndef TEAM_H
#define TEAM_H

#include <player.h>
#include <positions.h>

class Team
{
  private:
    Quarterback *qb;
    Runningback *rb1;
    Runningback *rb2;

  public:
                          Team();
    Quarterback          *GetQB() {return qb;}
    Runningback          *GetRB1() {return rb1;}
    Runningback          *GetRB2() {return rb2;}
};


#endif

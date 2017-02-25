#ifndef PLAYER_H
#define PLAYER_H

class Player
{
  public:
                           Player();
    void                   SetPoints(int p) {points = p;}
    int                    GetPoints()      {return points;}
    void                   SetName(const char *);
    const char            *GetName()        {return playerName;}
  protected:
    int                    points;
    char                  *playerName;

};




#endif

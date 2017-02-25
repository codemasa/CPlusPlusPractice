#ifndef POSITIONS_H
#define POSITIONS_H

#include <player.h>

class Offense : public Player
{

};

class DST : public Player
{

};

class Quarterback : public Offense
{
  public:
                           Quarterback();
                           Quarterback(const char *name);
};

class Runningback : public Offense
{
  public:
                           Runningback();
                           Runningback(const char *name);
};

class WideReciever : public Offense
{
  public:
                           WideReciever();
                           WideReciever(const char *name);
};

class TightEnd : public Offense
{
  public:
                           TightEnd();
                           TightEnd(const char *name);
};

class Kicker : public Offense
{
  public:
                           Kicker();
                           Kicker(const char *name);
};

class DSTteam : public DST
{
  public:
                           DSTteam();
                           DSTteam(const char *name);
};

class Flex : public Runningback, WideReciever, TightEnd
{
  public:    
                           Flex();
                           Flex(Runningback rb, const char *name);
                           Flex(WideReciever wr, const char *name);
                           Flex(TightEnd te, const char *name);
    const char            *GetName();
    void                   SetFlex(Runningback rb);
    void                   SetFlex(WideReciever wr);
    void                   SetFlex(TightEnd te);

  private:
    Runningback  runningback;
    WideReciever widereciever;
    TightEnd     tightend;
};
#endif

#include <positions.h>
#include <iostream>

Quarterback::Quarterback()
{
    playerName = NULL;
    points = 0;
}


Quarterback::Quarterback(const char *name)
{
    SetName(name);
}

Runningback::Runningback()
{
    playerName = NULL;
    points = 0;
}


Runningback::Runningback(const char *name)
{
    SetName(name);
}

WideReciever::WideReciever()
{
    playerName = NULL;
    points = 0;
}


WideReciever::WideReciever(const char *name)
{
    SetName(name);
}

TightEnd::TightEnd()
{
    playerName = NULL;
    points = 0;
}


TightEnd::TightEnd(const char *name)
{
    SetName(name);
}

Kicker::Kicker()
{
    playerName = NULL;
    points = 0;
}


Kicker::Kicker(const char *name)
{
    SetName(name);
}

DSTteam::DSTteam()
{
    playerName = NULL;
    points = 0;
}


DSTteam::DSTteam(const char *name)
{
    SetName(name);
}

Flex::Flex()
{
    runningback = NULL;
    widereciever = NULL;
    tightend = NULL;
}


Flex::Flex(Runningback rb, const char *name)
{
    runningback = rb;
    runningback.SetName(name);
}

Flex::Flex(WideReciever wr, const char *name)
{
    widereciever = wr;
    widereciever.SetName(name);
}

Flex::Flex(TightEnd te, const char *name)
{
    tightend = te;
    tightend.SetName(name);
}

const char *
Flex::GetName()
{
    const char *badtype;
    if(runningback.GetName() != NULL)
    {
        return runningback.GetName();
    }

    if(widereciever.GetName() != NULL)
    {
        return widereciever.GetName();
    }

    if(tightend.GetName() != NULL)
    {
        return tightend.GetName();
    }
    return badtype;
}

void
Flex::SetFlex(Runningback rb)
{
    if(widereciever.GetName() != NULL || tightend.GetName() != NULL)
    {
        widereciever.SetName(NULL);
        tightend.SetName(NULL);
    }
    runningback = rb;
}

void
Flex::SetFlex(WideReciever wr)
{
    if(runningback.GetName() != NULL || tightend.GetName() != NULL)
    {
        runningback.SetName(NULL);
        tightend.SetName(NULL);
    }
    widereciever = wr;
}
    
void
Flex::SetFlex(TightEnd te)
{
    if(widereciever.GetName() != NULL || runningback.GetName() != NULL)
    {
        widereciever.SetName(NULL);
        runningback.SetName(NULL);
    }
    tightend = te;
}    


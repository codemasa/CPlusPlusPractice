#include <player.h>
#include <team.h>
#include <league.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "this is the main function" << endl;
    Team *team;
    Runningback  flexrb;
    WideReciever flexwr;
    TightEnd     flexte;
    Quarterback  qb("Aaron Rodgers");
    Runningback  rb1("Eddie Lacy");
    Runningback  rb2("James Starks");
    WideReciever wr1("Jordy Nelson");
    WideReciever wr2("Randall Cobb");
    TightEnd     te("Richard Rodgers");
    Flex         fl(flexwr, "James Jones");

    Kicker       k("Mason Crosby");
    DSTteam      dst("Packers D/ST");

    cout << "QB is " << qb.GetName() << endl;
    cout << "RB #1 is " << rb1.GetName() << endl;
    cout << "RB #2 is " << rb2.GetName() << endl;
    cout << "WR #1 is " << wr1.GetName() << endl;
    cout << "WR #2 is " << wr2.GetName() << endl;
    cout << "TE is " << te.GetName() << endl;
    cout << "FLEX is " << fl.GetName() << endl;
    cout << "K is " << k.GetName() << endl;
    cout << "D/ST is " << dst.GetName() << endl;
    
    flexte.SetName("Jared Cook");
    fl.SetFlex(flexte);

    cout << "New FLEX is " << fl.GetName() << endl;
}

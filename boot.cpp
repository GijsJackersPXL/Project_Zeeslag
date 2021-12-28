#include "boot.h"
using namespace std;

void Boot::setX(int x)
{
    coordinaat_x = x;
}

void Boot::setY(int y)
{
    coordinaat_y = y;
}

int Boot:: getX()
{
    return coordinaat_x;
}

int Boot:: getY()
{
    return coordinaat_y;
}

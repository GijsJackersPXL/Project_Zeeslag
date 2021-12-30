#include "boot.h"
using namespace std;

namespace ZEESLAG
{
    void Boot::setBreedte(int breedte)
    {
        this->breedte = breedte;
    }

    void Boot::setX(int coordinaat_x)
    {
        this->coordinaat_x = coordinaat_x;
    }

    void Boot::setY(int coordinaat_y)
    {
        this->coordinaat_y = coordinaat_y;
    }

    void Boot::setPositie(int coordinaat_x, int coordinaat_y)
    {
        this->coordinaat_x = coordinaat_x;
        this->coordinaat_y = coordinaat_y;
    }

    int Boot:: getX()
    {
        return coordinaat_x;
    }

    int Boot:: getY()
    {
        return coordinaat_y;
    }

    int Boot:: getBreedte()
    {
        return breedte;
    }
}
#ifndef TORPEDOBOOTJAGER_H
#define TORPEDOBOOTJAGER_H

#include <string>


//child class (torpedobootjager) inhereting from base class (boot)
class torpedobootjager : public boot
{
    protected:
        int breedte = 3;
    public:
        int getBreedte(){
            retrun (breedte);
        }

};
#ifndef DUIKBOOT_H
#define DUIKBOOT_H

#include <string>


//child class (duikboot) inhereting from base class (boot)
class duikboot : public boot
{
    protected:
        int breedte = 3;
    public:
        int getBreedte(){
            retrun (breedte);
        }
};
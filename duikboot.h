#ifndef DUIKBOOT_H
#define DUIKBOOT_H

#include <iostream>
#include <string>
#include "boot.h"

//child class (duikboot) inhereting from base class (boot)
class Duikboot : public Boot
{
    protected:
        int breedte = 3;
    public:
        int getBreedte(){
            return (breedte);
        }
};

#endif
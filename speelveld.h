#ifndef SPEELVELD_H
#define SPEELVELD_H

#include "includeHeaders.h"
#include "includeBoten.h"
#include "speler.h"

namespace ZEESLAG
{
        class Speelveld
        {
                private:
                        int veld[10][10] = {0};
                
                public:
                        void print();
                        void getPositie(Boot& boot);
                
        };
}
#endif  // SPEELVELD_H
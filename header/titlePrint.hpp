#ifndef TITLEPRINT__H
#define TITLEPRINT__H
#include "../header/coord.hpp"

class TitlePrint {
    private:
        coord title[6][96];
    public:
        void initializeTitle(const string &);
};
#endif
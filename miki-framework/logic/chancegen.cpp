#include "mf/logic.h"

namespace logic {
    bool chancegen(int chance) {
        int number = GenRanNum(1, chance);

        if(number == 1) return true;
        else return false;
    }
}
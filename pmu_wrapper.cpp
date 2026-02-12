//c++ wrapper

#include <stdint.h>
#include "cycletime.h"

extern "C"{
    //init PMU counters
    void init_pmu(void){
        init_counters(1,0); //do_reset=1 , enable_divider = 0
    }

    //get cycle_count
    unsigned int get_cycle_count(void){
        return get_cyclecount();
    }
}

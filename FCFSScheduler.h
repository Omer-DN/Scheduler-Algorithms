#ifndef FCFSSCHEDULER_H
#define FCFSSCHEDULER_H

#include "BaseScheduler.h"
#include <vector>

class FCFSScheduler : public BaseScheduler {
public:
    void schedule(vector<Task>& tasks) override; // רק הצהרה, לא מימוש
};

#endif // FCFSSCHEDULER_H

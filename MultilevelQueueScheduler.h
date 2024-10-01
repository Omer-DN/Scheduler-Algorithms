#ifndef MULTILEVELQUEUESCHEDULER_H
#define MULTILEVELQUEUESCHEDULER_H

#include <iostream>
#include <vector>
#include "Task.h"

using namespace std;

// Multilevel Queue Scheduling with a specified time slice
class MultilevelQueueScheduler {
private:
    int timeSlice;

public:
    MultilevelQueueScheduler(int ts) : timeSlice(ts) {}

    void schedule(vector<Task>& tasks);
};

#endif

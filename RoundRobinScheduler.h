#ifndef ROUNDROBINSCHEDULER_H
#define ROUNDROBINSCHEDULER_H

#include <iostream>
#include <vector>
#include "Task.h"

using namespace std;

// Round Robin scheduling algorithm with a specified time slice
class RoundRobinScheduler {
private:
    int timeSlice;

public:
    RoundRobinScheduler(int ts) : timeSlice(ts) {}

    void schedule(vector<Task>& tasks);
};

#endif

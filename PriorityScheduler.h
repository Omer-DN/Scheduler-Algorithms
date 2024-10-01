#ifndef PRIORITYSCHEDULER_H
#define PRIORITYSCHEDULER_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "Task.h"

using namespace std;

// Priority scheduling algorithm (lower number = higher priority)
class PriorityScheduler {
public:
    void schedule(vector<Task>& tasks);
};

#endif

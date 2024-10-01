#ifndef SJFSCHEDULER_H
#define SJFSCHEDULER_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "Task.h"

using namespace std;

// Shortest Job First (SJF) scheduling algorithm
class SJFScheduler {
public:
    void schedule(vector<Task>& tasks);
};

#endif

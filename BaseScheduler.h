#pragma once
#ifndef BASESCHEDULER_H
#define BASESCHEDULER_H

#include <vector>
#include "Task.h"


class BaseScheduler {
public:
    virtual void schedule(vector<Task>& tasks) = 0;
    virtual ~BaseScheduler() = default;
};

#endif // BASESCHEDULER_H

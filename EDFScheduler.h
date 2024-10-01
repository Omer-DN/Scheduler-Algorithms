#pragma once
#ifndef EDFSCHEDULER_H
#define EDFSCHEDULER_H

#include "BaseScheduler.h"

class EDFScheduler : public BaseScheduler {
public:
    void schedule(vector<Task>& tasks) override;
};

#endif // EDFSCHEDULER_H

#include "FCFSScheduler.h"
#include <iostream>

// Implementation of the schedule function for FCFS (First Come, First Served) algorithm
void FCFSScheduler::schedule(vector<Task>& tasks) {
    cout << "Scheduling tasks with FCFS (First Come, First Served)...\n";

    // Execute each task in the order they were added (first-come, first-served)
    for (auto& task : tasks) {
        task.execute();
    }
}

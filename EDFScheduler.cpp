#include "EDFScheduler.h"
#include <algorithm>
#include <iostream>

// Comparison function for sorting tasks by their deadlines (Earliest Deadline First)
bool compareByDeadline(const Task& a, const Task& b) {
    return a.deadline < b.deadline;
}

// Implementation of the 'schedule' method for the Earliest Deadline First (EDF) algorithm
void EDFScheduler::schedule(vector<Task>& tasks) {
    // Sort the tasks by their deadline in ascending order (earliest deadline first)
    sort(tasks.begin(), tasks.end(), compareByDeadline);

    cout << "Scheduling tasks using EDF (Earliest Deadline First) algorithm:\n";

    // Iterate over the sorted tasks and execute them in the preferred order
    for (Task& task : tasks) {
        if (!task.complete) {
            cout << "Executing task: " << task.name
                << " (Deadline: " << task.deadline << ")" << endl;
            // Simulate the execution of the task
            task.execute();
        }
    }
}

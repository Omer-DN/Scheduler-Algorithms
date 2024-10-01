#include "SJFScheduler.h"
#include <algorithm> // for std::sort

// Shortest Job First (SJF) scheduling algorithm
void SJFScheduler::schedule(vector<Task>& tasks) {
    // Sort tasks based on burst time (shortest job first)
    sort(tasks.begin(), tasks.end(), [](Task& a, Task& b) {
        return a.burstTime < b.burstTime;
        });

    cout << "Executing SJF Scheduling:\n";
    for (auto& task : tasks) {
        cout << "Task: " << task.name << " with burst time: " << task.burstTime << " executed.\n";
        task.complete = true;
    }
}

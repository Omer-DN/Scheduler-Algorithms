#include "PriorityScheduler.h"
#include <algorithm> // for std::sort

// Priority scheduling algorithm (lower number = higher priority)
void PriorityScheduler::schedule(vector<Task>& tasks) {
    // Sort tasks based on priority (lower number means higher priority)
    sort(tasks.begin(), tasks.end(), [](Task& a, Task& b) {
        return a.priority < b.priority;
        });

    cout << "Executing Priority Scheduling:\n";
    for (auto& task : tasks) {
        cout << "Task: " << task.name << " with priority: " << task.priority << " executed.\n";
        task.complete = true;
    }
}

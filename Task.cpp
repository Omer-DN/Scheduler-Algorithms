#include "Task.h"
#include <iostream>

// Simulate task execution
void Task::execute() {
    cout << "Executing task: " << name << "\n";
    cout << "Burst time: " << burstTime << " units\n";
    cout << "Priority: " << priority << "\n";
    cout << "Deadline: " << deadline << "\n";
    // Simulate completion
    complete = true;
    cout << "Task " << name << " completed.\n";
}

#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;

// Task class to represent a task with a name, burst time, priority, deadline, and status
class Task {
public:
    string name;     // Task name
    int burstTime;   // Time needed to complete the task
    int priority;    // Priority level (lower number = higher priority)
    int deadline;    // Deadline for the task (lower number = earlier deadline)
    bool complete;   // Status of the task (true if complete)

    // Constructor
    Task(string n, int bt, int pr) : name(n), burstTime(bt), priority(pr), complete(false) {}

    // Function to simulate task execution
    void execute();
};

#endif // TASK_H

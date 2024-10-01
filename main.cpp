#include <iostream>
#include <vector>
#include "FCFSScheduler.h"
#include "SJFScheduler.h"
#include "PriorityScheduler.h"
#include "RoundRobinScheduler.h"
#include "MultilevelQueueScheduler.h"
#include "Task.h"

using namespace std;

// Function to reset the status of all tasks between each scheduling algorithm
void resetTasks(vector<Task>& tasks) {
    for (auto& task : tasks) {
        task.complete = false;  // Reset task completion status
        // Other parameters can be reset if needed
    }
}

int main() {
    // Creating example tasks
    vector<Task> tasks = {
        Task("Task 1", 10, 1),
        Task("Task 2", 5, 3),
        Task("Task 3", 7, 2),
        Task("Task 4", 3, 5),
        Task("Task 5", 8, 4)
    };

    // Scheduling using FCFS (First Come, First Served)
    cout << "\n====================================\n" << endl;
    cout << "Scheduling with FCFS:" << endl;
    FCFSScheduler fcfs;
    fcfs.schedule(tasks);
    resetTasks(tasks); // Reset tasks for next scheduling algorithm

    // Scheduling using SJF (Shortest Job First)
    cout << "\n====================================\n" << endl;
    cout << "Scheduling with SJF:" << endl;
    SJFScheduler sjf;
    sjf.schedule(tasks);
    resetTasks(tasks); // Reset tasks for next scheduling algorithm

    // Scheduling by Priority
    cout << "\n====================================\n" << endl;
    cout << "Scheduling with Priority:" << endl;
    PriorityScheduler priorityScheduler;
    priorityScheduler.schedule(tasks);
    resetTasks(tasks); // Reset tasks for next scheduling algorithm

    // Scheduling using Round Robin with a time slice of 4 units
    cout << "\n====================================\n" << endl;
    cout << "Scheduling with Round Robin (Time Slice = 4):" << endl;
    RoundRobinScheduler rr(4);
    rr.schedule(tasks);
    resetTasks(tasks); // Reset tasks for next scheduling algorithm

    // Scheduling using Multilevel Queue with a time slice of 4 units
    cout << "\n====================================\n" << endl;
    cout << "Scheduling with Multilevel Queue:" << endl;
    MultilevelQueueScheduler mlq(4);
    mlq.schedule(tasks);

    cout << "\n====================================\n" << endl;
    cout << "Scheduling complete." << endl;

    return 0;
}

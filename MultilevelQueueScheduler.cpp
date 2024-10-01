#include "MultilevelQueueScheduler.h"


// Perform multilevel queue scheduling (simple Round Robin for example purposes)
void MultilevelQueueScheduler::schedule(vector<Task>& tasks) {
    cout << "Executing Multilevel Queue Scheduling with time slice = " << timeSlice << ":\n";

    bool allTasksComplete = false;
    while (!allTasksComplete) {
        allTasksComplete = true;
        for (auto& task : tasks) {
            if (!task.complete) {
                allTasksComplete = false;
                if (task.burstTime > timeSlice) {
                    cout << "Task: " << task.name << " executed for " 
                        << timeSlice << " units.\n";
                    task.burstTime -= timeSlice;
                }
                else {
                    cout << "Task: " << task.name << " executed for " 
                        << task.burstTime << " units and is now complete.\n";
                    task.complete = true;
                }
            }
        }
    }
}

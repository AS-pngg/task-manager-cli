#ifndef TASK_H
#define TASK_H

#define MAX_TASKS 100
#define MAX_LEN 100

typedef struct {
    int id;
    char description[MAX_LEN];
    int completed; // 0 = pending, 1 = done
} Task;

#endif

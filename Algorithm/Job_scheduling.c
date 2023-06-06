#include <stdio.h>
#include <stdlib.h>
#define MAX_JOBS 10
struct Job {
    short id;
    short deadline;
    short profit;
};
void jobSequencing(struct Job jobs[], short n) {
    for (short i = 0; i < n - 1; i++) {
        for (short j = 0; j < n - i - 1; j++) {
            if (jobs[j].profit < jobs[j + 1].profit) {
                struct Job temp = jobs[j];
                jobs[j] = jobs[j + 1];
                jobs[j + 1] = temp;
            }
        }
    }
    short maxDeadline = 0;
    for (short i = 0; i < n; i++) {
        if (jobs[i].deadline > maxDeadline) {
            maxDeadline = jobs[i].deadline;
        }
    }
    short slots[MAX_JOBS] = { 0 };
    short selectedJobs[MAX_JOBS] = { 0 };
    short selectedCount = 0;
    for (short i = 0; i < n; i++) {
        short deadline = jobs[i].deadline;
        for (short j = deadline - 1; j >= 0; j--) {
            if (slots[j] == 0) {
                slots[j] = 1;
                selectedJobs[j] = jobs[i].id;
                selectedCount++;
                break;
            }
        }
        if (selectedCount == maxDeadline) {
            break;
        }
    }
    printf("Selected Jobs: ");
    for (short i = 0; i < maxDeadline; i++) {
        if (selectedJobs[i] != 0) {
            printf("%d ", selectedJobs[i]);
        }
    }
}
int main() {
    struct Job jobs[MAX_JOBS];
    short n;
    printf("Enter the number of jobs: ");
    scanf("%hd", &n);
    printf("Enter job details (id, deadline, profit):\n");
    for (short i = 0; i < n; i++) {
        scanf("%hd %hd %hd", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }
    jobSequencing(jobs, n);
    return 0;
}
//complexity : O(n log n)
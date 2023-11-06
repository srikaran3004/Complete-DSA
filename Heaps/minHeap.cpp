// Caleb is developing a scheduling algorithm for a computer operating system. He requires assistance in creating a function to insert a new process along with its execution time into a min heap that represents the execution times of various processes.


// Write a code to help him insert a new process with its execution time into a min heap.
// Input format :

// The input consists of a series of space-separated integers, each representing the execution time of a process.
// Output format :

// The output displays the execution times of processes after each insertion, in the order they are stored in the min heap.
// Code constraints :

// The maximum number of processes that can be inserted is 100 (as the minHeap array has a size of 100).
// Sample test cases :
// Input 1 :

// 10 5 15 20

// Output 1 :

// 5 10 15 20 

// Input 2 :

// 8 3 12 7 25

// Output 2 :

// 3 7 12 8 25 


#include <iostream>
#include <vector>
#include <algorithm>

void insertProcess(std::vector<int>& minHeap, int executionTime) {
    minHeap.push_back(executionTime);
    std::push_heap(minHeap.begin(), minHeap.end(), std::greater<int>());
}

void displayExecutionTimes(const std::vector<int>& minHeap) {
    for (int executionTime : minHeap) {
        std::cout << executionTime << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> minHeap;

    int executionTime;
    while (std::cin >> executionTime) {
        insertProcess(minHeap, executionTime);
    }

    displayExecutionTimes(minHeap); // Display the final output

    return 0;
}

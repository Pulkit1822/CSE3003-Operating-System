#include <iostream>
#include <vector>

using namespace std;

int getCountOfResourceCollisions(int numberOfProcesses, vector<int> processes,
    int numberOfRows, int numberOfColumns, vector<vector<int>> resources, int resourceToCheck) {
    int countOfCollisions = 0;
    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            if (resources[i][j] == resourceToCheck) {
                ++countOfCollisions;
            }
        }
    }
    return countOfCollisions;
}

int main() {
    int numberOfProcesses, numberOfRows, numberOfColumns, resourceToCheck;
    cout << "I have implemented a matrix for resource allocation" << endl;
    cout << "Enter the number of processes: " ;
    cin >> numberOfProcesses;
    vector<int> processes(numberOfProcesses);
    cout << "Enter Process Numbers (0-" << numberOfProcesses-1 << " with spaces): " ;
    for (int i = 0; i < numberOfProcesses; ++i) {
        cin >> processes[i];
    }
    cout << "Enter number of rows for resource array: ";
    cin >> numberOfRows;
    cout << "Enter number of columns for resource array: ";
    cin >> numberOfColumns;
    vector<vector<int>> resources(numberOfRows, vector<int>(numberOfColumns));
    cout << "Enter resources (with spaces): " << endl;
    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            cin >> resources[i][j];
        }
    }

    cout << "Enter a resource to check if collision happens" << endl;
    cin >> resourceToCheck;

    int countOfCollisions = getCountOfResourceCollisions(numberOfProcesses, processes,
        numberOfRows, numberOfColumns, resources, resourceToCheck);

    cout << "Counts of deadlock = " << countOfCollisions << endl;
    return 0;
}

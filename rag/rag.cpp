#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, row, column, resource, count = 0;
    cout << "I have implemented a 4x3 matrix for resource allocation" << endl;
    cout << "4 processes and 3 columns of resources" << endl;
    cout << "Enter the number of processes: " ;
    cin >> n;
    vector<int> process(n);
    cout << "Enter Process Numbers (0-4 with spaces): " ;
    for (int i = 0; i < n; ++i) {
        cin >> process[i];
    }
    cout << "Enter number of rows for resource array: ";
    cin >> row;
    cout << "Enter number of columns for resource array: ";
    cin >> column;
    vector<vector<int>> Resources(row, vector<int>(column));
    cout << "Enter resources (with spaces): " << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cin >> Resources[i][j];
        }
    }

    cout << "Enter a resource to check if collision happens" << endl;
    cin >> resource;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            if (Resources[i][j] == resource) {
                ++count;
            }
        }
    }

    cout << "Counts of deadlock = " << count << endl;
    return 0;
}


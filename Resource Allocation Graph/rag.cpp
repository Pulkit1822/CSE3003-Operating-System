#include <iostream>
#include <vector>

using namespace std;

int getCountOfResourceCollisions(int n, vector<int> p, int r, int c, vector<vector<int>> res, int rt) {
    int count = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (res[i][j] == rt) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int n, r, c, rt;
    cout << "Enter the number of processes: ";
    cin >> n;
    vector<int> p(n);
    cout << "Enter Process Numbers (0-" << n-1 << " with spaces): ";
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    cout << "Enter number of rows for resource array: ";
    cin >> r;
    cout << "Enter number of columns for resource array: ";
    cin >> c;
    vector<vector<int>> res(r, vector<int>(c));
    cout << "Enter resources (with spaces): " << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> res[i][j];
        }
    }

    cout << "Enter a resource to check if collision happens: ";
    cin >> rt;

    int count = getCountOfResourceCollisions(n, p, r, c, res, rt);

    cout << "Counts of deadlock = " << count << endl;
    return 0;
}

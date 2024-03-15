#include <iostream>
using namespace std;

int main()
{
    int numProcesses, numResources, i, j, k;
    cout << "Enter the number of processes: ";
    cin >> numProcesses;
    cout << "Enter the number of resources: ";
    cin >> numResources;

    int allocation[numProcesses][numResources];
    int max[numProcesses][numResources];
    int available[numResources];

    cout << "Enter the allocation matrix:\n";
    for (i = 0; i < numProcesses; i++) {
        for (j = 0; j < numResources; j++) {
            cin >> allocation[i][j];
        }
    }

    cout << "Enter the max matrix:\n";
    for (i = 0; i < numProcesses; i++) {
        for (j = 0; j < numResources; j++) {
            cin >> max[i][j];
        }
    }

    cout << "Enter the available resources:\n";
    for (j = 0; j < numResources; j++) {
        cin >> available[j];
    }

    int finished[numProcesses], safeSequence[numProcesses], index = 0;
    for (k = 0; k < numProcesses; k++) {
        finished[k] = 0;
    }
    int need[numProcesses][numResources];
    for (i = 0; i < numProcesses; i++) {
        for (j = 0; j < numResources; j++)
            need[i][j] = max[i][j] - allocation[i][j];
    }
    int y = 0;
    for (k = 0; k < numProcesses; k++) {
        for (i = 0; i < numProcesses; i++) {
            if (finished[i] == 0) {

                int flag = 0;
                for (j = 0; j < numResources; j++) {
                    if (need[i][j] > available[j]){
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0) {
                    safeSequence[index++] = i;
                    for (y = 0; y < numResources; y++)
                        available[y] += allocation[i][y];
                    finished[i] = 1;
                }
            }
        }
    }

    int flag = 1;
    
    for(int i=0;i<numProcesses;i++)
    {
    if(finished[i]==0)
    {
        flag=0;
        cout << "The following system is not safe";
        break;
    }
    }
    
    if(flag==1)
    {
    cout << "Following is the SAFE Sequence\n";
    for (i = 0; i < numProcesses - 1; i++)
        cout << " P" << safeSequence[i] << " ->";
    cout << " P" << safeSequence[numProcesses - 1] <<endl;
    }
    

    return (0);
}

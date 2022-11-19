#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q; //N is the number of variable-length arrays, Q is the number of queries
    cin >> n >> q;

    vector<vector<int>> A(n);
    
    // assigns n-number of array in n-dimensional vector
    for (int i=0; i<n; i++){
        int k; // size of array
        cin >> k;

        for(int ii = 0; ii<k; ii++){
            int value;
            cin >> value;

            A[i].push_back(value);
        }
    }

    // Q-queries
    for (int iii = 0; iii<q; iii++){
        int i, j;
        cin >> i >> j;

        cout << A[i][j] << endl;
    }

    return 0;
}
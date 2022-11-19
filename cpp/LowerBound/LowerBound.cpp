#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, check;
    cin >> n;
    vector<int> vetor(n);

    for (int i=0; i<vetor.size(); i++){
        cin >> vetor[i];
    }
    
    cin >> q;
    for (int i = 0; i<q; i++){
        cin >> check;
        auto result = lower_bound(vetor.begin(), vetor.end(), check);
        if (check == *result){
            cout << "Yes " << result-vetor.begin()+1 << endl;
        }
        else{
            cout << "No " << result-vetor.begin()+1 << endl;
        }
    }

    return 0;
}

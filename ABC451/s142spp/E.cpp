#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    vector<vector<int>> A(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cin >> A[i][j];
        }
    }
    
    return 0;
}
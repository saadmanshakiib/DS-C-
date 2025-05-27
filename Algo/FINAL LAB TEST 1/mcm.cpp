#include <iostream>
using namespace std;

const int INF = 1000000000; 

int matrixChainOrder(int p[], int n) {
    int dp[100][100]; 

    for (int i = 1; i < n; i++) {
        dp[i][i] = 0; 
    }

    for (int len = 2; len < n; len++) {
        for (int i = 1; i <= n - len; i++) {
            int j = i + len - 1;///chain starting index = i ///chain ending index = j
            dp[i][j] = INF; //by default setting chains value = max

            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];// calculating cost
                if (cost < dp[i][j]) {
                    dp[i][j] = cost; // if its lower than chains value, set
                }
            }
        }
    }

    return dp[1][n - 1];
}

int main() {
    int p[] = {40, 20, 30, 10, 30}; 
    int n = sizeof(p) / sizeof(p[0]);

    int minCost = matrixChainOrder(p, n);
    cout<<"Minimum number of multiplications: " << minCost << endl;

    return 0;
}

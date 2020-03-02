/*************************************************************************
	> File Name: 43-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月28日 星期六 18时25分50秒
 ************************************************************************/

#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
#define max_n 1000

int val[max_n + 5][max_n + 5] = {0};
int keep[max_n + 5][max_n + 5] = {0};

int dfs(int i, int j, int n) {
    if (i + 1 == n) return val[i][j];
    if (keep[i][j]) return keep[i][j];
    int val1 = dfs(i + 1, j, n);
    int val2 = dfs(i + 1, j + 1, n);
    return keep[i][j] = (val1 > val2 ? val1 : val2) + val[i][j];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    cout << dfs(0, 0, n) << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k = 1;
    int count = 0;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = 0;
    while (k <= n*n) {
        for (int i = count; i<n-count; i++) {
            a[count][i] = k;
            k++;
        }

        for (int i = count+1; i < n-count; i++) {
            a[i][n-count-1] = k;
            k++;
        }

        for (int i = n-count-1-1; i>=count;i--) {
            a[n-count-1][i] = k;
            k++;
        }

        for (int i = n-count-1-1; i>=count+1; i--) {
            a[i][count] = k;
            k++;
        }

        count++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j<n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
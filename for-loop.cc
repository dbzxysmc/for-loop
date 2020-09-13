#include <iostream>

using namespace std;

const int n1 = 10000;
const int n2 = 10000;
int arr[n1][n2];

int main(int argc, char *argv[])
{
    // order 1
    clock_t st = clock();
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            arr[i][j] = 314;
        }
    }
    cout << "writing time of order 1 = " << clock() - st << endl;

    int cnt = 0;
    st = clock();
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            if (arr[i][j] % 10) {
                ++cnt;
            }
        }
    }
    cout << "reading time of order 1 = " << clock() - st << endl;

    // order 2
    st = clock();
    for (int i = 0; i < n2; ++i) {
        for (int j = 0; j < n1; ++j) {
            arr[j][i] = 314;
        }
    }
    cout << "writing time of order 2 = " << clock() - st << endl;

    cnt = 0;
    st = clock();
    for (int i = 0; i < n2; ++i) {
        for (int j = 0; j < n1; ++j) {
            if (arr[j][i] % 10) {
                ++cnt;
            }
        }
    }
    cout << "reading time of order 2 = " << clock() - st << endl;
}

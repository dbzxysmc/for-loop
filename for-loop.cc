#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;


const int row = 1000;
const int col = 10000;
int buf[row][col];


int main(int argc, char * argv[])
{
    srand(time(NULL));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            buf[i][j] = rand();
        }
    }

    clock_t st = clock();
    int64_t sum = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            sum += buf[i][j];
        }
    }
    cout << "time for order 1: " << clock() - st << endl;

    st = clock();
    sum = 0;
    for (int j = 0; j < col; ++j) {
        for (int i = 0; i < row; ++i) {
            sum += buf[i][j];
        }
    }
    cout << "time for order 2: " << clock() - st << endl;
    return 0;
}

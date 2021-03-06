// https://open.kattis.com/problems/inversefactorial

#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

long comp_limit = 1e7;
int comp_len = 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(10);

    long target = 0;
    for (int i = 0; i < comp_len; ++i) {
        long c = getchar();
        if (c >= '0' && c <= '9') {
            target = target * 10 + (c - '0');
        }
    }

    double curr = 1;

    for (long i = 1; true; ++i) {
        curr *= i;
        while (curr >= comp_limit) {
            curr *= 0.1;
        }

        if (floor(curr) == target) {
            cout << i << endl;

            break;
        }
    }

    return 0;
}

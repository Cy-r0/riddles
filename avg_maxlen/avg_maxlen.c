#include "stdio.h"
#include "stdlib.h"


float max(float a, float b) {
    return a > b ? a : b;
}


float min(float a, float b) {
    return a < b ? a : b;
}


int main() {
    double avg_maxlen = 0.0f;
    long long N = 55000000;

    for (int i=0; i<N; i++) {

        float p1 = (float) rand()/RAND_MAX;
        float p2 = (float) rand()/RAND_MAX;

        float l1 = min(p1, p2);
        float l2 = max(p1, p2) - l1;
        float l3 = 1 - l1 - l2;
        /* printf("%f, %f, %f, %f\n", l1, l2, l3, l1 + l2 + l3); */
        float maxlen = max(max(l1, l2), l3);
        avg_maxlen += maxlen;
    }

    avg_maxlen /= N;
    printf("Avg maxlen: %f\nIterations: %d\n", avg_maxlen, N);
}

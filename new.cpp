#include <bits/stdc++.h>
using namespace std;

struct Qubit {
    complex<double> state[2];
    Qubit() { state[0] = 1; state[1] = 0; } // |0>
};

// Apply Hadamard gate
void hadamard(Qubit &q) {
    complex<double> s0 = (q.state[0] + q.state[1]) / sqrt(2);
    complex<double> s1 = (q.state[0] - q.state[1]) / sqrt(2);
    q.state[0] = s0;
    q.state[1] = s1;
}

// Measure qubit
int measure(Qubit &q) {
    double p0 = norm(q.state[0]);
    double r = (double)rand() / RAND_MAX;
    return (r < p0) ? 0 : 1;
}

int main() {
    srand(time(0));
    Qubit q;
    hadamard(q); // put into superposition
    int result = measure(q);
    cout << "Measured: " << result << "\n";
}

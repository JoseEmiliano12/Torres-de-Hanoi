#include <iostream>

class HanoiSolver {
public:
    void solve(int n, char from, char to, char aux) {
        if (n == 1) {
            std::cout << "Move disk 1 from " << from << " to " << to << std::endl;
            return;
        }
        solve(n - 1, from, aux, to);
        std::cout << "Move disk " << n << " from " << from << " to " << to << std::endl;
        solve(n - 1, aux, to, from);
    }
};

int main() {
    HanoiSolver solver;
    int n = 3; // Number of disks
    solver.solve(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}
#include <vector>
#include <numeric>
#include <execution>

int main() {
    std::vector<int> my_vector (1<<30, 1);
    int sum = std::reduce(std::execution::par, my_vector.begin(), my_vector.end(), 0);
    return 0;
}

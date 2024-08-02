#include<bits/stdc++.h>
#include <vector>
#include <cmath>

std::string encode_algorithm(const std::vector<double>& sequence) {
    int n = sequence.size();
    std::vector<double> min_value_fp64(n, INFINITY);
    std::vector<double> max_value_fp64(n, -INFINITY);

    // Determine the range of each value in fp64
    for (int i = 0; i < n; ++i) {
        min_value_fp64[i] = std::min(min_value_fp64[i], sequence[i]);
        max_value_fp64[i] = std::max(max_value_fp64[i], sequence[i]);
    }

    // Determine the data type to use
    char data_type = 'd';
    for (int i = 0; i < n; ++i) {
        if (min_value_fp64[i] < -65504 || max_value_fp64[i] > 65504) {
            data_type = 's';
            break;
        }
    }

    // Create the encoded algorithm
    std::string algorithm = "{";
    algorithm += data_type;
    algorithm += ":";
    for (int i = 1; i <= n; ++i) {
        algorithm += std::to_string(i);
        if (i < n) algorithm += ",";
    }
    algorithm += "}";

    return algorithm;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<double> sequence(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> sequence[i];
    }

    std::cout << encode_algorithm(sequence) << std::endl;
    return 0;
}

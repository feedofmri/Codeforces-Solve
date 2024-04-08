#include <iostream>
#include <string>
#include <vector>

int shortestRepeatingSubstring(const std::string& s) {
    int n = s.length();
    std::vector<int> divisors;
    
    // Find all divisors of n
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    
    int shortest = n;
    
    // Check each divisor
    for (int d : divisors) {
        std::string k = s.substr(0, d);
        bool valid = true;
        
        // Check if k can be repeated to form s
        for (int i = d; i < n; i += d) {
            if (s.substr(i, d) != k) {
                valid = false;
                break;
            }
        }
        
        // If k is valid, update shortest length
        if (valid) {
            shortest = std::min(shortest, d);
        }
    }
    
    return shortest;
}

int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        int n;
        std::string s;
        std::cin >> n >> s;
        
        int result = shortestRepeatingSubstring(s);
        std::cout << result << std::endl;
    }
    
    return 0;
}
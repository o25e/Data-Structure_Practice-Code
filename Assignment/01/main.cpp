#include <iostream>
#include <ctime>     // clock(), clock_t, CLOCKS_PER_SEC
#include <iomanip>   // setprecision

// sum = n(n+1)/2
long long algorihmA(int n) {    
    long long sum = 0;    
    // TODO: implement Algorithm A
    sum = n * (n + 1) / 2;
    return sum;
}

// sum = 1+2+…+n
long long algorihmB(int n) {
    long long sum = 0;    
    // TODO: implement Algorithm B
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

//sum = 0+(1)+(1+1)+(1+1+1)+…+(1+1+…+1)
long long algorihmC(int n) {    
    long long sum = 0;
    // TODO: implement Algorithm C
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            sum += 1;
        }
    }
    return sum;
}
// --------------------------------

double ms_since(std::clock_t start, std::clock_t end) {
    return 1000.0 * (end - start) / CLOCKS_PER_SEC;
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    std::clock_t s = std::clock();
    long long resA = algorihmA(n);
    std::clock_t e = std::clock();
    std::cout << "Algorithm A result: " << resA
              << " | time: " << std::fixed << std::setprecision(3)
              << ms_since(s, e) << " ms\n";

    s = std::clock();
    long long resB = algorihmB(n);
    e = std::clock();
    std::cout << "Algorithm B result: " << resB
              << " | time: " << std::fixed << std::setprecision(3)
              << ms_since(s, e) << " ms\n";

    s = std::clock();
    long long resC = algorihmC(n);
    e = std::clock();
    std::cout << "Algorithm C result: " << resC
              << " | time: " << std::fixed << std::setprecision(3)
              << ms_since(s, e) << " ms\n";
              
    return 0;
}

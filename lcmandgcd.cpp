#include <iostream>
#include <vector>
using namespace std;

// Function to calculate GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
int lcm(int a, int b, int gcd_value) {
    return (a * b) / gcd_value;
}

// Function to compute LCM and GCD and return them as a list
vector<int> lcmAndGcd(int a, int b) {
    int gcd_value = gcd(a, b);
    int lcm_value = lcm(a, b, gcd_value);
    return {lcm_value, gcd_value};
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    vector<int> result = lcmAndGcd(a, b);
    cout << "LCM: " << result[0] << endl;
    cout << "GCD: " << result[1] << endl;

    return 0;
}

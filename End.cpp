#include <iostream>
#include <vector>
using namespace std;

vector<int> increaseVector(vector<int> vec, int n) {
    for (int& num : vec) {
        num += n;
    }
    return vec;
}

int main() {
    vector<int> numbers = { 1, 2, 3, 4, 5 };
    int increment = 10;

    vector<int> increasedNumbers = increaseVector(numbers, increment);

    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Increased vector: ";
    for (int num : increasedNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

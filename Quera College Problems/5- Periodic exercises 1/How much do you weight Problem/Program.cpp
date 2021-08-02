#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float weight, height;
    cin >> weight >> height;
    float BMI = weight / (height * height);
    cout << fixed << setprecision(2) << BMI << "\n";
    if (BMI < 18.5) {
        cout << "Underweight";
    }
    else if (18.5 <= BMI && BMI < 25) {
        cout << "Normal";
    }
    else if (25 <= BMI && BMI < 30) {
        cout << "Overweight";
    }
    else {
        cout << "Obese";
    }
}
//https://quera.ir/college/2572/chapter/31764/lesson/104166/
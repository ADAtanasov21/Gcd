#include <iostream>
using namespace std;

class Gcd 
{
private:
    int num1;
    int num2;

public:
    Gcd(int a, int b) 
    {
        num1 = a;
        num2 = b;
    }

    int calculateGcd() {
        int temp;
        while (num2 != 0) 
        {
            temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        return num1;
    }
};

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    Gcd gcd(num1, num2);
    int result = gcd.calculateGcd();
    cout << result;
    return 0;
}

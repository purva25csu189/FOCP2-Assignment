#include <iostream>
using namespace std;
class Calculator
{
private:
    int a, b;

public:

    // 1️⃣ No return type & no parameters
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    // 2️⃣ No return type but with parameters
    void displayResult(int result)
    {
        cout << "Result = " << result << endl;
    }

    // 3️⃣ Return type but no parameters
    int add()
    {
        return a + b;
    }

    // 4️⃣ Return type with parameters
    int subtract(int x, int y)
    {
        return x - y;
    }

    int multiply(int x, int y)
    {
        return x * y;
    }

    int divide(int x, int y)
    {
        return x / y;
    }

    int modulus(int x, int y)
    {
        return x % y;
    }
};

int main()
{
    Calculator obj;
    int choice, result;

    obj.getData();

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";
    cout << "\n5. Modulus";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            result = obj.add();   // return, no parameter
            obj.displayResult(result);
            break;

        case 2:
            result = obj.subtract(10, 5);  // return with parameter
            obj.displayResult(result);
            break;

        case 3:
            result = obj.multiply(10, 5);
            obj.displayResult(result);
            break;

        case 4:
            result = obj.divide(10, 5);
            obj.displayResult(result);
            break;

        case 5:
            result = obj.modulus(10, 5);
            obj.displayResult(result);
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
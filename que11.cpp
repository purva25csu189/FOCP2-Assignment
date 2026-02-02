/*A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly.*/

/*🔹 Logic to Compute Total Expense with Discount
Start
Input number of items (quantity)
Input price per item
Calculate total cost
total = quantity × price
Check condition
If quantity > 1000
Calculate discount
discount = total × 10 / 100
Else
Discount = 0
Calculate final expense
final_amount = total − discount
Display total, discount, and final amount
End*/

#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price, total, discount = 0, final_amount;

    cout << "Enter number of items: ";
    cin >> quantity;

    cout << "Enter price per item: ";
    cin >> price;

    total = quantity * price;

    if (quantity > 1000) {
        discount = total * 0.10;   // 10% discount
    }

    final_amount = total - discount;

    cout << "Total amount = " << total << endl;
    cout << "Discount = " << discount << endl;
    cout << "Final amount to be paid = " << final_amount << endl;

    return 0;
}
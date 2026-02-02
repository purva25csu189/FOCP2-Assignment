/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.*/

/*Read item number, quantity, and unit price
Calculate total amount
Amount=Quantity×Unit Price
Calculate discount (20%).   Discount=0.20×Amount
Calculate final bill
Net Amount=Amount−Discount*/

#include<iostream>
using namespace std;
int main(){
    int  itemno , qty , unitprice , amount ;
    float discount, netamount;
    cout<<"enter the item number , quantity and unit price : ";
    cin>> itemno>>qty>>unitprice;
    amount = qty*unitprice;
    discount = 0.20 * amount;
    netamount = amount - discount;
    cout<<" amount to be paid after 20percent discount:  "<<netamount;
    return 0;

}
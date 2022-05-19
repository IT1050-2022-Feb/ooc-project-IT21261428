class Order
{ 
private:
char Order_ID[10]; 
char Shipping Address[50];
char MobileNum[10];
char Order_Date[20]
public :
Order(); 
Order(string Order_ID, string Shipping Address, string MobileNum, 
string Order_Date); 
void displayOrderDetails(); 
~Order(); 
};
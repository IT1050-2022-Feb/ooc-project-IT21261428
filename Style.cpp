class Cart
{ 
private:
  int quantity; 
  double totalPrice;
public :
  Cart(); 
  Cart(int quantity, double totalPrice); 
  void displayDetails();
  ~Cart(); 
};


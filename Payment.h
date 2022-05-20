class Payment 
{
  Private:
    string Pay_ID;
    string P_method;
    double P_amount;
    string P_Details;
    string P_date;

  Public:
     Payment(); 
     Payment(string Pay_ID,string P_method,double P_amount,string P_Details,string P_date);
     void displayPaymentetails();
     ~Payment();
};
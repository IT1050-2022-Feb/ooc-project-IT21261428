class Product 
{
  Private:
    string P_ID;
    string Name;
    double P_Price;
    string P_Category;
    
    Public:
     Product(); 
     Product( string P_ID,string Name,double P_Price,string P_Category);
     void displayProductetails();
     ~Product();

};
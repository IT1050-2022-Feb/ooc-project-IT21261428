[8:12 pm, 17/05/2022] Sunera:     string P_date;
[8:14 pm, 17/05/2022] Sunera: class Product 
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
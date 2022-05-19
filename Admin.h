class Admin
{ 
private:
  string Ad_ID; 
  string Ad_Name; 
  string Ad_Email; 
  int Ad_P_no; 
public:
  Admin(); 
  Admin(int aID, string aName, string aEmail, Report *RPT); 
  void Admin::displayAdminDetails() 
  ~Admin(); 
};
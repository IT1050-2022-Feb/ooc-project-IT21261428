class Registered_User
{
private:
    char Reg_ID[10];
    char Name[40];
    char Email[40];
    int Age;
    char Gender[10];
    int phoneNo;
public:
  Registered_User();
  Registered_User(const char Reg_ID[], const   char Uname[], const char Uemail[], int Uphone[], const char Gender[], int age);
  void displayDetails();
   ~Registered_User();
};

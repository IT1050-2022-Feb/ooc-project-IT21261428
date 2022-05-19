class Account
{
private:
  char Acc_ID[10];
  char UserName[40];
  char Password[40];
public:
  Account();
  Account(const char Acc_ID[], const char UserName[], const char
  Password[]);
  void displayDetails();
  ~Account();
};
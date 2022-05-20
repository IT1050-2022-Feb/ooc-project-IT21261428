class Reservation
{
private:
  char Res_ID[10];
  char R_Date[20];
public:
  Reservation();
  Reservation(const char Res_ID[], const char R_date[]);
  void displayDetails();
   ~Reservation();
};

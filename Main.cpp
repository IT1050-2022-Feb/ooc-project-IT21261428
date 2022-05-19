#include <iomanip>
#include <cstring>
#include <Registered_User.h> //Header files
#include <Account.h>
#include <Style.h>
#include <Reservation.h>
#include <Admin.h>
#include <Order.h>
#include <Cart.h>
#include <Product.h>
#include <Payment.h>
#include <Report.h>
#include <Review.h>

using namespace std;

int main () //Main Program
{

Registered_User * reg1;
reg1 = new Registered_User();

Account * Acc1;
Acc1 = new Account();

Style * st1;
st1 = new Style();

Reservation * res1;
res1 = new Reservation();

Admin * ad1;
ad1 = new Admin();

Order * od1;
od1 = new Order();

Cart * ct1;
ct1 = new Cart();

Product * pdc1;
pdc1 = new Product();

Payment * pay1;
pay1 = new Payment();

Report * rp1;
rp1 = new Report();

Review * rev1;
rev1 = new Review();

return 0;
  
}
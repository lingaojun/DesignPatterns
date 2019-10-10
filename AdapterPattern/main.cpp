#include "jack.h"
#include "Chinajack.h"
#include "USAjack.h"
#include "adapter.h"
#include "jackadapter.h"

int main(void)
{
    Jack *USAjack = new USAJack();
    ChinaJack *Chinajack = new JackAdapter(USAjack);
    Chinajack->Charge();
    return 0;
}

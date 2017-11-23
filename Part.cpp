
#include <iostream>
#include "Part.h"

using namespace std;

public Part::Part()
:item_num(0), cost(0.0), qty_on_hand(0), qty_per(0)
{
}

public Part::Part(int item_n, QosIntPN internalPN, string subitem, 
    string pur_desc, string manu_pn, double cst, int quant_per, 
    int quant_onhand, string asset, string income, string cogs,
    string sales_desc)
{
    item_num = item_n;
    int_part_num = internalPN;
    subitem_of = subitem;
    purchase_description = pur_desc;
    mfg_pn = manu_pn;
    cost = cst;
    qty_per = quant_per;
    qty_on_hand = quant_onhand;
    asset_account = asset;
    income_account = income;
    cogs_account = cogs;
    sales_description = sales_desc;
}

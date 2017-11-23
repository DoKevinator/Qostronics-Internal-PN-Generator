#include <iostream>

using namespace std;

struct QosIntPN {
    int customer_code;
    int part_type;
    int SMD_TH;
    int serialize;
};

class Part
{
private:
    int item_num;
    QosIntPN int_part_num;
    string subitem_of;
    string purchase_description;
    string mfg_pn;
    double cost;
    int qty_per;
    int qty_on_hand;
    string asset_account;
    string income_account;
    string cogs_account;
    string sales_description;

public:
    Part();
    int bar;
};

public Part::Part();

public Part::Part(int item_n, QosIntPN internalPN, string subitem, 
    string pur_desc, string manu_pn, double cst, int quant_per, 
    int quant_onhand, string asset, string income, string cogs,
    string sales_desc);





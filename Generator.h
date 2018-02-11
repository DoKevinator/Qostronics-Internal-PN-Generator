#include <iostream>

using namespace std;

struct QosIntPN {
    int customer_code;
    int part_type;
    int SMD_TH;
    int serialize;
};

class Generator
{
private:
    int capacitor_code = 120;
    int connector_code = 200;
    int diode_code = 210;
    int heatsink_code = 310;
    int ic_bga_code = 330;
    int inductor_code = 400;
    int led_code = 410;
    int crystal_oscillator_code = 500;
    int pcb_code = 510;
    int resistor_code = 610;
    int hardware_code = 620;
    int photo_interrupter_code = 700;
    int switch_code = 720;
    int transistor_code = 920;
    

public:
    Generator();
    int bar;
};

public Generator::Generator();

public Generator::Generator(int item_n, QosIntPN internalPN, string subitem, 
    string pur_desc, string manu_pn, double cst, int quant_per, 
    int quant_onhand, string asset, string income, string cogs,
    string sales_desc);





#include <iostream>
#include <cstdint>

using namespace std;

struct statusFlags {
    statusFlags() :masterSwitch(true), myval(0x02) {}
    bool fenceRowsNozzles:1;
    bool masterSwitch:1;
    bool oddNumberOfSections:1;
    bool moreSectionsThanSwitches:1;
    uint8_t myval;
};

int main(int argc, char* argv[])
{
   statusFlags status;
   //for(int i = 0; i < sizeof(statusFlags); i++)
   status.fenceRowsNozzles = true;
    cout << status.fenceRowsNozzles << "," << status.masterSwitch << "," << status.oddNumberOfSections << "," << status.moreSectionsThanSwitches << "," << (status.myval == 2) << "\n";
    cout << "Size of status flags " << sizeof(statusFlags); 
   status.fenceRowsNozzles = false;
}

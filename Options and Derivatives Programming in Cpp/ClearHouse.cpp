//
//  ClearHouse.cpp
//

#include "ClearHouse.hpp"

ClearingHouse *ClearingHouse::s_clearingHouse = nullptr;


ClearingHouse::ClearingHouse()
{
}

ClearingHouse::~ClearingHouse()
{

}

ClearingHouse &ClearingHouse::getClearingHouse()
{
    if (!s_clearingHouse)
    {
        s_clearingHouse = new ClearingHouse();
    }
    return *s_clearingHouse;
}

void ClearingHouse::clearTrade(const Trade &t)
{
}

void useClearingHouse()
{
    Trade trade;
    ClearingHouse &ch = ClearingHouse::getClearingHouse();
    ch.clearTrade(trade);
}

int main() {

   useClearingHouse();

   return 0;
}

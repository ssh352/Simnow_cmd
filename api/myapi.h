#ifndef MYAPI_H
#define MYAPI_H

#include "api/ctpapidefine.h"

class MyApi
{
public:
    MyApi();

    static TradeApi *tradeApi();

    static MdApi *mdApi();

private:
    static TradeApi* m_tradeApi;
    static MdApi* m_mdApi;
};

#endif // MYAPI_H

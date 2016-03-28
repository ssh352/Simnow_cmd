#include "myapi.h"
#include <stdlib.h>
using namespace std;
MyApi::MyApi()
{

}

TradeApi *MyApi::tradeApi()
{
    if (m_tradeApi == NULL){
        m_tradeApi = TradeApi::CreateFtdcTraderApi();
        m_tradeApi->Init();
        //TODO
    }
    return m_tradeApi;
}

MdApi *MyApi::mdApi()
{
    if (m_mdApi == NULL){
        m_mdApi = MdApi::CreateFtdcMdApi();
        m_mdApi->Init();
        //TODO
    }
    return m_mdApi;
}

TradeApi* MyApi::m_tradeApi = NULL;
MdApi* MyApi::m_mdApi = NULL;

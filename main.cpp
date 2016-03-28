#include <iostream>
#include "lib/ThostFtdcTraderApi.h"
using namespace std;

int main(int argc, char *argv[])
{
    auto api = CThostFtdcTraderApi::CreateFtdcTraderApi();
    api->Init();
    cout << "Hello World!"<<endl;
    return 0;
}

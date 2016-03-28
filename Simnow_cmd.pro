TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    api/myapi.cpp \
    api/mymdspi.cpp \
    api/mytradespi.cpp

HEADERS += \
    lib/ThostFtdcMdApi.h \
    lib/ThostFtdcTraderApi.h \
    lib/ThostFtdcUserApiDataType.h \
    lib/ThostFtdcUserApiStruct.h \
    api/myapi.h \
    api/ctpapidefine.h \
    api/mytradespi.h \
    api/mymdspi.h

LIBS    += /home/pxsdirac/Documents/Qt/Simnow_cmd/lib/thostmduserapi.so \
    /home/pxsdirac/Documents/Qt/Simnow_cmd/lib/thosttraderapi.so

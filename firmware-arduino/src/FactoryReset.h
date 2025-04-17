#ifndef FACTORYRESET_H
#define FACTORYRESET_H

#include <Config.h>
#include <nvs_flash.h>
#include <ESPAsyncWebServer.h> 


void factoryResetDevice();
void getFactoryResetStatusFromNVS();
void setFactoryResetStatusInNVS(bool);
void setResetComplete();


#endif

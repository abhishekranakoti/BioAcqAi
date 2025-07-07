#include "adc.h"
#include "uart.h"
#include "wifi_ble.h"

int main(void) {
    initADC();
    initUART();
    initWiFiBLE();

    while (1) {
        int ecg = readADC(ECG_CHANNEL);
        sendDataWiFi(ecg);
    }
}
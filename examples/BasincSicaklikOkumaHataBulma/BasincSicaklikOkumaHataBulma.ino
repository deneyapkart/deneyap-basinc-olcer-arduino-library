/*
 *   MS563702BA03 sensöründen Basınç Sıcaklık Okuma örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensör haberleşmesinde hata bulunursa seri terminale yazdırmaktadır. 
 *   Sesmörden basınç ve Sıcaklık verilerimi okumaktadır. Saniyede bir bu verileri seri terminale yazdırmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap ..... için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-basinc-olcer-arduino-library <------
 *
 */

#include <Deneyap_BasincOlcer.h>                       // Deneyap_BasincOlcer.h kütüphanesi eklendi
 
AtmosphericPressure BaroSensor;                        // AtmosphericPressure için class tanımlanması

float basinc;
float sicaklik;

void setup() {
    Serial.begin(115200);                              // Seri terminal başlatıldı
    BaroSensor.begin(0x76);                            // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatıldı
}

void loop() {
    if (!BaroSensor.isOK()) {
        Serial.print("Sensor bulunamadi. Hata: ");
        Serial.println(BaroSensor.getError());        // Hata Seri Terminale yazdırıldı
        BaroSensor.begin(0x76);                       // Cihazların haberleşmesi yeniden başlatılıyor...
    }
    else {
        basinc = BaroSensor.getPressure();            // Basınç değeri okundu
        Serial.print("Basinc: ");
        Serial.println(basinc);                       // Basınç değeri seri terminale yazdırıldı

        sicaklik = BaroSensor.getTemp();              // Sıcaklık değeri okundu
        Serial.print("Sicaklik: ");
        Serial.println(sicaklik);                     // Sıcaklık değeri seri terminale yazdırıldı
    }
    delay(1000);                                      // 1 saniye bekleme süresi
}

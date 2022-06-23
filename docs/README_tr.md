# Deneyap Basınç Ölçer MS563702BA03 Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Basınç Ölçer MS563702BA03 için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M40**, **mpv1.0**
- `MCU` MS563702BA03
- `Ağırlık`
- `Modul Boyutları` 
- `I2C Adres` 0x76

| Adres |  | 
| :--- | :---     |
| 0x76 | varsayılan adres |

## :closed_book:Dokümanlar
Deneyap Basınç Ölçer MS563702BA03

[MS563702BA03-datasheet](https://www.te.com/commerce/DocumentDelivery/DDEController?Action=srchrtrv&DocNm=MS5637-02BA03&DocType=Data+Sheet&DocLang=English)

[Arduino Kütüphanesi Nasıl İndirilir](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Basınç Ölçer MS563702BA03
Bu Arduino kütüphanesi Deneyap Basınç Ölçer MS563702BA03 I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz.

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Basınç Ölçer ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir. 

| Basınç Ölçer | Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     | Güç    | 3.3V    |
| GND      | Toprak |GND      |
| SDA      | I2C Data  | SDA pini |
| SCL      | I2C Clock | SCL pini|
| NC       | bağlantı yok |   |

## :bookmark_tabs:Lisans Bilgisi 
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-basinc-olcer-arduino-library/blob/master/LICENSE) dosyasını inceleyin.
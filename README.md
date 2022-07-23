# Arduino İle Akıllı Çöp Kutusu
Bildiğiniz üzere çöp kutuları mikrop yönünden oldukça zengin, olabildiğince az dokunmak gerekiyor. Bu proje ile çöp kutunuza dokunmanıza gerek kalmayacak.. 🙂

Çalışma mantığı ise çok basit, daha önceki projelerden bildiğiniz üzere  **Hc-SR04**  mesafe sensörü ile uzaklık ölçe biliyorduk. Bugünde daha önce yaptığımız mesafe ölçeri biraz daha geliştirip, bir servo motor ekleyip, elimizi algıladığında kapağı açan bir proje yapacağız..

Genel bilgileri edindiğimize göre zaman kaybetmeden projemize geçelim. 🙂

Her zamanki gibi bir kaç malzemeye ihtiyacımız var..
## Akıllı Çöp Kutusu Malzeme Listesi

-   Herhangi Bir Arduino Modeli (Eğer temelli olarak yapacaksanız küçük bir arduino modeli kullanmanızı tavsiye ederim pro gibi 🙂 )
-   Servo Motor (benim çöp kutum kartondan olduğu için ben mini servo kullandım sizin kullanacağınız çöp kutusuna göre servo kullanmanız gerekmekte.)
-   Hc-SR04 Ultrasonik Mesafe Sensörü
-   Gerekli Ekipmanlar

## Kutunun Hazırlanması

Sensörümüzü elimizi algılayacak şekilde kutuya monte ediyoruz aşağıda olduğu gibi..

[![](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-4.webp)](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-4.webp)

Kapağı kaldırması için servonun başına ek bir parça yapıştırıyoruz aşağıdaki gibi..

-   [![](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-1.webp)](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-1.webp)
    
-   [![](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-2-1.webp)](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-2-1.webp)
    
-   [![](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-3.webp)](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-3.webp)
    

Sonrasında servomuzu kutumuza monte edip açıp kapanabilirliğini kontrol ediyoruz..

[![](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-5.webp)](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-5.webp)

Kapalı Pozisyon

[![](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-6.webp)](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-6.webp)

Açık Pozisyon

## Akıllı Çöp Kutusu Devre Şeması

Alt tarafta çizdiğimiz devre şemasına bakarak uygun arduino modeline göre devremizi breadboard’umuza kuralım.

[![](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-devre-%C5%9Femas%C4%B1.webp)](https://donanimplus.com/wp-content/uploads/2019/03/Ak%C4%B1ll%C4%B1-%C3%87%C3%B6p-Kutusu-devre-%C5%9Femas%C4%B1.webp)

**Dikkat:**  Arkadaşlar daha öncede belirttiğim gibi eğer ağır bir kapak kaldırıp indirecekseniz torku daha büyük bir servo kullanmalısınız ben karton kutu olduğu için küçük kullandım ve ayrıca gücünü alternatif bir kaynaktan karşılamalısınız bunu da öncede anlatmıştım sanıyorum..

Bir projenin daha sonuna geldik umarım faydalı olmuştur arkadaşlar anlamadığınız yada kafanıza takılan yerler olursa lütfen kişisel sosyal medya hesaplarımdan ulaşmayı ihmal etmeyin.. Kolay Gelsin.. 🙂

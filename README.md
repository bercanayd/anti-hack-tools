
# Hackerlara karşı araç takımı

bu proje programınızın debugger kullanılarak çözülmesinin engellenmesi için gereken basit araçları içerir:

-Debugger portunun dinleyicisi

-pencere isimleri alınarak zararlı yazılımların tespit edilmesi.

-exe dosyasının hash ile şifresinin alınarak uygulama açıldığında kontrol edilmesi.

-lisans anahtarından zaman kontrolü (opsiyonel)




## Bilgisayarınızda Çalıştırın

Projeyi klonlayın ve programınızn olduğu dosyaya atın. derleme için -lBcrypt -mconsole da gerkeiyor.

bu program örnek lisans dosyası da barındırmaktadır. bu lisans dosyasına son tarihi yazabilirsiniz. zorunlu değil bu.

temiz kullanmım açısından ana dizindeki main.cpp kullanmanız gerekeiyor. bu dosyada InitExport metodunu göreceksiniz. bu metodun içine çalıştırmak istediğiniz metodu ekleyin ve programnızda direkt bu metodu çağırın. buradaki diğer metod: 
  ```bash 
void ifdebugdedected(void)
```
şüpheli durum tespit edildğimde ne yapacanıza buradan karar verin.

tüm araçları secuiry klaösründe bulablirsiniz. temel metodlar şunlar:

✨✨
  ```bash 
  CheckProcessesNames();
```
windows apisi kullnarak pencere isimleirnden çalışan dosyaları kontrol eder. çalışan dosyaların listesi antidebug.cpp'de aşağıdaki kısıma eklenmelidir:

```bash 
const std::string antidebugProcessName[] = {
    "spotify.exe",
    "spotify"
};
```


✨ 
```bash 
void checkdebugport(void)
```

antidebugger klaösründe bulunur ve debug portlarını dinler. debug bulunduğunda ne yapılacağını belirlemek isityorsanız aynı dosyadaki ifdebugdedected() metoduna yapılmasını isteidklerinizi yazın.

✨ 

```bash 
bool CheckDLLHash(const char* file_path)
```

filehashcheck.cpp'De bulunur. yüklediğinz dosyanın exe mi yoksa lic dosyası mı olduğnu kontrol edip beklenen değer ile karşılatırır. hesaplanan değeri debug olarak görüp kodlarda manuel değiştirin.





## Destek

Destek için fake@fake.com adresine e-posta gönderin veya Slack kanalımıza katılın.

  
## İlişkili Projeler

İşte bazı ilgili projeler

[Awesome README](https://github.com/matiassingers/awesome-readme)

  
## Kullanılan Teknolojiler

**İstemci:** C++

**Gerekli Kütüphaneler:** -lBcrypt -mconsole

  
## Ortam Değişkenleri

Bu projeyi çalıştırmak için aşağıdaki ortam değişkenlerini .env dosyanıza eklemeniz gerekecek

`API_KEY`

`ANOTHER_API_KEY`

  


# Hackerlara karşı araç takımı

bu proje programınızın debugger kullanılarak çözülmesinin engellenmesi için gereken basit araçları içerir:

-Debugger portunun dinleyicisi

-pencere isimleri alınarak zararlı yazılımların tespit edilmesi.

-exe dosyasının hash ile şifresinin alınarak uygulama açıldığında kontrol edilmesi.

-lisans anahtarından zaman kontrolü (opsiyonel)




## Bilgisayarınızda Çalıştırın

Projeyi klonlayın ve programınızn olduğu dosyaya atın. derleme için -lBcrypt -mconsole da gerkeiyor.

bu program örnek lisans dosyası da barındırmaktadır. bu lisans dosyasına son tarihi yazabilirsiniz. zorunlu değil bu.

temiz kullanmım açısından ana dizindeki main.cpp kullanmanız gerekeiyor. bu dosyada InitExport metodunu göreceksiniz. bu metodun içine çalıştırmak istediğiniz metodu ekleyin. security kalsöründe bulacağınız temel metodlar şunlar:

✨
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






## Destek

Destek için fake@fake.com adresine e-posta gönderin veya Slack kanalımıza katılın.

  
## İlişkili Projeler

İşte bazı ilgili projeler

[Awesome README](https://github.com/matiassingers/awesome-readme)

  
## Kullanılan Teknolojiler

**İstemci:** C++

**Gerekli Kütüphaneler:** -lBcrypt -mconsole

  
## Demo

Demoya gif veya bağlantı ekleyin

  
## Yükleme 

benim-projem'i npm kullanarak yükleyin

```bash 
  npm install my-project
  cd my-project
```
    
## Testler

Testleri çalıştırmak için aşağıdaki komutu çalıştırın

```bash
  npm run test
```

  
## Kullanım/Örnekler

```javascript
import Component from 'benim-projem'

function App() {
  return <Component />
}
```

  
## Ortam Değişkenleri

Bu projeyi çalıştırmak için aşağıdaki ortam değişkenlerini .env dosyanıza eklemeniz gerekecek

`API_KEY`

`ANOTHER_API_KEY`

  

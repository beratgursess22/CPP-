# CPP Proje Rehberi

Bu repodaki tüm `.cpp` dosyaları için kısa açıklamalar aşağıdadır.
Amaç: Her dosyanın ne yaptığını ve hangi C++ konusunu öğrettiğini tek yerde görmek.

## cpp00

### ex00
- `cpp00/ex00/megaphone.cpp`: Argümanları büyük harfe çevirip yazdırır. Temel giriş/çıkış ve string işleme pratiği öğretir.

### ex01
- `cpp00/ex01/main.cpp`: Telefon rehberi akışını (ADD, SEARCH, EXIT) yönetir. Program akışı ve kullanıcı etkileşimini öğretir.
- `cpp00/ex01/PhoneBook.cpp`: Rehberde kişi ekleme/arama mantığını uygular. Basit veri modeli ve sınıf sorumluluğu ayrımını öğretir.
- `cpp00/ex01/Contact.cpp`: Kişi alanlarını saklar ve gösterir. Encapsulation (kapsülleme) mantığını öğretir.

## cpp01

### ex00
- `cpp01/ex00/main.cpp`: `newZombie` ve `randomChump` kullanımını test eder. Heap/stack farkını uygulamalı gösterir.
- `cpp01/ex00/newZombie.cpp`: Heap üzerinde `Zombie` üretir. Dinamik bellek yönetimini öğretir.
- `cpp01/ex00/randomChump.cpp`: Stack üzerinde geçici `Zombie` üretir ve duyurur. Yaşam süresi (lifetime) farkını öğretir.
- `cpp01/ex00/Zombie.cpp`: `Zombie` davranışlarını uygular. Sınıf metotlarının temel kullanımını öğretir.

### ex01
- `cpp01/ex01/main.cpp`: Zombi sürüsü oluşturma akışını test eder. Dizi halinde nesne yönetimini öğretir.
- `cpp01/ex01/zombieHorde.cpp`: Dinamik `Zombie` dizisi oluşturur. Dizi tahsisi ve cleanup sorumluluğunu öğretir.
- `cpp01/ex01/Zombie.cpp`: Sürüdeki zombilerin davranışını uygular. Tek sınıfın çoklu nesnelerde kullanımını öğretir.

### ex02
- `cpp01/ex02/main.cpp`: Pointer ve reference farkını gösterir. Bellek adresleme ve referans semantiğini öğretir.

### ex03
- `cpp01/ex03/main.cpp`: `HumanA`, `HumanB`, `Weapon` ilişkisini test eder. Nesneler arası ilişki modellemeyi öğretir.
- `cpp01/ex03/HumanA.cpp`: Referans ile silah tutan sınıf davranışı. Constructor bağımlılığı ve reference kullanımını öğretir.
- `cpp01/ex03/HumanB.cpp`: Pointer ile silah tutan sınıf davranışı. Opsiyonel bağımlılık ve null kontrolünü öğretir.
- `cpp01/ex03/Weapon.cpp`: Silah tipini saklar/değiştirir. Getter/setter ve paylaşılan durum yönetimini öğretir.

### ex04
- `cpp01/ex04/main.cpp`: Dosya metninde string değiştirme sürecini başlatır. Dosya işleme akışını öğretir.
- `cpp01/ex04/Read.cpp`: Girdi dosyasını okur. `fstream` ile dosya okuma pratiği öğretir.
- `cpp01/ex04/Change.cpp`: Metin içinde hedef string’i değiştirir. Arama/değiştirme algoritmasını öğretir.
- `cpp01/ex04/Convert.cpp`: Dönüşüm adımlarını orkestre eder. Fonksiyonel ayrım ve akış organizasyonunu öğretir.
- `cpp01/ex04/Write.cpp`: Sonucu çıktı dosyasına yazar. Dosya yazma ve hata kontrolünü öğretir.

### ex05
- `cpp01/ex05/main.cpp`: `Harl` mesaj seviyelerini test eder. Üye fonksiyon çağrısı ve dispatch fikrini öğretir.
- `cpp01/ex05/Harl.cpp`: Seviye bazlı şikayet metotlarını uygular. Fonksiyon pointer/haritalama yaklaşımını öğretir.

### ex06
- `cpp01/ex06/main.cpp`: Filtrelenmiş şikayet seviyelerini çalıştırır. Koşullu akış ve seviye eşleme öğretir.
- `cpp01/ex06/Harl.cpp`: Seviye seçimine göre çıktı üretir. Kontrol akışı ve durum bazlı davranışı öğretir.

## cpp02

### ex00
- `cpp02/ex00/main.cpp`: `Fixed` sınıfının temel davranışını dener. Ortodoks kanonik form başlangıcını öğretir.
- `cpp02/ex00/Fixed.cpp`: Sabit noktalı sayı sınıfının temel üyelerini uygular. Constructor/copy/destructor pratiği öğretir.

### ex01
- `cpp02/ex01/main.cpp`: Int/float dönüşümlerini test eder. Sayısal dönüşüm doğruluğunu öğretir.
- `cpp02/ex01/Fixed.cpp`: `toInt`, `toFloat` gibi dönüşümleri uygular. Sabit noktalı temsil mantığını öğretir.

### ex02
- `cpp02/ex02/main.cpp`: Operatör aşırı yüklemelerini test eder. Kullanıcı tanımlı tiplerde operatör tasarımını öğretir.
- `cpp02/ex02/Fixed.cpp`: Karşılaştırma, aritmetik, artırım/azaltım operatörlerini uygular. Operator overloading pratiği öğretir.

## cpp03

### ex00
- `cpp03/ex00/main.cpp`: `ClayTrap` temel kullanım senaryosu. Sınıf davranışı ve durum güncellemesini öğretir.
- `cpp03/ex00/ClayTrap.cpp`: Temel trap sınıfı davranışları (`attack`, hasar alma, onarım). Durum yönetimini öğretir.

### ex01
- `cpp03/ex01/main.cpp`: Türetilmiş sınıf davranışını test eder. Mirasın temel etkisini öğretir.
- `cpp03/ex01/ClayTrap.cpp`: Taban sınıf implementasyonu. Yeniden kullanım fikrini öğretir.
- `cpp03/ex01/ScavTrap.cpp`: Türetilmiş sınıfa özel davranış ekler. Inheritance ve method genişletmeyi öğretir.

### ex02
- `cpp03/ex02/main.cpp`: `ScavTrap` ve `FragTrap` kullanım karşılaştırması. Çoklu türev sınıf davranışını öğretir.
- `cpp03/ex02/ClayTrap.cpp`: Ortak taban mantığı. Kod tekrarını azaltma yaklaşımını öğretir.
- `cpp03/ex02/ScavTrap.cpp`: Türe özgü override/genişletme. Polimorfik tasarım fikrini pekiştirir.
- `cpp03/ex02/FragTrap.cpp`: Farklı türev sınıf yetenekleri. Sınıf uzmanlaşmasını öğretir.

### ex03
- `cpp03/ex03/main.cpp`: `DiamondTrap` senaryolarını test eder. Çoklu kalıtımın etkilerini öğretir.
- `cpp03/ex03/ClayTrap.cpp`: Ortak taban sınıf davranışı. Miras zinciri temelini sağlar.
- `cpp03/ex03/ScavTrap.cpp`: Bir kalıtım kolunun davranışları. Çoklu kalıtımda rol ayrımını öğretir.
- `cpp03/ex03/FragTrap.cpp`: Diğer kalıtım kolu davranışları. Özellik birleştirmeyi öğretir.
- `cpp03/ex03/DiamondTrap.cpp`: Çoklu kalıtımla hibrit sınıfı uygular. Diamond problem bağlamını öğretir.

## cpp04

### ex00
- `cpp04/ex00/main.cpp`: `Animal`, `Dog`, `Cat`, `WrongAnimal` testleri. Polimorfizm ve yanlış kullanım farkını öğretir.
- `cpp04/ex00/Animal.cpp`: Taban sınıf arayüzü/davranışı. Sanal fonksiyon temelini öğretir.
- `cpp04/ex00/Dog.cpp`: Doğru override örneği. Runtime polymorphism pratiği öğretir.
- `cpp04/ex00/Cat.cpp`: Doğru override örneği. Türetilmiş sınıf davranışını öğretir.
- `cpp04/ex00/WrongAnimal.cpp`: Sanal olmayan tasarım örneği. Neden virtual gerektiğini öğretir.
- `cpp04/ex00/WrongCat.cpp`: Wrong tabandan türeyen örnek. Hatalı polimorfizm sonucunu gösterir.

### ex01
- `cpp04/ex01/main.cpp`: Deep copy ve polymorphism testleri. Kaynak yönetiminde kopyalama doğruluğunu öğretir.
- `cpp04/ex01/Animal.cpp`: Sanal taban davranışı. Ortak arayüz kullanımını sürdürür.
- `cpp04/ex01/Dog.cpp`: `Brain` içeren köpek sınıfı. Bileşim (composition) ve kopyalama sorumluluğunu öğretir.
- `cpp04/ex01/Cat.cpp`: `Brain` içeren kedi sınıfı. Rule of Three ihtiyacını öğretir.
- `cpp04/ex01/Brain.cpp`: Fikir dizisi benzeri iç veri yönetimi. Deep copy gereksinimini öğretir.
- `cpp04/ex01/WrongAnimal.cpp`: Yanlış tasarım karşılaştırması. Virtual eksikliğini pekiştirir.
- `cpp04/ex01/WrongCat.cpp`: Yanlış override davranışı örneği. Bağlanma (binding) farkını gösterir.

### ex02
- `cpp04/ex02/main.cpp`: Soyut taban sınıfla nesne üretim sınırlarını test eder. Abstract class kavramını öğretir.
- `cpp04/ex02/Animal.cpp`: Soyut/sanal arayüz tabanı. Arayüz odaklı tasarımı öğretir.
- `cpp04/ex02/Dog.cpp`: Soyut tabanı gerçekleştiren türev sınıf. Kontrat implementasyonunu öğretir.
- `cpp04/ex02/Cat.cpp`: Soyut tabanı gerçekleştiren türev sınıf. Polimorfik uyumu öğretir.
- `cpp04/ex02/Brain.cpp`: İç durum nesnesi yönetimi. Kaynak sahipliği ve kopyalamayı öğretir.
- `cpp04/ex02/WrongAnimal.cpp`: Karşılaştırmalı yanlış model. Tasarım farklarını görünür kılar.
- `cpp04/ex02/WrongCat.cpp`: Yanlış modelin türevi. Beklenmeyen davranış riskini öğretir.

## cpp05

### ex00
- `cpp05/ex00/main.cpp`: `Bureaucrat` not aralığı ve istisna senaryolarını test eder. Exception handling öğretir.
- `cpp05/ex00/Bureaucrat.cpp`: Derece artırma/azaltma ve sınır kontrolü uygular. Sınıf invariant’larını korumayı öğretir.

### ex01
- `cpp05/ex01/main.cpp`: `Bureaucrat` ve `Form` etkileşimini test eder. Nesneler arası yetki akışını öğretir.
- `cpp05/ex01/Bureaucrat.cpp`: Form imzalama girişimi gibi davranışları yönetir. İstisna güvenliğini öğretir.
- `cpp05/ex01/Form.cpp`: İmzalanma koşullarını ve derece sınırlarını uygular. Kurallı domain modeli öğretir.

### ex02
- `cpp05/ex02/main.cpp`: Farklı form türlerinin imzalanma/çalıştırılma akışını test eder. Polimorfik işlem yürütmeyi öğretir.
- `cpp05/ex02/Bureaucrat.cpp`: Form çalıştırma yetkisini uygular. İşlem önkoşulu kontrolünü öğretir.
- `cpp05/ex02/AForm.cpp`: Soyut form tabanı ve ortak kurallar. Template method benzeri yapıyı öğretir.
- `cpp05/ex02/ShrubberyCreationForm.cpp`: Dosyaya ASCII ağaç üretir. Türe özgü execute mantığını öğretir.
- `cpp05/ex02/RobotomyRequestForm.cpp`: Rastgele başarı/başarısızlık işlemi simüle eder. Deterministik olmayan akışı öğretir.
- `cpp05/ex02/PresidentialPardonForm.cpp`: Sabit bir “affetme” davranışı uygular. Kalıtımla davranış özelleştirmeyi öğretir.

### ex03
- `cpp05/ex03/main.cpp`: `Intern` ile form üretimi ve yürütme testleri. Factory yaklaşımını öğretir.
- `cpp05/ex03/Bureaucrat.cpp`: Yetkili kullanıcı davranışları. İş kuralı doğrulamasını sürdürür.
- `cpp05/ex03/AForm.cpp`: Ortak form kontratı. Soyutlama seviyesini korur.
- `cpp05/ex03/ShrubberyCreationForm.cpp`: Türe özgü yürütme örneği. Dosya çıktı üretimini pekiştirir.
- `cpp05/ex03/RobotomyRequestForm.cpp`: Rastgele sonuçlu yürütme örneği. Runtime davranış çeşitliliğini öğretir.
- `cpp05/ex03/PresidentialPardonForm.cpp`: İmza/çalıştırma koşullu özel aksiyon. Polimorfizmi sürdürür.
- `cpp05/ex03/Intern.cpp`: İsimden doğru form nesnesini üretir. Factory Method pratiği öğretir.

## cpp06

### ex00
- `cpp06/ex00/main.cpp`: Scalar dönüştürme arayüzünü test eder. Parse ve tür dönüştürme akışını öğretir.
- `cpp06/ex00/ScalarConverter.cpp`: String girdiyi `char/int/float/double`’a çevirmeye çalışır. Casting ve edge-case yönetimini öğretir.

### ex01
- `cpp06/ex01/main.cpp`: `Data` pointer’ını serialize/deserialize test eder. Pointer-int dönüşümünü öğretir.
- `cpp06/ex01/Serializer.cpp`: `uintptr_t` ile güvenli dönüştürme yapar. Düşük seviye temsil farkındalığını öğretir.

### ex02
- `cpp06/ex02/main.cpp`: RTTI ile gerçek tür tespiti senaryosu. `dynamic_cast` kullanımını öğretir.
- `cpp06/ex02/Base.cpp`: Polimorfik taban sınıf iskeleti. RTTI’nin çalışması için sanal destructor gereğini öğretir.

## cpp07

### ex00
- `cpp07/ex00/main.cpp`: Template fonksiyonları (`swap`, `min`, `max`) test eder. Generic programlama temellerini öğretir.

### ex01
- `cpp07/ex01/main.cpp`: `iter` benzeri template fonksiyon uygulamasını test eder. Fonksiyonu fonksiyona verme (callback) pratiği öğretir.

### ex02
- `cpp07/ex02/main.cpp`: Template dizi sınıfının kullanımını test eder. Generic sınıf, sınır kontrolü ve istisna yönetimini öğretir.

## cpp08

### ex00
- `cpp08/ex00/main.cpp`: STL kaplarda eleman arama (`easyfind`) senaryolarını test eder. Iterator ve algoritma kullanımını öğretir.

### ex01
- `cpp08/ex01/main.cpp`: `Span` sınıfı akışını test eder. Sayı aralık analizi problemini öğretir.
- `cpp08/ex01/Span.cpp`: Kısa/uzun span hesaplama, kapasite kontrolü uygular. STL + algoritmik düşünmeyi öğretir.

### ex02
- `cpp08/ex02/main.cpp`: `MutantStack` davranışını test eder. Container adapter genişletmeyi ve iterator erişimini öğretir.

## cpp09

### ex00
- `cpp09/ex00/main.cpp`: Bitcoin input dosyası işleme akışını başlatır. Dosya+veri doğrulama boru hattını öğretir.
- `cpp09/ex00/BitcoinExchange.cpp`: Tarih/değer doğrulama ve kur hesaplaması yapar. Harita yapısı ve domain validasyonu öğretir.

### ex01
- `cpp09/ex01/main.cpp`: RPN hesaplayıcıyı çalıştırır. Komut satırı ifadelerinin işlenmesini öğretir.
- `cpp09/ex01/RPN.cpp`: Ters Lehçe ifadesini stack ile çözer. Yığın tabanlı ifade değerlendirmeyi öğretir.

### ex02
- `cpp09/ex02/main.cpp`: Sıralama kıyaslama senaryolarını başlatır. Benchmark benzeri ölçüm akışını öğretir.
- `cpp09/ex02/PmergeMe.cpp`: Ford-Johnson/Pmerge yaklaşımı ile `vector` ve `deque` üstünde sıralama yapar. Algoritma tasarımı ve performans karşılaştırmasını öğretir.

---

## Genel Not
- `main.cpp` dosyaları çoğunlukla test/senaryo sürücüsüdür.
- Diğer `.cpp` dosyaları ilgili sınıfın veya yardımcı işlemin implementasyonudur.
- Bu yapı, 42 C++ modüllerindeki konuları adım adım pekiştirmek için düzenlenmiştir.

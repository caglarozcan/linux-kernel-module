# linux-kernel-module

# Modül nedir?

Kernel modülü, kernele sonradan eklenip çıkartılabilen kodlardır. C ile geşliştirilen Kernel
Modülleri aslında sıradan bir programdan çok da farklı değildir. Kernelinizde kurulu olan
modülleri lsmod komutuyla görebilirsiniz.

Modüller programlardan farklı olarak main() işlevine sahip değildirler. main() işlevi yerine
"init_module" ve "cleanup_module" işlev çifti vardır:

# firstModule.c Kodlarının açıklaması.

1) linux/module.h header dosyası bütün kernel modüllerde kullanılır.
2) linux/kernel.h header dosyası ise printk() kullanabilmek için kullanılır. printk() işlevi, kernel seviyesinde ekrana yazdırma için kullanılır. C kütüphanesindeki printf() fonkisyonu gibi davranır fakat kernel
seviyesinde ekrana direk olarak çıktı vermez. Yazdırılan değerler "/var/log/syslog" dosyasında ya da dmesg komutunun çıktısında görülebilir.
3) Derleme işlemine “make” komutu ile başlanır.
4) Derleme işleminden sonra, modülün kernelin içerisine yerleştirilmesi gerekir. Bu işlemi yapabilmek için root yetkisi gerekir. “sudo insmod my_module.ko” komutu ile kernel'a modül eklenir.
5) Herhangi bir modülü silmek için "rmmod <modIsmi.ko>" komutu kullanılır.

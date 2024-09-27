# Format Penyimpanan Data

Berbagai format file dapat digunakan untuk menyimpan dan mentransfer data melalui jaringan. File teks bersifat dapat dibaca manusia, sehingga sering digunakan untuk file konfigurasi. Namun, mentransfer data dalam format teks melalui jaringan tidak selalu efisien, karena biasanya lebih besar dibandingkan dengan file biner yang setara.

## Format Teks

### JSON (JavaScript Object Notation)
- **Deskripsi**: Format ini merepresentasikan objek di mana data disimpan dalam pasangan kunci-nilai.
- **Kelebihan**: Ringan, mudah dibaca dan ditulis, serta didukung oleh banyak bahasa pemrograman.
- **Penggunaan**: Umumnya digunakan dalam API web untuk pertukaran data.

### YAML (Yet Another Markup Language)
- **Deskripsi**: Format ini mirip dengan bahasa markup seperti HTML, tetapi lebih minimalis, karena tidak memiliki tag pembuka atau penutup.
- **Kelebihan**: Lebih mudah diedit dan dipahami, ideal untuk file konfigurasi yang kompleks.
- **Penggunaan**: Sering digunakan dalam file konfigurasi aplikasi, seperti Docker Compose dan Ansible.

### XML (eXtensible Markup Language)
- **Deskripsi**: Format ini mirip dengan HTML, di mana data dibungkus dalam tag pembuka dan penutup.
- **Kelebihan**: Mendukung skema yang memungkinkan validasi struktur data, dan lebih fleksibel dalam mendefinisikan elemen data.
- **Penggunaan**: Digunakan dalam berbagai aplikasi, termasuk dokumen web, pengaturan konfigurasi, dan data yang disimpan dalam basis data.

## Format Biner

### Message Pack
- **Deskripsi**: Merupakan analog biner dari JSON yang memungkinkan pengemasan data secara lebih efisien.
- **Kelebihan**: Dapat mengemas data 15-20% lebih efisien dibandingkan dengan JSON, dan lebih cepat dalam serialisasi dan deserialisasi.
- **Penggunaan**: Cocok untuk aplikasi yang memerlukan performa tinggi dan bandwidth rendah.

### BSON (Binary JavaScript Object Notation)
- **Deskripsi**: Merupakan superset dari JSON yang mencakup tambahan tipe data seperti ekspresi reguler, data biner, dan tanggal.
- **Kelebihan**: Lebih fleksibel dalam menyimpan data yang beragam, memungkinkan pengaksesan yang lebih cepat.
- **Penggunaan**: Digunakan oleh MongoDB untuk penyimpanan data yang kompleks.

### ProtoBuf (Protocol Buffers)
- **Deskripsi**: Merupakan alternatif biner untuk format teks XML, lebih sederhana, lebih kompak, dan lebih cepat.
- **Kelebihan**: Memungkinkan pengkodean dan penguraian data dengan lebih cepat, serta menghasilkan ukuran file yang lebih kecil.
- **Penggunaan**: Sering digunakan dalam komunikasi antar layanan (microservices) dan untuk menyimpan data dalam aplikasi yang memerlukan efisiensi tinggi.

## Referensi
- [JSON](https://www.json.org/)
- [YAML](https://yaml.org/)
- [XML](https://www.w3.org/XML/)
- [Message Pack](https://msgpack.org/)
- [BSON](http://bsonspec.org/)
- [Protocol Buffers](https://developers.google.com/protocol-buffers)


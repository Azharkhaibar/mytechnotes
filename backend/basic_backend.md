# Dasar-Dasar Backend 🚀

## Pengembangan Backend
Pengembangan Backend adalah tentang membuat bagian ‘server’ dari aplikasi dan semua yang berkomunikasi antara database dan browser. Ini mencakup server, database, API, dan sistem operasi yang mendukung tampilan depan aplikasi. 🌐

### Contoh
Blog ini, isinya, dan Medium.com semuanya disajikan oleh server dan diambil dari database (nanti kita bahas lebih lanjut). Ini adalah semua hal yang tidak terlihat atau langsung berinteraksi dengan pengguna, tapi mendukung apa yang terjadi. 🔍

## Pengembangan Frontend
Pengembangan Frontend, juga disebut ‘pemrograman sisi klien’, adalah tentang apa yang kamu lihat di browser. Seorang pengembang frontend menganalisis kode, merancang, dan memperbaiki aplikasi, serta bertanggung jawab untuk penampilan website. Mereka menggunakan variasi HTML, CSS, dan JavaScript. 🎨

### Contoh
Semua yang kamu lihat sekarang ini dihasilkan oleh bagian depan! 💻

---

## Istilah Penting dalam Pemrograman 📝

### Algoritma
Langkah-langkah untuk menyelesaikan tugas tertentu. Saat membuat algoritma, pengembang mendokumentasikan semua langkah yang diperlukan untuk mendapatkan solusi dari suatu masalah.

#### Contoh
Membuat rencana belanja di toko kelontong. 🛒

### API
Singkatan dari Application Programming Interface. Ini memungkinkan dua program berbeda untuk berkomunikasi dengan membuat beberapa bagian dari kode website tersedia untuk pengembang.

#### Contoh
Jika kamu ingin membuat pemutar musik yang sesuai dengan suasana hati kamu, kamu bisa menggunakan Spotify API untuk mendapatkan genre lagu. 🎶

### Big Data
Kumpulan data yang sangat besar yang terlalu besar untuk perangkat lunak data tradisional. Data ini dianalisis untuk mengungkap pola, tren, dan hubungan, terutama yang berkaitan dengan perilaku dan interaksi manusia. Hadoop adalah perangkat lunak populer untuk mengelolanya. 📊

### Notasi Big-O
Sebuah persamaan matematika yang menggambarkan performa atau kompleksitas algoritma. Secara khusus, itu menggambarkan skenario terburuk, waktu eksekusi yang dibutuhkan, atau ruang yang digunakan (misalnya, di memori atau disk) oleh sebuah algoritma. 🧮

#### Beberapa Link untuk Menjelajahi Big-O Notation
- [Big-O Taught by a Self Programmer](#)
- [All you need to know about “Big O Notation” to crack your next coding interview](#)
- [Big-O Notation (Terima kasih untuk Eric, instruktur kita untuk ini!)](#)

### Browser
Program yang kamu gunakan untuk mengakses web. 🌍

#### Contoh
Chrome, Firefox, atau Safari.

### Cache
Tempat penyimpanan sementara untuk data. Ketika kamu mengunjungi sebuah website, file yang kamu minta otomatis disimpan di sini. Jika kamu kembali ke website yang sama dalam waktu dekat, browser akan mengambil file yang diperlukan dari cache, bukan dari server asli — jadi halaman web akan dimuat lebih cepat. ⚡️

### Cookies
Data yang dikirim oleh server internet ke browser. Setiap kali browser mengakses server yang sama, ia mengirimkan data kembali sebagai cara untuk melacak bagaimana (dan seberapa sering) ia mengakses server tersebut.

#### Contoh
Ini adalah cara untuk menyimpan login di komputermu, seperti Netflix atau Hulu. 🍪

### Database
Struktur yang menyimpan informasi. Dalam konteks web, kapan saja kamu meminta sesuatu dari sebuah website, database bertanggung jawab untuk menerima permintaan itu, mengambil data, dan mengembalikannya ke website. 💾

### Struktur Data
Cara mengorganisir dan menyimpan data untuk efisiensi maksimum. Ini memudahkan pencarian, akses, pengurutan, penyisipan, dan penghapusan data. 📚

#### Contoh
Linked Lists, Stacks, Queues, dan Sets.

### Domain
Alamat untuk sebuah website yang dimasukkan ke dalam browser. Domain dibagi menjadi dua tingkat: domain tingkat atas, “Medium”, dan domain tingkat kedua, “.com”. 🌐

### HTTP
Hypertext Transfer Protocol. Digunakan untuk mentransfer data di internet. HTTP mengirimkan data (misalnya, dokumen HTML atau gambar) dari program server HTTP (server web) ke program klien HTTP (browser web). 🔄

### Arsitektur Informasi
Praktik mengorganisir informasi yang kompleks dengan cara yang jelas dan logis. Dalam hal website dan aplikasi, ini berarti menciptakan struktur yang ramah pengguna sehingga pengguna mudah menemukan informasi. 🗂️

### MVC
Model, View, Controller. Pola desain yang sangat populer digunakan untuk mengembangkan aplikasi web. Model adalah data dari aplikasi kamu, View adalah antarmuka untuk melihat dan mengubah data, dan Controller adalah operasi yang dapat dilakukan pada data.

#### Contoh
Bayangkan kamu di bar dan memesan Cosmopolitan. Bahan-bahan yang dibutuhkan bartender mewakili model. Daftar langkah-langkah yang diingat bartender adalah controller, dan view adalah minuman enak yang sudah jadi. 🍹

### Redirects
Pengalihan otomatis dari satu URL ke URL lainnya.

#### Contoh
Bagaimana mengetik gogle.com tetap membawamu ke google.com. 🔗

### Server
Komputer kuat yang menjalankan perangkat lunak backend, database dengan data website. Intinya, komputer yang memungkinkan pengguna mengakses website kamu. 💻

### SSL
Secure Sockets Layer. Teknologi keamanan yang digunakan untuk membangun tautan terenkripsi antara server web dan browser. Tautan ini memastikan semua data yang dikirim antara server web dan browser tetap pribadi. 🔒

#### Contoh
Pernahkah kamu memperhatikan beberapa halaman web memiliki “http” vs “https”? Huruf ‘s’ itu memastikan informasi kamu aman dan membuat koneksi yang aman. 🛡️

## EPS 2

# Istilah Backend

1. **Framework**: Kumpulan pustaka dan alat yang menyediakan struktur dasar untuk membangun aplikasi backend. Contoh: Django (Python), Express (Node.js), dan Ruby on Rails (Ruby).

2. **Middleware**: Perangkat lunak yang berfungsi sebagai penghubung antara sistem operasi atau database dan aplikasi. Middleware membantu dalam pengolahan permintaan, autentikasi, dan logging.

3. **RESTful API**: Arsitektur untuk membangun API yang memanfaatkan prinsip REST (Representational State Transfer). API ini menggunakan HTTP requests untuk mengelola data.

4. **GraphQL**: Bahasa kueri untuk API yang memungkinkan klien meminta hanya data yang mereka butuhkan, mengurangi jumlah data yang ditransfer.

5. **WebSocket**: Protokol yang memungkinkan komunikasi dua arah antara klien dan server secara real-time. Cocok untuk aplikasi seperti chat dan game online.

6. **ORM (Object-Relational Mapping)**: Teknik yang memungkinkan pengembang untuk berinteraksi dengan database menggunakan objek di dalam kode, mengurangi kebutuhan untuk menulis query SQL secara manual. Contoh: Sequelize (Node.js) dan Hibernate (Java).

7. **Serverless Architecture**: Model komputasi di mana pengembang tidak perlu mengelola server fisik atau virtual. Mereka hanya perlu menulis kode dan layanan cloud yang menangani infrastruktur. Contoh: AWS Lambda.

8. **Authentication**: Proses untuk memverifikasi identitas pengguna. Ini bisa dilakukan melalui berbagai metode, seperti username/password, token, atau OAuth.

9. **Authorization**: Proses yang menentukan hak akses pengguna setelah mereka terautentikasi. Misalnya, menentukan apakah pengguna dapat mengakses data tertentu atau melakukan tindakan tertentu.

10. **Load Balancing**: Teknik yang mendistribusikan lalu lintas jaringan atau aplikasi ke beberapa server untuk memastikan kinerja yang optimal dan menghindari kelebihan beban pada satu server.

11. **Caching**: Proses menyimpan salinan data di lokasi sementara untuk meningkatkan kecepatan akses data di masa depan. Contoh: Redis dan Memcached.

12. **Database Sharding**: Teknik pemisahan data di antara beberapa database untuk meningkatkan kinerja dan skala. Ini memungkinkan sistem untuk menangani lebih banyak permintaan dengan lebih efisien.

13. **Microservices**: Arsitektur pengembangan perangkat lunak di mana aplikasi dibangun sebagai kumpulan layanan kecil dan independen yang saling berkomunikasi. Setiap layanan bertanggung jawab untuk fungsi tertentu.

14. **CI/CD (Continuous Integration/Continuous Deployment)**: Praktik pengembangan perangkat lunak yang memungkinkan perubahan kode secara otomatis diuji dan dideploy ke lingkungan produksi dengan cepat dan efisien.

15. **API Rate Limiting**: Pembatasan jumlah permintaan yang dapat dibuat oleh klien dalam jangka waktu tertentu. Ini membantu mencegah penyalahgunaan dan menjaga kinerja API.

16. **Data Migration**: Proses memindahkan data dari satu sistem atau format ke sistem atau format lain. Ini sering dilakukan saat memutakhirkan atau mengganti sistem database.

17. **Logging**: Proses pencatatan informasi tentang aktivitas dan kejadian dalam aplikasi. Logging membantu dalam pemecahan masalah dan analisis kinerja.

18. **Dependency Injection**: Pola desain yang memungkinkan objek untuk menerima ketergantungan mereka dari luar, alih-alih menciptakan ketergantungan tersebut secara langsung. Ini meningkatkan modularitas dan uji coba kode.

19. **API Documentation**: Penjelasan dan petunjuk tentang cara menggunakan API. Dokumentasi yang baik memungkinkan pengembang lain memahami dan menggunakan API dengan efisien.

20. **Cloud Computing**: Model pengiriman layanan komputasi melalui internet (cloud). Ini memungkinkan penyimpanan dan pemrosesan data tanpa memerlukan infrastruktur lokal, menghemat biaya dan waktu.

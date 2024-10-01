# Pertanyaan Umum tentang Data Engineering

Beberapa pertanyaan yang sering diajukan tentang data engineering akan menjelaskan pemahaman dasar tentang apa yang dilakukan oleh seorang data engineer dalam kehidupan sehari-harinya.

## Dasar-Dasar Data Engineering

1. **Apa itu Data Engineering?**
   Data Engineering melibatkan perancangan, pembangunan, dan pemeliharaan sistem yang mengumpulkan, menyimpan, dan memproses data untuk analisis dan pelaporan. 📊

2. **Apa perbedaan antara data engineer dan data scientist?**
   Data engineer fokus pada membangun dan memelihara infrastruktur untuk menangani dan memproses data, sementara data scientist fokus pada menganalisis dan menghasilkan wawasan dari data. 🔍

3. **Jelaskan proses ETL.**
   ETL adalah singkatan dari Extract, Transform, Load. Ini melibatkan ekstraksi data dari berbagai sumber, mentransformasikannya untuk sesuai dengan model data target, dan kemudian memuatnya ke dalam data warehouse atau basis data. ⚙️

4. **Apa saja alat ETL yang populer?**
   - Apache NiFi
   - Apache Spark
   - Talend
   - Apache Airflow
   - Informatica
   - Microsoft SSIS

5. **Apa itu data pipeline?**
   Data pipeline adalah rangkaian proses dan operasi yang memindahkan data dari sumber ke tujuan, sering kali melibatkan ekstraksi, transformasi, dan pemuatan. 🚀

6. **Apa itu data warehousing?**
   Data warehousing adalah proses mengumpulkan, menyimpan, dan mengelola data dari berbagai sumber untuk mendukung intelijen bisnis dan pelaporan. 📈

7. **Jelaskan konsep partisi data.**
   Partisi data melibatkan pembagian dataset besar menjadi segmen yang lebih kecil dan lebih mudah dikelola berdasarkan kriteria tertentu, sering kali meningkatkan kinerja kueri. 📉

## Penyimpanan Data

8. **Apa perbedaan antara data warehouse dan data lake?**
   Data warehouse menyimpan data terstruktur untuk kueri analitis, sementara data lake menyimpan data mentah dan tidak terstruktur untuk berbagai tugas pemrosesan data. 🏞️

9. **Apa tujuan normalisasi data dalam basis data?**
   Normalisasi data mengurangi redundansi data dan meningkatkan integritas data dengan mengorganisir data ke dalam tabel terpisah untuk meminimalkan duplikasi. 🗂️

10. **Jelaskan teorema CAP.**
    Teorema CAP menyatakan bahwa dalam sistem data terdistribusi, Anda tidak dapat memiliki ketiga hal: Konsistensi, Ketersediaan, dan Toleransi Partisi secara bersamaan. ⚖️

11. **Apa itu sharding dalam sistem basis data?**
    Sharding melibatkan distribusi basis data besar di beberapa server untuk meningkatkan kinerja dan skalabilitas. 🔄

12. **Apa perbedaan antara NoSQL dan basis data relasional?**
    Basis data NoSQL dirancang untuk data yang tidak terstruktur atau semi-terstruktur dan menawarkan skalabilitas yang lebih baik, sementara basis data relasional cocok untuk data terstruktur dan memberikan konsistensi yang kuat. 🥇

## Pemrosesan Data

13. **Apa itu Apache Hadoop?**
    Hadoop adalah kerangka kerja open-source untuk memproses dan menyimpan dataset besar di seluruh kluster komputer terdistribusi. 🖥️

14. **Jelaskan MapReduce.**
    MapReduce adalah model pemrograman yang digunakan untuk memproses dan menghasilkan dataset besar yang dapat diparalelkan di seluruh kluster terdistribusi. 🌐

15. **Apa itu Apache Spark?**
    Apache Spark adalah mesin pemrosesan dan analisis data open-source yang menyediakan kemampuan pemrosesan data cepat dalam memori. ⚡

16. **Apa perbedaan antara pemrosesan batch dan pemrosesan stream?**
    Pemrosesan batch melibatkan pemrosesan data dalam volume besar pada interval terjadwal, sementara pemrosesan stream menangani data secara real-time saat dihasilkan. 🕒

17. **Bagaimana kompresi data memengaruhi pemrosesan data?**
    Kompresi data mengurangi kebutuhan penyimpanan dan dapat meningkatkan kecepatan pemrosesan data dengan mengurangi jumlah data yang perlu dibaca dari penyimpanan. 💨

## Pemodelan Data

18. **Apa itu model data?**
    Model data adalah representasi konseptual tentang bagaimana data diorganisir, disimpan, dan diakses dalam sistem basis data. 📘

19. **Apa perbedaan antara star schema dan snowflake schema?**
    Keduanya adalah teknik dalam data warehousing. Star schema memiliki tabel fakta terpusat yang terhubung ke tabel dimensi, sementara snowflake schema menormalkan tabel dimensi untuk mengurangi redundansi. ❄️

20. **Jelaskan konsep evolusi skema.**
    Evolusi skema mengacu pada kemampuan untuk memodifikasi struktur skema basis data seiring waktu sambil mempertahankan data dan aplikasi yang ada. 🔄

21. **Apa itu surrogate key?**
    Surrogate key adalah pengidentifikasi unik yang diberikan kepada catatan dalam basis data, sering digunakan sebagai kunci utama, terutama ketika kunci alami kompleks atau rentan terhadap perubahan. 🗝️

## Integrasi Data

22. **Apa itu federasi data?**
    Federasi data adalah proses mengintegrasikan data dari berbagai sumber secara real-time untuk memberikan tampilan yang terpadu tanpa menyalin data ke dalam repositori pusat. 🌉

23. **Jelaskan konsep change data capture (CDC).**
    CDC adalah teknik yang digunakan untuk mengidentifikasi dan menangkap perubahan yang dilakukan pada basis data sehingga perubahan ini dapat dipropagasikan ke sistem atau basis data lain. 🔄

24. **Apa itu virtualisasi data?**
    Virtualisasi data memungkinkan pengguna mengakses data dari berbagai sumber tanpa perlu memindahkan atau menggandakan data secara fisik. 🌐

## Kualitas Data

25. **Mengapa kualitas data penting?**
    Kualitas data memastikan bahwa data yang digunakan untuk analisis dan pengambilan keputusan akurat, lengkap, dan dapat diandalkan. ✅

26. **Apa saja masalah kualitas data yang umum?**
    - Duplikasi catatan
    - Nilai yang hilang
    - Format yang tidak konsisten
    - Informasi yang kadaluarsa

27. **Bagaimana Anda dapat mengatasi masalah kualitas data?**
    Implementasikan validasi data, gunakan format yang terstandarisasi, lakukan pembersihan data secara berkala, dan tetapkan praktik tata kelola data. 🧹

## Tata Kelola dan Keamanan Data

28. **Apa itu tata kelola data?**
    Tata kelola data melibatkan penetapan kebijakan, prosedur, dan standar untuk mengelola dan memastikan kualitas serta keamanan data. 📜

29. **Jelaskan data masking.**
    Data masking adalah proses menyembunyikan data sensitif dengan cara yang mempertahankan format aslinya tetapi menyembunyikan nilai sebenarnya. 🕶️

30. **Apa itu enkripsi dan mengapa penting dalam data engineering?**
    Enkripsi adalah proses mengubah data menjadi kode untuk mencegah akses tidak sah. Ini penting untuk melindungi data sensitif selama penyimpanan dan transmisi. 🔐

## Teknologi Big Data

31. **Apa itu Apache Kafka?**
    Kafka adalah platform streaming peristiwa terdistribusi yang digunakan untuk membangun pipeline data real-time dan aplikasi streaming. 📈

32. **Jelaskan HBase.**
    HBase adalah basis data NoSQL terdistribusi yang dioptimalkan untuk operasi baca dan tulis acak pada dataset besar. 🗄️

33. **Apa itu Apache Cassandra?**
    Cassandra adalah basis data NoSQL terdistribusi yang dirancang untuk menangani sejumlah besar data di beberapa node dengan ketersediaan dan skalabilitas tinggi. 🌍

# Dasar-Dasar Data Engineering

## 1. Apa itu Data Engineering?
Data Engineering melibatkan perancjangan, pembangunan, dan pemeliharaan sistem yang mengumpulkan, menyimpan, dan memproses data untuk analisis dan pelaporan.

## 2. Apa perbedaan antara data engineer dan data scientist?
Data engineer fokus pada membangun dan memelihara infrastruktur untuk menangani dan memproses data, sementara data scientist fokus pada menganalisis dan menghasilkan wawasan dari data.

## 3. Jelaskan proses ETL.
ETL adalah singkatan dari Extract, Transform, Load. Ini melibatkan ekstraksi data dari berbagai sumber, transformasi agar sesuai dengan model data target, dan kemudian memuatnya ke dalam gudang data atau basis data.

## 4. Apa saja alat ETL yang populer?
Apache NiFi, Apache Spark, Talend, Apache Airflow, Informatica, Microsoft SSIS, dll.

## 5. Apa itu data pipeline?
Data pipeline adalah serangkaian proses dan operasi yang memindahkan data dari sumber ke tujuan, sering melibatkan ekstraksi, transformasi, dan pemuatan.

## 6. Apa itu data warehousing?
Data warehousing adalah proses mengumpulkan, menyimpan, dan mengelola data dari berbagai sumber untuk mendukung kecerdasan bisnis dan pelaporan.

## 7. Jelaskan konsep partisi data.
Partisi data melibatkan membagi dataset besar menjadi segmen-segmen yang lebih kecil dan lebih mudah dikelola berdasarkan kriteria tertentu, sering kali meningkatkan kinerja kueri.

# Penyimpanan Data

## 8. Apa perbedaan antara data warehouse dan data lake?
Data warehouse menyimpan data terstruktur untuk kueri analitis, sementara data lake menyimpan data mentah dan tidak terstruktur untuk berbagai tugas pemrosesan data.

## 9. Apa tujuan normalisasi data dalam basis data?
Normalisasi data mengurangi redundansi data dan meningkatkan integritas data dengan mengorganisir data ke dalam tabel terpisah untuk meminimalkan duplikasi.

## 10. Jelaskan teorema CAP.
Teorema CAP menyatakan bahwa dalam sistem data terdistribusi, Anda tidak dapat memiliki ketiga hal: Konsistensi, Ketersediaan, dan Toleransi Partisi secara bersamaan.

## 11. Apa itu sharding dalam sistem basis data?
Sharding melibatkan mendistribusikan basis data besar ke beberapa server untuk meningkatkan kinerja dan skalabilitas.

## 12. Apa perbedaan antara basis data NoSQL dan relasional?
Basis data NoSQL dirancang untuk data tidak terstruktur atau semi-terstruktur dan menawarkan skalabilitas yang lebih baik, sementara basis data relasional cocok untuk data terstruktur dan memberikan konsistensi yang kuat.

# Pemrosesan Data

## 13. Apa itu Apache Hadoop?
Hadoop adalah kerangka kerja sumber terbuka untuk memproses dan menyimpan dataset besar di seluruh kluster komputer terdistribusi.

## 14. Jelaskan MapReduce.
MapReduce adalah model pemrograman yang digunakan untuk memproses dan menghasilkan dataset besar yang dapat diparalelkan di seluruh kluster terdistribusi.

## 15. Apa itu Apache Spark?
Apache Spark adalah mesin pemrosesan dan analitik data sumber terbuka yang menyediakan kemampuan pemrosesan data dalam memori yang cepat.

## 16. Apa perbedaan antara pemrosesan batch dan pemrosesan aliran?
Pemrosesan batch melibatkan pemrosesan data dalam volume besar pada interval yang dijadwalkan, sementara pemrosesan aliran menangani data secara real-time saat dihasilkan.

## 17. Bagaimana kompresi data mempengaruhi pemrosesan data?
Kompresi data mengurangi kebutuhan penyimpanan dan dapat meningkatkan kecepatan pemrosesan data dengan mengurangi jumlah data yang perlu dibaca dari penyimpanan.

# Pemodelan Data

## 18. Apa itu model data?
Model data adalah representasi konseptual tentang bagaimana data diorganisir, disimpan, dan diakses dalam sistem basis data.

## 19. Apa perbedaan antara skema bintang dan skema salju?
Keduanya adalah teknik pengolahan data warehouse. Skema bintang memiliki tabel fakta terpusat yang terhubung ke tabel dimensi, sementara skema salju menormalkan tabel dimensi untuk mengurangi redundansi.

## 20. Jelaskan konsep evolusi skema.
Evolusi skema mengacu pada kemampuan untuk memodifikasi struktur skema basis data seiring waktu sambil mempertahankan data dan aplikasi yang ada.

## 21. Apa itu kunci pengganti?
Kunci pengganti adalah pengidentifikasi unik yang ditugaskan untuk catatan dalam basis data, sering digunakan sebagai kunci primer, terutama ketika kunci alami kompleks atau rentan terhadap perubahan.

# Integrasi Data

## 22. Apa itu federasi data?
Federasi data adalah proses mengintegrasikan data dari berbagai sumber secara real-time untuk memberikan pandangan terpadu tanpa menyalin data ke dalam repositori pusat.

## 23. Jelaskan konsep pengambilan data perubahan (CDC).
CDC adalah teknik yang digunakan untuk mengidentifikasi dan menangkap perubahan yang dilakukan pada basis data sehingga perubahan ini dapat dipropagasikan ke sistem atau basis data lain.

## 24. Apa itu virtualisasi data?
Virtualisasi data memungkinkan pengguna mengakses data dari berbagai sumber tanpa perlu memindahkan atau menggandakan data secara fisik.

# Kualitas Data

## 25. Mengapa kualitas data penting?
Kualitas data memastikan bahwa data yang digunakan untuk analisis dan pengambilan keputusan akurat, lengkap, dan dapat diandalkan.

## 26. Apa saja masalah kualitas data yang umum?
Catatan duplikat, nilai yang hilang, format yang tidak konsisten, informasi yang usang, dll.

## 27. Bagaimana cara mengatasi masalah kualitas data?
Terapkan validasi data, gunakan format standar, lakukan pembersihan data secara berkala, dan tetapkan praktik tata kelola data.

# Tata Kelola dan Keamanan Data

## 28. Apa itu tata kelola data?
Tata kelola data melibatkan penetapan kebijakan, prosedur, dan standar untuk mengelola dan memastikan kualitas serta keamanan data.

## 29. Jelaskan pemalsuan data.
Pemalsuan data adalah proses menyembunyikan data sensitif dengan cara yang mempertahankan format aslinya tetapi menyembunyikan nilai sebenarnya.

## 30. Apa itu enkripsi dan mengapa penting dalam rekayasa data?
Enkripsi adalah proses mengubah data menjadi kode untuk mencegah akses yang tidak sah. Ini penting untuk melindungi data sensitif selama penyimpanan dan transmisi.

# Teknologi Big Data

## 31. Apa itu Apache Kafka?
Kafka adalah platform streaming peristiwa terdistribusi yang digunakan untuk membangun pipeline data real-time dan aplikasi streaming.

## 32. Jelaskan HBase.
HBase adalah basis data NoSQL terdistribusi yang dioptimalkan untuk operasi baca dan tulis acak pada dataset besar.

## 33. Apa itu Apache Cassandra?
Cassandra adalah basis data NoSQL terdistribusi yang dirancang untuk menangani jumlah data yang besar di berbagai node dengan ketersediaan dan skalabilitas yang tinggi.

# Data Engineering Cloud

## 34. Apa saja keuntungan menggunakan layanan cloud untuk rekayasa data?
Skalabilitas, fleksibilitas, pengurangan manajemen infrastruktur, harga bayar sesuai pemakaian, dan integrasi yang lebih mudah dengan layanan cloud lainnya.

## 35. Apa itu AWS Glue?
AWS Glue adalah layanan ETL terkelola yang memudahkan pemindahan data antara berbagai sumber data dan gudang data.

## 36. Jelaskan Azure Data Factory.
Azure Data Factory adalah layanan integrasi data berbasis cloud yang memungkinkan Anda membuat, menjadwalkan, dan mengelola pipeline data.

# Optimasi Kinerja

## 37. Bagaimana Anda dapat mengoptimalkan kinerja pipeline data?
Gunakan pengindeksan, partisi data, caching, dan kerangka pemrosesan terdistribusi untuk meningkatkan kecepatan kueri dan pemrosesan.

## 38. Apa itu denormalisasi data?
Denormalisasi data melibatkan penyimpanan data redundan untuk meningkatkan kinerja kueri dengan biaya meningkatnya kebutuhan penyimpanan.

# Integrasi Pembelajaran Mesin

## 39. Bagaimana rekayasa data mendukung inisiatif pembelajaran mesin?
Data engineer menyediakan data yang bersih dan terstruktur dengan baik kepada data scientist untuk pelatihan dan pengujian model pembelajaran mesin.

## 40. Jelaskan rekayasa fitur dalam konteks pembelajaran mesin.
Rekayasa fitur adalah proses menciptakan fitur baru atau mengubah fitur yang ada untuk meningkatkan kinerja model pembelajaran mesin.

# Kontrol Versi dan Kolaborasi

## 41. Mengapa kontrol versi penting dalam rekayasa data?
Kontrol versi membantu melacak perubahan pada kode, skrip, dan konfigurasi, memfasilitasi kolaborasi dan memastikan reproduksibilitas.

## 42. Apa itu Git, dan bagaimana penggunaannya dalam rekayasa data?
Git adalah sistem kontrol versi yang melacak perubahan pada kode dan file. Ini digunakan untuk mengelola skrip, konfigurasi, dan kode terkait pipeline data.

# Sistem Terdistribusi

## 43. Jelaskan konsep konsistensi akhir.
Konsistensi akhir adalah sifat sistem terdistribusi di mana perubahan data pada akhirnya akan menyebar melalui sistem, memastikan semua salinan berkonvergensi ke keadaan yang sama.

## 44. Apa itu cache terdistribusi?
Cache terdistribusi adalah sistem yang menyimpan data yang sering diakses di memori di beberapa node untuk meningkatkan kecepatan akses data.

# Pemrograman dan Scripting

## 45. Bahasa pemrograman apa saja yang umum digunakan dalam rekayasa data?
Python, Java, Scala, dan SQL adalah bahasa pemrograman yang umum digunakan untuk tugas rekayasa data.

## 46. Jelaskan cara menangani perubahan skema data dalam pipeline ETL.
Gunakan teknik seperti evolusi skema, versi, dan transformasi data untuk mengakomodasi perubahan skema tanpa merusak pipeline.

# Penjadwalan Pekerjaan dan Automasi

## 47. Apa itu Apache Airflow?
Apache Airflow adalah platform sumber terbuka untuk secara programatis membuat, menjadwalkan, dan memantau alur kerja dan pipeline data.

## 48. Mengapa penjadwalan pekerjaan penting dalam rekayasa data?
Penjadwalan pekerjaan memastikan bahwa pipeline data, proses ETL, dan tugas lainnya berjalan pada waktu atau pemicu tertentu, meningkatkan otomatisasi dan konsistensi.

# Pemecahan Masalah dan Debugging

## 49. Bagaimana Anda memecahkan masalah kinerja dalam pipeline data?
Pantau penggunaan sumber daya, identifikasi bottleneck, profil eksekusi kueri, dan optimalkan langkah pemrosesan data.

## 50. Apa langkah-langkah yang akan Anda ambil untuk mendiagnosis masalah kualitas data dalam dataset?
Periksa catatan yang hilang atau duplikat, validasi sumber data, periksa transformasi data, dan kolaborasi dengan pemilik sumber data.

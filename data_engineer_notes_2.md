# 💻 Apa Itu _Data Engineer_?

_Data engineer_ saat ini menjadi salah satu pekerjaan yang sering kita dengar. Namun, apakah kamu penasaran sebenarnya: apa _sih_ yang dilakukan seorang _data engineer_? Yuk, kita bahas!

## 🔍 Apa Itu _Data Engineer_?

_Data engineer_ adalah seorang dengan tanggung jawab mengumpulkan, memproses, mengelola, dan menyimpan data dari berbagai sumber yang berbeda sehingga dapat mendukung proses bisnis yang membutuhkannya. Secara garis besar, ia bertugas membangun sistem atau infrastruktur agar data yang telah dikumpulkan dapat digunakan oleh para _data analyst_ serta _data scientist_ dengan cepat dan mudah.

## ⚙️ _Extract, Transform, Load_: Tugas Utama Seorang _Data Engineer_

![Extract, Transform, Load: Tugas Utama Seorang Data Engineer](https://dicoding-assets.sgp1.cdn.digitaloceanspaces.com/blog/wp-content/uploads/2024/06/Asset-1-5.png)

_Extract, transform, load_ atau biasa disingkat ETL adalah proses fundamental dalam _data engineering_. Seorang _data engineer_ akan membangun _pipeline_ untuk mengubah data mentah menjadi format yang cocok dianalisis. Prosesnya sebagai berikut:

1. **Ekstrak data yang relevan dari sumbernya. (_Extract_)**  
   Di sini, data mentah dari berbagai sumber, yaitu basis data, _file_ teks, Rest API dan lain-lain, akan disalin dan disimpan pada _staging area_. _Staging area_ adalah penyimpanan perantara (_intermediate storage_) untuk menyimpan data selama proses ETL.

2. **Transformasi data agar sesuai untuk analisis. (_Transform_)**  
   Dalam area _staging_, data mentah akan diproses. Di sini, data diubah dan dikonsolidasikan untuk kasus penggunaan analitis yang diharapkan. Fase proses transformasi ini dapat mencakup hal-hal berikut:
   - Memfilter, membersihkan, menggabungkan, menghilangkan duplikasi, memvalidasi, dan mengautentikasi [data](https://www.dicoding.com/blog/apa-itu-data-yuk-kenalan-dulu-dengannya/) (menghapus data yang merupakan data rahasia atau pribadi).
   - Melakukan perhitungan, penerjemahan, atau meringkas data; misalnya mengubah _header_ baris dan kolom, mengonversi mata uang atau satuan pengukuran lainnya, mengedit format _string_, dan lainnya.
   - Menghapus, mengenkripsi, atau melindungi data yang diatur oleh regulator industri atau pemerintah.
   - Memformat data ke dalam tabel atau tabel gabungan agar sesuai dengan skema pada data _warehouse_ tujuan.

3. **Memuat data ke sistem data _warehouse_ tujuan. (_Load_)**  
   Dalam proses ini, data dari area _staging_ akan dipindahkan ke sistem data _warehouse_. Untuk sebagian besar organisasi yang menggunakan ETL, prosesnya terotomatisasi dan kontinu. Berikut adalah dua metode pemuatan data.
   - **_Full Load_**: seluruh data akan dipindahkan ke _data warehouse_ sekaligus. Pemuatan jenis ini biasanya terjadi saat pertama kali Anda memindahkan data ke _data warehouse_.
   - **_Incremental Load_**: data yang berubah atau ditambahkan akan dipindahkan ke _data warehouse_. Proses _incremental load_ ini akan dilakukan secara berkala. Ada dua cara penerapan _incremental load_, yaitu **_streaming incremental load_**, yakni data akan dimasukkan ke _data warehouse_ segera setelah data baru menyelesaikan proses di _staging area_; cara yang kedua adalah **_batch incremental load_**, yaitu data akan dipindahkan secara periodik.

Sebagai alternatif dari teknik ETL, dikenal juga istilah ELT atau _extract, load, transform_. Pada teknik ini, proses _load_ dilakukan sebelum melakukan transformasi data. ELT populer dengan penerapannya bersama [infrastruktur _cloud_](https://www.dicoding.com/blog/mengenal-layanan-storage-di-cloud/) yang membuat _data warehouse_ memiliki cukup _processing power_ untuk melakukan transformasi data. 

ELT bekerja dengan baik untuk kumpulan data bervolume tinggi dan tidak terstruktur serta sering dilakukan pemuatan. Perencanaan analitik dapat dilakukan setelah ekstraksi dan penyimpanan data. Sebagian besar transformasi dilakukan dalam tahap analitik dan tahap ELT berfokus pada pemuatan data mentah dengan hanya sedikit penyesuaian ke _data warehouse_.

![ELT atau extract, load, transform](https://dicoding-assets.sgp1.cdn.digitaloceanspaces.com/blog/wp-content/uploads/2024/06/Asset-2-2.png)

## 🛠️ _Skillset_ Seorang _Data Engineer_

_Data engineer_ adalah pekerjaan yang membutuhkan kemampuan yang baik dalam berbagai _skill_ sebagai berikut.

1. **_Programming_**  
   Kemampuan _programming_ sangat diperlukan dalam mengerjakan pekerjaan _data engineering_. _Programming_ diperlukan dalam membangun _pipeline_ integrasi data, automatisasi, melakukan _data transforming_, dan lain-lain.

2. **_Cloud Computing_**  
   Ada banyak layanan infrastruktur _cloud computing_ yang digunakan dalam proses mengumpulkan, menyimpan, hingga menganalisis data, misalnya layanan _data lake_/_data warehouse_, seperti [snowflake](https://www.snowflake.com/en/data-cloud/workloads/data-lake/), [Azure Data Lake](https://azure.microsoft.com/en-us/solutions/data-lake), [Amazon Redshift](https://aws.amazon.com/redshift/), dan [Google BigQuery](https://cloud.google.com/bigquery?hl=id).  
   ![Skillset Seorang Data Engineer: Cloud Computing](https://dicoding-assets.sgp1.cdn.digitaloceanspaces.com/blog/wp-content/uploads/2024/06/Asset-3-1.png)

3. **_Database System_**  
   Pemahaman terhadap sistem basis data, seperti _relational database_ dan _document database_, tentunya sangat penting bagi seorang _data engineer_ yang akan bergelut dengan data.

4. **_Data Mining_**  
   Pemahaman mengenai _data mining_ juga menjadi _skill_ yang sangat penting bagi seorang _data engineer_. _Data mining_ adalah salah satu cara yang dilakukan untuk mengekstraksi data dari banyak sumber. Di antara _tools data mining_ yang populer di industri, ada Rapid Miner, KNIME, dan Weka.

5. **_Soft Skills_**  
   _Data engineer_ biasanya adalah anggota dari sebuah tim yang besar. Selain memiliki keterampilan teknis, penting bagi kita untuk mempertajam _soft skills_. Beberapa _soft skills_ yang penting sebagai berikut:
   - **_Critical thinking_**: Seorang _data engineer_ harus dapat melihat masalah dan mencari solusi yang efektif dalam menghadapi permasalahan.
   - **_Collaborative_**: Sebagai bagian tak terpisahkan dari tim yang terdiri dari berbagai peran, sikap kolaboratif dan kooperatif sangat penting untuk dimiliki.
   - **_Effective communication_**: _Data engineer_ harus dapat berkomunikasi secara efektif dengan _stakeholder_. Dalam hal ini, ia harus dapat menjelaskan konsep kompleks agar dapat dipahami dengan baik oleh seluruh _stakeholder_.

---

# Basis Data Relasional (Relational Database) 📊

Basis data relasional adalah salah satu jenis basis data yang paling populer yang menggunakan tabel untuk menyimpan data dan memungkinkan interaksi yang efisien antar tabel. Berikut adalah informasi penting yang perlu Anda ketahui tentang basis data relasional.

## Basis Data Relasional Populer 🌟

- **MySQL**
- **PostgreSQL**
- **MariaDB**
- **Oracle**

Basis data ini menggunakan **SQL (Structured Query Language)** sebagai bahasa untuk berinteraksi, yang cukup sederhana dan intuitif.

## Dasar-Dasar SQL 📚

Untuk bekerja dengan basis data relasional, penting untuk memahami siklus dasar berikut:

1. **Membuat Data**: Menggunakan perintah `INSERT` untuk menambah data baru.
2. **Menerima Data**: Menggunakan perintah `SELECT` untuk mengambil data.
3. **Memperbarui Data**: Menggunakan perintah `UPDATE` untuk mengubah data yang sudah ada.
4. **Menghapus Data**: Menggunakan perintah `DELETE` untuk menghapus data.

## Menggabungkan Tabel 🔗

- **Query Data dari Beberapa Tabel**: Menggunakan operator `JOIN` untuk menggabungkan data dari tabel yang berbeda.
- **Tipe-Tipe JOIN**: 
  - **INNER JOIN**: Mengambil data yang memiliki kesamaan di kedua tabel.
  - **LEFT JOIN**: Mengambil semua data dari tabel kiri dan data yang cocok dari tabel kanan.
  - **RIGHT JOIN**: Mengambil semua data dari tabel kanan dan data yang cocok dari tabel kiri.
  - **FULL OUTER JOIN**: Mengambil semua data dari kedua tabel, dengan data yang tidak cocok diisi dengan nilai NULL.

## Hubungan Antara Tabel 🏗️

- **Referensi dari Satu Tabel ke Tabel Lain**: Menggunakan **foreign key** untuk menghubungkan tabel-tabel yang berbeda, menjaga integritas data.

## Ekspresi Subquery 🔍

- **Subquery**: Sebuah query di dalam query lain. Ini memungkinkan Anda untuk membuat query yang lebih kompleks.

## Indeks 🔍

- **Indeks**: Struktur data yang memungkinkan Anda untuk dengan cepat menentukan posisi data yang diinginkan di dalam basis data, meningkatkan performa pencarian.

## Transaksi 💼

- **Transaksi**: Sekuens perintah yang harus dieksekusi secara lengkap, atau tidak sama sekali.
  - **START TRANSACTION**: Memulai transaksi baru.
  - **COMMIT**: Menyimpan semua perubahan yang dilakukan dalam transaksi.
  - **ROLLBACK**: Membatalkan semua perubahan yang dilakukan dalam transaksi.

## Bekerja dengan Bahasa Pemrograman 💻

Untuk berinteraksi dengan basis data menggunakan bahasa pemrograman, Anda perlu menginstal **database driver (adapter)** untuk bahasa yang Anda gunakan. Contoh driver yang umum digunakan:
- **Python**: `psycopg2` untuk PostgreSQL
- **Node.js**: `node-postgres` untuk PostgreSQL
- **Go**: `pgx` untuk PostgreSQL

## ORM (Object-Relational Mapping) Libraries 📦

Menulis query SQL dalam kode bisa sulit dan rawan kesalahan. **ORM libraries** menyediakan cara untuk mengeksekusi query SQL seolah-olah Anda hanya memanggil metode pada objek. Meskipun ini membuat pengkodean lebih mudah, query yang dihasilkan sering kali tidak optimal dalam hal performa. Oleh karena itu, penting untuk memahami baik ORM maupun SQL mentah.

### ORM Populer:
- **SQLAlchemy** untuk Python
- **Sequelize** untuk Node.js
- **GORM** untuk Go

## Kesimpulan 🎉

Memahami basis data relasional adalah keterampilan penting bagi pengembang yang ingin membangun aplikasi yang efisien dan terstruktur. Dengan pengetahuan tentang SQL, penggabungan tabel, hubungan antar tabel, dan penggunaan ORM, Anda akan dapat memanipulasi data dengan lebih efektif dan membangun aplikasi yang solid!

# Mengatasi Error MySQL di XAMPP

Panduan ini menjelaskan langkah-langkah untuk mengatasi error MySQL yang mungkin terjadi saat menggunakan XAMPP.

## Langkah-langkah Mengatasi Error MySQL

### 1. Jalankan MySQL tanpa Otorisasi
Buka shell atau terminal XAMPP dan jalankan perintah berikut untuk memulai MySQL tanpa pemeriksaan hak akses dan menghindari external locking:

```bash
mysqld --console --skip-grant-tables --skip-external-locking



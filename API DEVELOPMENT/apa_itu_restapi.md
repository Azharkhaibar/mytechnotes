# REST API 🚀

REST (Representational State Transfer) adalah pendekatan arsitektur yang menjelaskan serangkaian aturan tentang bagaimana seorang programmer mengatur penulisan kode aplikasi server sehingga semua sistem dapat dengan mudah bertukar data dan aplikasi dapat dengan mudah di-scale. Ketika membangun REST API, metode protokol HTTP banyak digunakan.

## Aturan Dasar untuk Menulis REST API yang Baik 📜

### 1. **Menggunakan Metode HTTP** 🔄

- Sebuah URL route tunggal digunakan untuk bekerja pada model data tertentu (misalnya, untuk pengguna - `/api/user`).
- Untuk melakukan berbagai operasi (ambil/buat/edit/hapus), route ini harus mengimplementasikan handler untuk metode HTTP yang sesuai:
  - **GET**: Mengambil data.
  - **POST**: Membuat data baru.
  - **PUT**: Memperbarui data yang ada.
  - **DELETE**: Menghapus data.

### 2. **Menggunakan Nama Jamak** 📦

- Sebagai contoh, URL untuk mengambil satu pengguna berdasarkan ID terlihat seperti ini: `/user/42`, dan untuk mengambil semua pengguna seperti ini: `/users`.

### 3. **Mengirim Kode Respon HTTP yang Tepat** ✅

- Beberapa kode respon yang paling umum digunakan:
  - **200**: OK
  - **201**: Created
  - **204**: No Content
  - **304**: Not Modified
  - **400**: Bad Request
  - **401**: Unauthorized
  - **403**: Forbidden
  - **404**: Not Found
  - **405**: Method Not Allowed
  - **410**: Gone
  - **415**: Unsupported Media Type
  - **422**: Unprocessable Entity
  - **429**: Too Many Requests

### 4. **Versi API** 🔢

- Seiring waktu, Anda mungkin ingin atau perlu mengubah cara kerja layanan REST API Anda secara fundamental. 
- Untuk menghindari kerusakan pada aplikasi yang menggunakan versi saat ini, Anda dapat membiarkannya seperti sekarang dan menerapkan versi baru di URL route yang berbeda, misalnya `/api/v2`.

## Mengapa REST API Penting? 🌍

REST API memberikan cara yang konsisten dan terstandarisasi untuk aplikasi berkomunikasi satu sama lain. Dengan mengikuti aturan dasar ini, Anda dapat memastikan bahwa API Anda akan mudah digunakan, dipahami, dan diintegrasikan dengan sistem lain.

## Referensi 🔗

- [REST API Tutorial](https://restfulapi.net/)
- [HTTP Status Codes](https://developer.mozilla.org/en-US/docs/Web/HTTP/Status)

---

Dengan mengikuti panduan ini, Anda dapat membangun REST API yang kuat dan efektif! 🚀

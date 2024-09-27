# 🌐 **Web Monolith vs. Web Distributif (Microservices)**

## **Web Monolith**

- **Pengertian**: 
  Aplikasi web yang seluruh bagian (frontend, backend, dan database) dibangun dalam satu kesatuan atau satu proyek besar. Semua fitur aplikasi di-host dalam satu server dan saling terhubung langsung.

- **Contoh**: 
  Bayangkan kamu membuat aplikasi toko online. Dalam aplikasi monolith, seluruh fitur (halaman produk, pembayaran, login, dan lain-lain) berada dalam satu aplikasi. Jika ada update kecil, kamu harus me-redeploy seluruh aplikasi.

- **Contoh platform**: 
  - Laravel
  - WordPress
  - Ruby on Rails

---

## **Web Distributif (Microservices)**

- **Pengertian**: 
  Aplikasi web yang dibagi menjadi beberapa layanan kecil (microservices), di mana setiap layanan bertanggung jawab atas satu fitur atau fungsi spesifik. Layanan-layanan ini bisa dijalankan di server yang berbeda dan berkomunikasi satu sama lain.

- **Contoh**: 
  Misalnya, aplikasi e-commerce dibagi menjadi beberapa layanan seperti layanan untuk **pembayaran**, **manajemen produk**, dan **pengguna**. Setiap layanan ini bekerja sendiri-sendiri, sehingga jika layanan pembayaran di-update, kamu tidak perlu menyentuh layanan yang lain.

- **Contoh platform**: 
  - Netflix
  - Amazon
  - GoJek (di mana setiap fitur, seperti GoFood, GoRide, berjalan secara independen)

---

## **Perbedaan Utama**:

| **Aspek**      | **Monolith**                                    | **Distributif**                               |
|----------------|------------------------------------------------|------------------------------------------------|
| **Arsitektur** | Satu aplikasi besar, semua fitur ada di satu tempat. | Beberapa aplikasi kecil yang bekerja sama, tiap fitur terpisah. |

### **Analogi**:
- **Monolith**: Semua ruang (kamar, dapur, kamar mandi) ada dalam satu bangunan.
- **Distributif**: Tiap ruang di rumahmu dibuat sebagai bangunan terpisah, jadi jika satu ruang butuh renovasi, ruang lainnya tidak terpengaruh.

---

## **Contoh Kasus**:

Jika kamu menggunakan **TypeScript**, **Next.js**, **MySQL**, dan **Python Flask** dalam satu proyek, maka itu lebih mendekati arsitektur **distributif (microservices)**. 

### **Alasannya**:
1. **Next.js (TypeScript)**: Bisa digunakan untuk membangun frontend atau client-side rendering. Frontend ini bisa menjadi satu layanan independen.
2. **MySQL**: Berperan sebagai basis data yang terpisah dari aplikasi lainnya, sering diakses oleh layanan backend.
3. **Python Flask**: Digunakan untuk backend, mungkin berfungsi sebagai API yang melayani frontend dan mengelola logika bisnis.

---

### **Mengapa Termasuk Distributif**:
- **Komponen terpisah**: Setiap komponen (frontend, backend, dan database) bisa dijalankan secara independen di server yang berbeda dan berkomunikasi melalui API.
- **Pengembangan independen**: Kamu bisa mengembangkan frontend (Next.js) dan backend (Flask) secara terpisah, dan setiap bagian bisa di-deploy tanpa memengaruhi yang lain.
- **Teknologi berbeda**: Kamu menggunakan dua teknologi backend yang berbeda (Next.js dan Flask), yang mendukung gaya arsitektur microservices di mana layanan yang berbeda dapat menggunakan bahasa atau framework yang berbeda.

---

### **Kesimpulan**:
Jika kamu mengembangkan proyek dengan komponen-komponen tersebut secara terpisah dan terdistribusi, maka arsitektur kamu cenderung ke **distributif** atau **microservices**, bukan **monolith**.

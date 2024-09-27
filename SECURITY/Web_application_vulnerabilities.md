# Kerentanan Aplikasi Web 🛡️✨

## 1. Cross-Site Scripting (XSS) 🕷️
**Apa sih?**: Ini serangan yang bikin penyerang bisa nyisipin kode jahat lewat situs ke peramban orang lain. Gak asik, kan?

**Dampak?**:
- Bisa ambil cookie kamu
- Bikin kamu dialihin ke situs sampah
- Ngambil data rahasia kamu

**Cara ngindarin?**:
- Cek dan bersihin input dari pengguna
- Gunakan Content Security Policy (CSP)
- Encode data sebelum ditampilin di halaman

---

## 2. SQL Injection 💻
**Apa sih?**: Ini terjadi kalo input dari pengguna bisa ngubah arti query SQL. Bahaya banget!

**Dampak?**:
- Bisa akses, ubah, atau hapus data di database
- Bisa ambil alih server database kamu

**Cara ngindarin?**:
- Gunakan parameterized queries atau prepared statements
- Cek dan bersihin input dari pengguna
- Batasi hak akses database

---

## 3. Cross-Site Request Forgery (CSRF) 🔒
**Apa sih?**: Kalo situs pake POST buat transaksi, penyerang bisa palsuin formulir dan kirim ke kamu. Kamu yang udah login bisa tanpa sadar kirim permintaan yang udah diatur penyerang.

**Dampak?**:
- Transaksi yang gak sah terjadi atas nama kamu

**Cara ngindarin?**:
- Gunakan token CSRF untuk semua permintaan penting
- Cek referer dan origin header

---

## 4. Clickjacking 🎭
**Apa sih?**: Ini trik dimana penyerang naro lapisan tak terlihat di atas halaman yang kita lihat. Jadi, saat kita klik, kita sebenarnya ngeklik yang salah.

**Dampak?**:
- Kamu bisa ngelakuin hal yang gak kamu mau

**Cara ngindarin?**:
- Pake header X-Frame-Options biar halaman gak bisa dimuat di iframe
- Coba frame busting techniques

---

## 5. Denial of Service (DoS Attack) ⚠️
**Apa sih?**: Ini serangan yang ngeluarin banyak permintaan ke server kamu, bikin server overload. Gak enak banget!

**Dampak?**:
- Layanan kamu jadi gak bisa diakses
- Bikin kamu rugi, baik uang atau reputasi

**Cara ngindarin?**:
- Pake firewall dan alat monitor buat deteksi serangan
- Batasi jumlah permintaan dari satu IP

---

## 6. Man-in-the-Middle Attack (MitM) 🔍
**Apa sih?**: Ini serangan di mana penyerang nyelip di antara dua pihak yang lagi ngobrol buat ngintip atau ngubah data.

**Dampak?**:
- Data yang kamu kirim bisa diubah
- Bisa ambil data rahasia kamu

**Cara ngindarin?**:
- Gunakan enkripsi (HTTPS, SSL/TLS)
- Verifikasi identitas pihak yang terlibat

---

## 7. Konfigurasi Keamanan yang Salah ⚙️
**Apa sih?**: Kalo kamu pake pengaturan default, itu bisa bahaya! Orang bisa gampang tahu dan akses sistem kamu.

**Dampak?**:
- Akses gak sah ke sistem kamu

**Cara ngindarin?**:
- Ubah semua pengaturan default
- Lakuin audit keamanan secara berkala

---

## Kesimpulan 📝
Penting banget buat paham dan mencegah kerentanan ini biar aplikasi web kamu aman. Selalu update ilmu kamu tentang praktik terbaik keamanan dan terapin langkah pencegahan yang bener.

## Referensi 🔗
- [OWASP Top Ten](https://owasp.org/www-project-top-ten/)
- [CVE Details](https://www.cvedetails.com/)

# Desain Aplikasi Web Modern: Frontend & Backend

Aplikasi web modern itu biasanya terbagi jadi dua bagian utama: **Frontend** (bagian depan) dan **Backend** (bagian belakang). Mereka ini bekerja bareng dengan cara client-server model, kayak sepasang duet gitu, frontend buat tampilannya dan backend buat logikanya.

---

## Tugas Frontend: Apa yang Dilihat User 👀

Bagian **Frontend** ini ngebahas soal apa yang dilihat dan di-interaksi-in user. Ini bagian yang bikin aplikasi kamu keliatan kece dan interaktif. Yuk kita bahas lebih detail apa aja yang dikerjain si Frontend:

### 1. User Interface (UI) Implementation 💻✨
Frontend itu yang bikin tampilan aplikasi sesuai yang user lihat. Supaya bisa bikin web yang keren, biasanya pake tools kayak:
- **HTML** (HyperText Markup Language): Buat bikin struktur dasar halaman web, kayak kerangka rumah.
- **CSS** (Cascading Style Sheets): Buat bikin tampilannya lebih menarik, seperti ngatur font, warna, layout, dan yang lainnya, biar website nggak polos kayak kertas kosong.
- **JavaScript (JS)**: Nah, ini nih yang bikin web jadi dinamis dan interaktif. Misal, kamu mau tombol yang bisa berubah warna saat di-klik atau popup yang muncul tiba-tiba? Itu kerjaannya JavaScript.

Oh ya, meskipun tools ini bisa dipake langsung, biasanya developer nggak pake "murni"-nya, karena ada **frameworks** (misal: React, Vue, Angular) dan **preprocessors** (SASS, LESS) buat bikin development lebih cepat dan praktis.

### 2. Bikin Fungsi buat Kirim Request ke Server 📲
Frontend juga bertugas bikin fungsi yang bisa ngirim data ke backend. Biasanya ini berupa input form kayak form registrasi, login, atau checkout yang kamu isi di web. Itu frontend loh yang bikinnya.

### 3. Menerima & Menampilkan Data dari Server 📨
Setelah data dikirim ke backend, frontend juga harus siap buat nampilin balasan dari server. Misal, kamu nge-submit form login, terus backend balikin data validasi, apakah login sukses atau nggak, frontend yang nampilin pesan sukses atau errornya.

---

## Tugas Backend: Mesin Penggerak di Balik Layar ⚙️

Bagian **Backend** ini sering dibilang "behind the scenes", kayak otaknya aplikasi. Backend ini nggak keliatan sama user, tapi krusial banget karena dia yang ngatur semua logika dan penyimpanan data. Apa aja sih tugas si Backend?

### 1. Handling Client Requests 📤
Backend itu tugas utamanya ngurus request dari client (frontend). Jadi, saat user klik tombol submit, requestnya dikirim ke backend buat diproses. Di sini backend bakal cek segala macem hal kayak:
- Apakah user punya akses?
- Apakah inputannya valid? (kayak password harus minimal 8 karakter, dll.)

### 2. Implementasi Business Logic 🧠
Ini bagian paling seru di backend. Business logic ini bisa macem-macem, mulai dari ngatur gimana cara aplikasi berinteraksi dengan database, ngolah informasi, atau ngitung sesuatu (misalnya harga total di e-commerce). Business logic ini yang bikin aplikasi bener-bener bekerja sesuai fungsinya.

### 3. Generating Responses & Balikin ke Client 📥
Setelah request tadi diproses, backend bakal balikin respons ke frontend. Contohnya, setelah user login, backend balikin data profil user atau pesan kesalahan kalo ada yang salah. Respons inilah yang diterima frontend buat ditampilin ke user.

---

## Frontend vs Backend: Kolaborasi Hebat ⚔️🤝

Meskipun mereka beda tugas, **Frontend** dan **Backend** ini gak bisa dipisahin. Mereka saling kerja sama buat bikin aplikasi web yang keren dan berfungsi dengan baik. Bisa dibilang, Frontend adalah "wajah" aplikasi, sementara Backend adalah "otak" dan "jantung" aplikasi yang menjaga semuanya berjalan lancar.

---

## Visualisasi Hubungan Frontend & Backend

[apa itu BACKEND?](backend.md)

```mermaid
graph TD
    A[User] --> B[Frontend]
    B --> C[Server Request]
    C --> D[Backend]
    D --> E[Business Logic]
    E --> F[Response]
    F --> B
    B --> G[User]


# Variabel Lingkungan 🌍🔐

## Apa Itu Variabel Lingkungan? 🤔
Jadi, kadang aplikasi kamu butuh data sensitif kayak token (buat akses API berbayar), login dan password (buat nyambung ke database), atau kunci rahasia buat tanda tangan. Nah, semua data ini harus aman dari tangan-tangan nakal! Jadi, jangan pernah simpan langsung di kode program kamu, ya!

## File .env 📄
**Apa sih?**: Ini file spesial buat nyimpen semua variabel lingkungan kamu. Gak ada yang bisa akses tanpa izin!

**Formatnya**:

API_KEY=your_api_key_here DB_USERNAME=your_db_username DB_PASSWORD=your_db_password

---

## Parsing File .env 🛠️
**Gimana caranya?**: Variabel-variabel ini dikirim ke program kamu lewat argumen baris perintah. Tapi biar bisa ambil data dari file `.env`, kamu butuh pustaka khusus sesuai bahasa pemrograman yang kamu pake.

**Contoh Pustaka**:
- **Node.js**: Pake `dotenv`
- **Python**: Pake `python-dotenv`
- **Ruby**: Pake `dotenv`

---

## Penyimpanan dan Transfer File .env ☁️
- **Upload ke Hosting**: Pelajari cara upload file `.env` ke layanan hosting kamu. Pastikan semua data tetap aman!
- **Jangan Komit ke Repos**: Jangan lupa, file `.env` ini gak boleh di-commit ke repositori jarak jauh. Tambahin ke pengecualian di file `.gitignore` kamu!

### Contoh .gitignore


---

## Kenapa Penting? 💡
Menjaga variabel lingkungan kamu aman itu penting! Jangan sampai data sensitif kamu jatuh ke tangan yang salah. Selalu jaga keamanan data dan ikuti praktik terbaik.

## Kesimpulan 📝
Variabel lingkungan adalah cara yang aman buat nyimpen data sensitif. Gunakan file `.env` dan pustaka yang tepat untuk parsing data, serta jangan lupa jaga file ini biar tetap aman dari publik!

## Referensi 🔗
- [dotenv untuk Node.js](https://www.npmjs.com/package/dotenv)
- [python-dotenv](https://pypi.org/project/python-dotenv/)
- [Dotenv di Ruby](https://github.com/bkeepers/dotenv)


# 🚀 Skrip Bash dan Manajemen Pengguna di Linux

Selamat datang di panduan utama tentang skrip Bash dan mengelola pengguna di Linux! Apakah kamu ingin mengotomatiskan tugas yang membosankan atau mengatur akun pengguna untuk teman-temanmu, panduan ini akan membantumu menguasai dasar-dasarnya dan meningkatkan keterampilan terminalmu. 🐧

---

## ⚡ Skrip Bash: Otomatiskan Hidupmu

Skrip Bash memungkinkan kamu menggabungkan beberapa perintah menjadi satu skrip yang dapat dieksekusi. Kenapa harus mengetikkan 10 perintah berbeda ketika kamu bisa menjalankan satu skrip untuk melakukan pekerjaan itu?

### 💡 Dasar-Dasar Bash

Berikut adalah kursus kilat tentang fitur-fitur penting yang perlu kamu ketahui untuk memulai:

- **Variabel**: Simpan informasi seperti angka atau teks untuk digunakan nanti.
    ```bash
    name="John"
    echo "Halo, $name!"
    ```

- **Input/Output**: Berinteraksi dengan pengguna dan menampilkan pesan.
    ```bash
    read -p "Masukkan namamu: " user_name
    echo "Selamat datang, $user_name!"
    ```

- **Loop**: Ulangi tindakan menggunakan loop `for`, `while`, atau `until`.
    ```bash
    for i in {1..5}; do
        echo "Ini adalah iterasi loop ke-$i"
    done
    ```

- **Kondisi**: Buat keputusan dengan `if`, `else`, dan `case`.
    ```bash
    if [ "$user_name" == "John" ]; then
        echo "Halo, John!"
    else
        echo "Siapa kamu?"
    fi
    ```

### 🔧 Latihan Membuat Sempurna

- **Selesaikan Tantangan**: Cek platform seperti [HackerRank](https://www.hackerrank.com/domains/tutorials/10-days-of-bash) dan [Codewars](https://www.codewars.com/) untuk meningkatkan keterampilanmu.
  
- **Otomatiskan Tugasmu**: Gunakan skrip Bash untuk memperlancar aktivitas rutin di komputermu, seperti backup atau pengaturan lingkungan.

- **Bangun Proyekmu**: Jika kamu seorang programmer, buat skrip untuk menyederhanakan proses build proyek atau menginstal dependensi.

### 🛠️ ShellCheck

Gunakan [ShellCheck](https://www.shellcheck.net/) untuk menganalisis skripmu. Alat ini menunjukkan kemungkinan kesalahan dan mengajarkan praktik terbaik untuk menulis skrip Bash yang bersih dan efektif.

### 🌐 Sumber Daya Tambahan

- Jelajahi repositori seperti [Awesome Bash](https://github.com/awesome-lists/awesome-bash) dan [Awesome Shell](https://github.com/alebcay/awesome-shell) untuk menemukan alat dan sumber daya berguna yang dapat meningkatkan keterampilan Bash-mu.

---

## 👥 Pengguna dan Grup di Linux

Linux ramah multi-pengguna, memungkinkan beberapa orang menjalankan aplikasi yang berbeda pada saat yang sama. Setiap pengguna memerlukan nama unik dan kata sandi.

### 🛠️ Bekerja dengan Pengguna

- **Buat Pengguna Baru**:
    ```bash
    useradd <name> [flags] # misalnya, useradd john
    ```

- **Atur Kata Sandi untuk Pengguna**:
    ```bash
    passwd <name> # misalnya, passwd john
    ```

- **Edit Pengguna**:
    ```bash
    usermod <name> [flags] # misalnya, usermod -L john (kunci pengguna)
    ```

- **Kunci Pengguna**:
    ```bash
    usermod -L <name> # misalnya, usermod -L john
    ```

- **Buka Kunci Pengguna**:
    ```bash
    usermod -U <name> # misalnya, usermod -U john
    ```

- **Hapus Pengguna**:
    ```bash
    userdel <name> [flags] # misalnya, userdel john
    ```

### 🛠️ Bekerja dengan Grup

- **Buat Grup**:
    ```bash
    groupadd <group> [flags] # misalnya, groupadd developers
    ```

- **Edit Grup**:
    ```bash
    groupmod <group> [flags] # misalnya, groupmod developers
    ```

- **Hapus Grup**:
    ```bash
    groupdel <group> [flags] # misalnya, groupdel developers
    ```

- **Tambahkan Pengguna ke Grup**:
    ```bash
    usermod -a -G <groups> <user> # misalnya, usermod -a -G developers john
    ```

- **Hapus Pengguna dari Grup**:
    ```bash
    gpasswd --delete <user> <groups> # misalnya, gpasswd --delete john developers
    ```

### 📁 File Sistem

- **/etc/passwd**: Berisi informasi dasar tentang pengguna.
- **/etc/shadow**: Berisi kata sandi terenkripsi.
- **/etc/group**: Berisi informasi dasar tentang grup.
- **/etc/gshadow**: Berisi kata sandi grup terenkripsi.

---

### 🌟 Kesimpulan

Sekarang kamu telah dilengkapi dengan dasar-dasar skrip Bash dan manajemen pengguna, saatnya untuk praktek! Mulailah membuat skrip dan mengelola pengguna seperti seorang profesional. Selamat coding! 🎉

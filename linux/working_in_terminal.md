# 🖥️ Panduan Bekerja dengan Terminal

Terminal adalah program yang menggunakan perintah teks khusus untuk mengendalikan komputer kamu. Umumnya, server tidak memiliki antarmuka grafis, jadi keterampilan menggunakan terminal sangat penting.

---

## 📂 Perintah Dasar untuk Menavigasi Sistem Berkas

Berikut adalah beberapa perintah dasar yang perlu kamu ketahui:

```bash
ls                 # Menampilkan isi direktori
cd <path>         # Pergi ke direktori yang ditentukan
cd ..             # Pindah ke level yang lebih tinggi (ke direktori induk)
touch <file>      # Membuat file baru
cat > <file>      # Menulis teks ke dalam file (menimpa)
cat >> <file>     # Menambahkan teks di akhir file
cat/more/less <file> # Melihat isi file
head/tail <file>  # Melihat baris pertama/terakhir dari file
pwd                # Menampilkan path ke direktori saat ini
mkdir <name>      # Membuat direktori baru
rmdir <name>      # Menghapus direktori
cp <file> <path>  # Menyalin file atau direktori
mv <file> <path>  # Memindahkan atau mengganti nama file
rm <file>         # Menghapus file atau direktori
find <string>     # Mencari file dalam sistem
du <file>         # Menampilkan ukuran file atau direktori
```

### 🆘 Perintah untuk Informasi Bantuan
Jika kamu butuh bantuan, berikut adalah beberapa perintah yang bisa digunakan:

```bash
man <command>     # Menampilkan manual untuk perintah tertentu
apropos <string>  # Mencari perintah dengan deskripsi yang memiliki kata tertentu
man -k <string>   # Mirip dengan perintah di atas
whatis <command>  # Menampilkan deskripsi singkat tentang perintah
```

### ✍️ Editor Teks
Kamu perlu mempelajari editor teks agar bisa membaca dan mengedit file melalui terminal. Berikut adalah dua editor teks yang bisa kamu coba:

Nano: Editor yang paling mudah digunakan.
Vim: Editor yang lebih canggih dengan banyak fitur.
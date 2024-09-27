# Git Version Control System 🌟

Git adalah sistem khusus untuk mengelola riwayat perubahan pada kode sumber. Setiap perubahan yang dibuat di Git dapat disimpan, memungkinkan Anda untuk kembali (rollback) ke salinan proyek yang disimpan sebelumnya. Git saat ini merupakan standar untuk pengembangan perangkat lunak.

## Basic Commands ⚙️

Berikut adalah beberapa perintah dasar Git yang sering digunakan:

```bash
git init                  # Menginisialisasi Git di folder saat ini
git add [file]           # Menambahkan file ke Git
git add .                # Menambahkan semua file di folder ke Git
git reset [file]         # Membatalkan penambahan file yang ditentukan
git reset                # Membatalkan penambahan semua file
git commit -m "your message" # Membuat commit (menyimpan)
git status               # Menampilkan status file yang ditambahkan
git push                 # Mengirim commit saat ini ke repositori jarak jauh
git pull                 # Memuat perubahan dari repositori jarak jauh
git clone [link]         # Mengkloning repositori yang ditentukan ke PC Anda
```

### Working with Branches 🌿
Branching memungkinkan Anda untuk menyimpang dari cabang utama pengembangan dan melanjutkan bekerja secara independen.

```bash
git branch               # Menampilkan daftar cabang saat ini
git branch [name]        # Membuat cabang baru dari commit saat ini
git checkout [name]      # Beralih ke cabang yang ditentukan
git merge [name]         # Menggabungkan cabang yang ditentukan ke dalam cabang saat ini
git branch -d [name]     # Menghapus cabang yang ditentukan
```

### Cancel Commits ❌
Jika Anda ingin membatalkan commit, Anda dapat menggunakan perintah berikut:

```bash
git revert HEAD --no-edit # Membuat commit baru yang mengubah perubahan dari commit sebelumnya
git revert [hash] --no-edit # Tindakan yang sama, tetapi dengan commit yang ditentukan
```
# Docker 🐳

Docker adalah program khusus yang memungkinkan Anda menjalankan sandbox terisolasi (kontainer) dengan berbagai lingkungan terinstal sebelumnya (baik itu sistem operasi tertentu, basis data, dll.). Teknologi kontainerisasi yang disediakan oleh Docker mirip dengan mesin virtual, tetapi berbeda dengan mesin virtual, kontainer menggunakan kernel OS host, yang memerlukan jauh lebih sedikit sumber daya.

## Docker Image 📦

**Docker Image** adalah template tetap khusus yang berisi deskripsi lingkungan untuk menjalankan aplikasi (sistem operasi, kode sumber, pustaka, variabel lingkungan, file konfigurasi, dll.). Gambar-gambar ini dapat diunduh dari situs resmi dan digunakan untuk membuat gambar Anda sendiri.

### Menggunakan Docker Image
- **Mendapatkan Docker Image**: Gambar dapat diunduh dari Docker Hub atau repositori lain dengan menggunakan perintah `docker pull`.
- **Membuat Image Kustom**: Anda dapat membuat image kustom menggunakan Dockerfile.

## Docker Container 🚀

**Docker Container** adalah lingkungan terisolasi yang dibuat dari sebuah image. Secara esensial, ini adalah proses yang berjalan di komputer yang secara internal berisi lingkungan yang dijelaskan dalam image.

### Keuntungan Menggunakan Container
- Isolasi: Setiap kontainer berjalan secara terpisah, memungkinkan pengujian dan pengembangan yang lebih aman.
- Portabilitas: Kontainer dapat berjalan di mana saja, asalkan ada Docker terinstal.
- Efisiensi: Menggunakan lebih sedikit sumber daya dibandingkan dengan mesin virtual.

## Console Commands 💻

Berikut adalah beberapa perintah konsol yang sering digunakan dalam Docker:

```bash
docker pull [image_name]                       # Mengunduh image
docker images                                  # Menampilkan daftar image yang tersedia
docker run [image_id]                         # Menjalankan kontainer berdasarkan image yang dipilih
    # Beberapa opsi untuk perintah run:
    -d                                        # Menjalankan dengan kembali ke konsol
    --name [name]                             # Menamai kontainer
    --rm                                      # Menghapus kontainer setelah berhenti
    -p [local_port]:[port_inside_container]   # Pengalihan port
docker build [path_to_Dockerfile]            # Membuat image berdasarkan Dockerfile
docker ps                                     # Menampilkan daftar kontainer yang sedang berjalan
docker ps -a                                   # Menampilkan semua kontainer
docker stop [id/container_name]               # Menghentikan kontainer
docker start [id/container_name]              # Memulai kontainer yang ada
docker attach [id/container_name]             # Menghubungkan ke konsol kontainer
docker logs [id/container_name]               # Mengeluarkan log kontainer
docker rm [id/container_name]                 # Menghapus kontainer
docker container prune                         # Menghapus semua kontainer
docker rmi [image_id]                         # Menghapus image
```

***Instructions for Dockerfile*** 📜
Dockerfile adalah file dengan serangkaian instruksi dan argumen untuk membuat image. Berikut adalah beberapa instruksi dasar yang dapat digunakan dalam Dockerfile:

```bash
FROM [image_name]                             # Menetapkan image dasar
WORKDIR [path]                                # Menetapkan direktori root di dalam kontainer
COPY [path_relative_to_Dockerfile] [path_in_container]  # Menyalin file
ADD [path] [path]                             # Mirip dengan perintah di atas
RUN [command]                                 # Perintah yang dijalankan hanya saat image diinisialisasi
CMD ["command"]                               # Perintah yang dijalankan setiap kali Anda memulai kontainer
ENV KEY="VALUE"                               # Menetapkan variabel lingkungan
ARG KEY=VALUE                                 # Menetapkan variabel yang diteruskan ke Docker selama pembuatan image
ENTRYPOINT ["command"]                        # Perintah yang dijalankan saat kontainer berjalan
EXPOSE port/protocol                          # Menunjukkan perlunya membuka port
VOLUME ["path"]                               # Membuat titik mount untuk bekerja dengan penyimpanan persisten
```
# Docker & Docker Compose

## Docker
Docker adalah program khusus yang memungkinkan Anda menjalankan sandbox terisolasi (kontainer) dengan berbagai lingkungan yang telah terpasang (baik itu sistem operasi tertentu, basis data, dll). Teknologi kontainerisasi yang disediakan Docker mirip dengan mesin virtual, tetapi tidak seperti mesin virtual, kontainer menggunakan kernel OS host, yang memerlukan jauh lebih sedikit sumber daya.

### Docker Image
Docker image adalah template tetap yang berisi deskripsi lingkungan untuk menjalankan aplikasi (OS, kode sumber, pustaka, variabel lingkungan, file konfigurasi, dll.). Gambar dapat diunduh dari situs resmi dan digunakan untuk membuat milik Anda sendiri.

### Docker Container
Docker container adalah lingkungan terisolasi yang dibuat dari gambar. Ini pada dasarnya adalah proses yang sedang berjalan di komputer yang secara internal berisi lingkungan yang dijelaskan dalam gambar.

### Perintah Konsol
- `docker pull [image_name]`: Unduh gambar
- `docker images`: Daftar gambar yang tersedia
- `docker run [image_id]`: Menjalankan kontainer berdasarkan gambar yang dipilih
  - `-d`: Memulai dengan kembali ke konsol
  - `--name [name]`: Menamai kontainer
  - `--rm`: Menghapus kontainer setelah berhenti
  - `-p [local_port]:[port_inside_container]`: Pengalihan port
- `docker build [path_to_Dockerfile]`: Membuat gambar berdasarkan Dockerfile
- `docker ps`: Daftar kontainer yang sedang berjalan
- `docker ps -a`: Daftar semua kontainer
- `docker stop [id/container_name]`: Menghentikan kontainer
- `docker start [id/container_name]`: Memulai kontainer yang ada
- `docker attach [id/container_name]`: Menghubungkan ke konsol kontainer
- `docker logs [id/container_name]`: Menampilkan log kontainer
- `docker rm [id/container_name]`: Menghapus kontainer
- `docker container prune`: Menghapus semua kontainer
- `docker rmi [image_id]`: Menghapus gambar

### Instruksi untuk Dockerfile
Dockerfile adalah file dengan sekumpulan instruksi dan argumen untuk membuat gambar.

- `FROM [image_name]`: Menetapkan gambar dasar
- `WORKDIR [path]`: Menetapkan direktori root di dalam kontainer
- `COPY [path_relative_to_Dockerfile] [path_in_container]`: Menyalin file
- `ADD [path] [path]`: Mirip dengan perintah di atas
- `RUN [command]`: Perintah yang hanya dijalankan saat gambar diinisialisasi
- `CMD ["command"]`: Perintah yang dijalankan setiap kali Anda memulai kontainer
- `ENV KEY="VALUE"`: Menetapkan variabel lingkungan
- `ARG KEY=VALUE`: Menetapkan variabel untuk dikirim ke Docker saat membangun gambar
- `ENTRYPOINT ["command"]`: Perintah yang dijalankan saat kontainer sedang berjalan
- `EXPOSE port/protocol`: Menunjukkan perlunya membuka port
- `VOLUME ["path"]`: Membuat titik pemasangan untuk bekerja dengan penyimpanan persisten

## Docker Compose
Docker Compose adalah alat untuk mendefinisikan dan menjalankan aplikasi Docker multi-kontainer. Ini memungkinkan Anda untuk mendefinisikan layanan, jaringan, dan volume yang dibutuhkan dalam satu file `docker-compose.yml`.

### Menggunakan Docker Compose

1. **Membuat file `docker-compose.yml`:**
   Di dalam file ini, Anda dapat mendefinisikan layanan yang membentuk aplikasi Anda. Berikut adalah contoh dasar dari file `docker-compose.yml`:

   ```yaml
   version: '3'
   services:
     web:
       image: nginx:latest
       ports:
         - "80:80"
     database:
       image: postgres:latest
       environment:
         POSTGRES_DB: mydb
         POSTGRES_USER: user
         POSTGRES_PASSWORD: password

Menjalankan aplikasi:

Gunakan perintah docker-compose up untuk memulai semua layanan yang ditentukan. Anda juga dapat menambahkan -d untuk menjalankannya di latar belakang:

```bash
docker-compose up -d
```
Manfaat Docker Compose
Pengelolaan yang Mudah: Anda dapat mengelola beberapa kontainer sebagai satu aplikasi.
Isolasi Layanan: Setiap layanan berjalan dalam kontainer terpisah, menghindari konflik.
Pengaturan Cepat: Menggunakan satu perintah untuk mengatur semua layanan dan dependensinya.
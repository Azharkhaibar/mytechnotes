# Dasar-Dasar Bahasa Pemrograman

Dasar-dasar bahasa pemrograman mencakup beberapa ide fundamental yang terdapat di setiap bahasa. Memahami konsep-konsep ini akan membantu Anda dalam proses belajar dan pengembangan perangkat lunak.

## 1. Variabel dan Konstanta

- **Deskripsi**: Variabel adalah nama yang diberikan untuk lokasi memori di program guna menyimpan data tertentu. Sementara itu, konstanta adalah nilai tetap yang tidak dapat diubah selama program berjalan.
- **Contoh**:
    ```python
    # Variabel
    nama = "John Doe"  # Menyimpan string
    umur = 25          # Menyimpan integer

    # Konstanta
    PI = 3.14         # Nilai tetap
    ```

## 2. Tipe Data

- **Deskripsi**: Tipe data mendefinisikan jenis data yang dapat disimpan dalam variabel. Tipe data utama meliputi:
  - **Integer**: Bilangan bulat.
  - **Floating Point**: Bilangan pecahan.
  - **String**: Urutan karakter.
  - **Boolean**: Nilai benar (true) atau salah (false).
- **Contoh**:
    ```python
    angka = 10               # Integer
    harga = 99.99           # Floating Point
    nama_produk = "Buku"    # String
    is_available = True      # Boolean
    ```

## 3. Operator

- **Deskripsi**: Operator digunakan untuk melakukan operasi pada variabel atau nilai. Jenis operator yang umum digunakan meliputi:
  - **Operator Aritmatika**: `+`, `-`, `*`, `/`
  - **Operator Perbandingan**: `==`, `!=`, `>`, `<`
  - **Operator Logika**: `and`, `or`, `not`
  - **Operator Penugasan**: `=`, `+=`, `-=`
- **Contoh**:
    ```python
    total = 10 + 5         # Operator Aritmatika
    is_equal = (total == 15)  # Operator Perbandingan
    ```

## 4. Kontrol Alur

- **Deskripsi**: Kontrol alur mencakup pernyataan yang mengontrol jalannya eksekusi program, seperti:
  - **Loop**: `for`, `while`
  - **Kondisi**: `if`, `else`, `switch-case`
- **Contoh**:
    ```python
    for i in range(5):          # Loop
        print(i)

    if total > 10:              # Kondisi
        print("Total lebih dari 10")
    ```

## 5. Fungsi

- **Deskripsi**: Fungsi adalah blok kode yang dapat dipanggil berkali-kali dalam program. Ini memungkinkan penggunaan kembali kode dan modularisasi.
- **Contoh**:
    ```python
    def hitung_luas(panjang, lebar):  # Fungsi
        return panjang * lebar

    luas = hitung_luas(5, 10)          # Memanggil fungsi
    ```

## 6. Struktur Data

- **Deskripsi**: Struktur data adalah wadah khusus di mana data disimpan sesuai aturan tertentu. Struktur data utama meliputi:
  - **Array**: Kumpulan elemen dengan tipe data yang sama.
  - **Map**: Kumpulan pasangan kunci-nilai.
  - **Tree**: Struktur hierarkis.
  - **Graph**: Struktur jaringan.
  
## 7. Perpustakaan Standar

- **Deskripsi**: Mengacu pada fitur bawaan bahasa untuk memanipulasi struktur data, bekerja dengan sistem file, jaringan, kriptografi, dan lainnya.
- **Contoh**:
    ```python
    import math  # Menggunakan perpustakaan standar

    print(math.sqrt(16))  # Menghitung akar kuadrat
    ```

## 8. Penanganan Kesalahan

- **Deskripsi**: Digunakan untuk menangani peristiwa yang tidak terduga yang dapat terjadi selama eksekusi program.
- **Contoh**:
    ```python
    try:
        hasil = 10 / 0  # Menyebabkan kesalahan
    except ZeroDivisionError:
        print("Error: Pembagian dengan nol.")
    ```

## 9. Ekspresi Reguler

- **Deskripsi**: Alat yang kuat untuk bekerja dengan string. Memahami dasar-dasar ekspresi reguler dalam bahasa Anda sangat penting.
- **Contoh**:
    ```python
    import re

    pola = r"\d+"  # Mencari angka dalam string
    hasil = re.findall(pola, "Ada 2 apel dan 3 jeruk.")
    print(hasil)  # Output: ['2', '3']
    ```

## 10. Modul

- **Deskripsi**: Menulis seluruh kode program dalam satu file tidaklah praktis. Lebih baik membaginya menjadi modul-modul kecil dan mengimpornya ke tempat yang tepat.
- **Contoh**:
    ```python
    # modul.py
    def greet(name):
        return f"Hello, {name}!"

    # main.py
    from modul import greet

    print(greet("John"))  # Memanggil fungsi dari modul
    ```

## 11. Pengelola Paket

- **Deskripsi**: Suatu saat, Anda akan merasa perlu menggunakan pustaka pihak ketiga. Pengelola paket membantu Anda mengelola dependensi ini.
- **Contoh**:
    ```bash
    # Menginstal pustaka dengan pip
    pip install requests
    ```

## Penutup

Setelah menguasai dasar-dasar untuk menulis program sederhana, penting untuk memiliki tujuan spesifik. Temukan proyek yang ingin Anda buat, seperti game, chatbot, website, atau aplikasi mobile/desktop. 

Untuk inspirasi, cek repositori berikut: [Build Your Own X](https://github.com/danistefanovic/build-your-own-x) dan [Project Based Learning](https://github.com/practical-tutorials/project-based-learning).

Mulailah mencari informasi untuk mengimplementasikan proyek Anda. Teman terbaik Anda dalam perjalanan ini adalah Google, YouTube, dan Stack Overflow!


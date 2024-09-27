# Network Utils di Linux 🚀

Linux itu terkenal banget buat network configuration dan troubleshooting. Ada banyak built-in tools dan juga third-party utilities yang bisa ngebantu kamu buat konfigurasi jaringan, analisis, dan perbaiki masalah yang mungkin ada. Let's dive in ke beberapa network tools keren yang ada di Linux! 💻🔧

---

## Simple Network Utils 🛠️

### **1. ip address**
- **Fungsi**: Buat ngecek info tentang alamat IPv4 dan IPv6 dari perangkat kamu.
- **Command**: `ip address`

### **2. ip monitor**
- **Fungsi**: Real-time monitoring status perangkat jaringan.
- **Command**: `ip monitor`

### **3. ifconfig**
- **Fungsi**: Konfigurasi network adapter dan pengaturan IP.
- **Command**: `ifconfig`

### **4. traceroute `<host>`**
- **Fungsi**: Liat rute yang dilalui paket data untuk sampai ke host.
- **Command**: `traceroute <host>`

### **5. tracepath `<host>`**
- **Fungsi**: Mirip traceroute tapi bisa ngetrace sampai destination sambil menemukan MTU.
- **Command**: `tracepath <host>`

### **6. ping `<host>`**
- **Fungsi**: Cek konektivitas ke host. 
- **Command**: `ping <host>`

### **7. ss -at**
- **Fungsi**: Liat semua listening TCP connections.
- **Command**: `ss -at`

### **8. dig `<host>`**
- **Fungsi**: Info tentang DNS name server.
- **Command**: `dig <host>`

### **9. host `<host | ip-address>`**
- **Fungsi**: Cek IP address dari domain tertentu.
- **Command**: `host <domain | ip-address>`

### **10. mtr `<host | ip-address>`**
- **Fungsi**: Kombinasi ping dan traceroute.
- **Command**: `mtr <host | ip-address>`

### **11. nslookup**
- **Fungsi**: Query DNS server secara interaktif.
- **Command**: `nslookup`

### **12. whois `<host>`**
- **Fungsi**: Info tentang registrasi domain.
- **Command**: `whois <host>`

### **13. ifplugstatus**
- **Fungsi**: Deteksi status link dari perangkat ethernet lokal.
- **Command**: `ifplugstatus`

### **14. iftop**
- **Fungsi**: Monitoring bandwidth usage.
- **Command**: `iftop`

### **15. ethtool `<device name>`**
- **Fungsi**: Info detail tentang ethernet device.
- **Command**: `ethtool <device-name>`

### **16. nmap**
- **Fungsi**: Eksplorasi dan audit keamanan jaringan.
- **Command**: `nmap`

### **17. bmon**
- **Fungsi**: Monitor bandwidth dan rate estimator.
- **Command**: `bmon`

### **18. firewalld**
- **Fungsi**: Nambahin, konfigurasi, atau ngapus rules di firewall.
- **Command**: `firewalld`

### **19. iperf**
- **Fungsi**: Ngecek performance jaringan dan tuning.
- **Command**: `iperf`

### **20. speedtest-cli**
- **Fungsi**: Cek kecepatan download/upload jaringan.
- **Command**: `speedtest-cli`

### **21. wget `<link>`**
- **Fungsi**: Download file dari Internet.
- **Command**: `wget <link>`

---

## Advanced Tools ⚙️

### **tcpdump**
- **Fungsi**: Utilitas buat intercept dan analisa semua traffic jaringan yang lewat di komputer kamu.
- **Command**: `tcpdump`

### **netcat (nc)**
- **Fungsi**: Utility buat membaca dan menulis ke network connections (TCP/UDP). Juga bisa buat scanning port, transfer file, dan port listening (backdoor server mode).
- **Command**: `nc`

### **iptables**
- **Fungsi**: Program user-space yang ngebantu buat konfigurasi IP packet filter di firewall Linux (Netfilter). Ngatur aturan traffic jaringan di dalam tabel yang berisi chain rules.
- **Command**: `iptables`

### **curl**
- **Fungsi**: Command-line tool buat transfer data pakai berbagai network protocols.
- **Command**: `curl <url>`

---

## Cara Pakai: Contoh Penggunaan Network Utils 🔍

### **1. Cek Alamat IP Kamu**
```bash
ip address

2. Monitoring Status Perangkat Jaringan Real-time

ip monitor

3. Cek Bandwidth Usage

iftop

4. Cek Konektivitas ke Host

ping google.com

5. Tracing Jalur Jaringan

traceroute facebook.com

```
### ***Tips and Tricks*** 💡
-- Troubleshoot Koneksi Lemot: Pakai mtr buat combine ping sama traceroute biar tau letak masalah jaringan.

-- Percepat Analisis DNS: Gunakan dig atau host buat dapetin info DNS lebih cepat dibanding pake nslookup.

-- Audit Keamanan: Pake nmap buat scan port dan ngecek security vulnerabilities di jaringan kamu.
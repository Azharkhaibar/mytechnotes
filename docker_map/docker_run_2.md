## menampilkan informasi detail yg berkaitan dengan suatu container dengan **docker inspect**

```golang
docker inspect web-server-1
```


## menampilkan log pada container **(untuk troubleshooting)**
```golang
docker logs web-server-1
```


## menampilkan log dengan traffic secara realtime (terus menerus)
```golang
docker logs web-server-1 -f
```



# Exec Container (1/2)
perintah Exec untuk mengeksekusi perintah docker dlm container
```golang
docker exec web-server-1 hostname
```

# Docker Image (depedensi docker untuk app)
docker image adalah paket berisi semua yg diperlukan utk menjalankan aplikasi tertentu, mulai dari kode aplikasi runtime, library, env dan depedensi lainnya

```golang
docker image --help
```

# pull Image (instalasi depedensi)
digunakan utk mendownload image yg ada di container registry ke dlm lokal
```golang
docker full redis
```

# remove image 
mengahpus depedensi (berdasarkan id image (depedensi))

```golang
docker image rm mysql
```
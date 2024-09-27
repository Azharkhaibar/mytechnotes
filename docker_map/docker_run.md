## mejalankan container (1/3)

```golang
docker run [OPTIONS] IMAGE [COMMAND] [ARG...]
```

## menjalankan docker container (2/3)

```golang
~ docker run nginx
```

## check status log

```golang
docker ps -a
```

menampilkan semua container yg running

## menjalankan container (3/3)

```golang
docker run -d --name web-server-1 nginx
```
-  Opsi -d (detach) memungkinkan container berjalan di belakang layar

-  Opsi --name --> digunakan untuk memberikan nama container yg akan dijalankan

kalo ga buat nama, bakal digenerate random

![alt text](img/dockerid.png)

angka random diatas adalah id docker nya, yg sedang berjalan

``` golang
docker ps
```
menampilkan docker container yg sedang running saja

# running container id docker container
```golang
 docker start 4d99454c7c79
 ```

# stop running container
```golang
docker stop 4d99454c7c79
```

 cara melihat id container
 ```golang
 docker ps
```

// Go 🦙
// Deskripsi: Go memiliki dukungan bawaan untuk konkurensi melalui goroutines dan channels, yang memungkinkan pengembang menulis kode asinkron yang dapat berkomunikasi dan menyinkronkan antar beberapa thread.

package main
import (
    "fmt"
    "time"
)
func fetchData(c chan string) {
    time.Sleep(2 * time.Second)
    c <- "Data yang diambil"
}
func main() {
    c := make(chan string)
    go fetchData(c)
    fmt.Println(<-c) // Output: Data yang diambil
}

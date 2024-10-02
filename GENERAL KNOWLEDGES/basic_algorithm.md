# 📚 Algoritma Dasar

Algoritma adalah sekumpulan instruksi berurutan yang mengarah pada solusi dari suatu masalah. Sepanjang sejarah manusia, banyak algoritma yang telah diciptakan untuk menyelesaikan berbagai masalah dengan cara yang paling efisien. Dengan memilih algoritma yang tepat dalam pemrograman, kamu dapat menciptakan solusi yang cepat dan hemat sumber daya.

## Buku Rekomendasi
Salah satu buku yang sangat baik untuk pemula dalam mempelajari algoritma adalah **Grokking Algorithms**. Kamu bisa mulai belajar bahasa pemrograman sambil membaca buku ini untuk memahami dasar-dasar algoritma.

## 🔍 Algoritma Populer

### 1. **Binary Search**
Binary search adalah algoritma pencarian yang paling efisien untuk daftar yang terurut. Algoritma ini membagi daftar menjadi dua bagian dan hanya mencari di bagian yang relevan.

**Contoh dalam Python:**
```python
def binary_search(arr, target):
    low, high = 0, len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] < target:
            low = mid + 1
        elif arr[mid] > target:
            high = mid - 1
        else:
            return mid
    return -1

# Contoh penggunaan
arr = [1, 2, 3, 4, 5, 6]
print(binary_search(arr, 4))  # Output: 3


---

### 2. **Selection Sort**

```markdown
## 📊 Selection Sort

Selection Sort adalah algoritma pengurutan yang sederhana. Pada setiap langkah, elemen minimum dicari dan kemudian ditukar dengan elemen yang sedang diiterasi.

### 📜 Contoh Kode dalam Python:

```python
def selection_sort(arr):
    for i in range(len(arr)):
        min_index = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

# Contoh penggunaan
arr = [64, 25, 12, 22, 11]
selection_sort(arr)
print(arr)  # Output: [11, 12, 22, 25, 64]


---

### 3. **Recursion**

```markdown
## 🔄 Recursion

Rekursi adalah ketika sebuah fungsi memanggil dirinya sendiri. Solusi yang berbasis rekursi terlihat elegan, tetapi dapat menyebabkan stack overflow jika tidak ditangani dengan baik.

### 📜 Contoh Kode dalam Python (Fibonacci):

```python
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

# Contoh penggunaan
print(fibonacci(5))  # Output: 5


---

### 4. **Bubble Sort**

```markdown
## 🔵 Bubble Sort

Bubble Sort adalah algoritma pengurutan yang paling sederhana tetapi tidak efisien. Pada setiap iterasi, elemen bersebelahan dibandingkan, dan jika urutannya salah, elemen-elemen tersebut ditukar.

### 📜 Contoh Kode dalam Python:

```python
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

# Contoh penggunaan
arr = [64, 34, 25, 12, 22, 11, 90]
bubble_sort(arr)
print(arr)  # Output: [11, 12, 22, 25, 34, 64, 90]


---

### 5. **Quicksort**

```markdown
## ⚡ Quicksort

Quicksort adalah metode pengurutan yang ditingkatkan dari bubble sort. Algoritma ini membagi dan mengatur ulang elemen untuk mempercepat proses pengurutan.

### 📜 Contoh Kode dalam Python:

```python
def quicksort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quicksort(left) + middle + quicksort(right)

# Contoh penggunaan
arr = [3, 6, 8, 10, 1, 2, 1]
print(quicksort(arr))  # Output: [1, 1, 2, 3, 6, 8, 10]


---

### 6. **Breadth-First Search (BFS)**

```markdown
## 🌊 Breadth-First Search (BFS)

BFS memungkinkan kita untuk menemukan semua jalur terpendek dari suatu vertex dalam graf. Algoritma ini menggunakan struktur data antrian untuk menjelajahi graf secara menyeluruh.

### 📜 Contoh Kode dalam Python:

```python
from collections import deque

def bfs(graph, start):
    visited = set()
    queue = deque([start])
    
    while queue:
        vertex = queue.popleft()
        if vertex not in visited:
            visited.add(vertex)
            queue.extend(set(graph[vertex]) - visited)
    return visited

# Contoh penggunaan
graph = {
    'A': ['B', 'C'],
    'B': ['A', 'D', 'E'],
    'C': ['A', 'F'],
    'D': ['B'],
    'E': ['B', 'F'],
    'F': ['C', 'E']
}
print(bfs(graph, 'A'))  # Output: {'A', 'C', 'B', 'D', 'E', 'F'}


---

### 7. **Dijkstra's Algorithm**

```markdown
## 🛤️ Dijkstra's Algorithm

Dijkstra's Algorithm menemukan jalur terpendek antara semua vertex dalam graf dan menghitung panjangnya. Sangat berguna untuk menemukan rute optimal dalam berbagai aplikasi.

### 📜 Contoh Kode dalam Python:

```python
import heapq

def dijkstra(graph, start):
    queue = []
    heapq.heappush(queue, (0, start))
    distances = {vertex: float('infinity') for vertex in graph}
    distances[start] = 0
    
    while queue:
        current_distance, current_vertex = heapq.heappop(queue)
        
        if current_distance > distances[current_vertex]:
            continue
            
        for neighbor, weight in graph[current_vertex].items():
            distance = current_distance + weight
            
            if distance < distances[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(queue, (distance, neighbor))
    
    return distances

# Contoh penggunaan
graph = {
    'A': {'B': 1, 'C': 4},
    'B': {'A': 1, 'C': 2, 'D': 5},
    'C': {'A': 4, 'B': 2, 'D': 1},
    'D': {'B': 5, 'C': 1}
}
print(dijkstra(graph, 'A'))  # Output: {'A': 0, 'B': 1, 'C': 3, 'D': 4}


---

### 8. **Greedy Algorithm**

```markdown
## 🤑 Greedy Algorithm

Algoritma greedy membuat pilihan terbaik secara lokal di setiap langkah dengan harapan bahwa solusi akhir akan optimal. Pendekatan ini digunakan dalam banyak masalah optimasi.

### 📜 Contoh Kode dalam Python (Masalah Koin):

```python
def greedy_change(coins, total):
    coins.sort(reverse=True)  # Urutkan koin dari yang terbesar
    result = []
    for coin in coins:
        while total >= coin:
            total -= coin
            result.append(coin)
    return result

# Contoh penggunaan
coins = [1, 5, 10, 25]
total = 37
print(greedy_change(coins, total))  # Output: [25, 10, 1, 1]

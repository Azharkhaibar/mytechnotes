// JavaScript 🌐
// Deskripsi: Pemrograman asinkron umumnya dicapai melalui penggunaan promises, callbacks, dan sintaks async/await.

async function fetchData() {
  const response = await fetch("https://api.example.com/data");
  const data = await response.json();
  console.log(data);
}

fetchData();

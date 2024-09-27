# Python 🐍
# Deskripsi: Pemrograman asinkron dapat dilakukan menggunakan modul asyncio, yang menyediakan event loop dan API berbasis coroutine untuk konkurensi.
# Libraries: Terdapat juga pustaka pihak ketiga seperti Twisted dan Tornado yang menyediakan kemampuan asinkron.

import asyncio

async def fetch_data():
    await asyncio.sleep(2)
    return "Data yang diambil"

async def main():
    data = await fetch_data()
    print(data)

asyncio.run(main())

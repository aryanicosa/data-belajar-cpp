<?php
    echo
    "Catatan untuk set up Router 
    1. Konek dulu ke router IOT device
    2. buka browser, masuk ke 192.168.0.1 > login admin, uname admin, pass admin
    3. open DHCP menu > open Client list > Copy MAC addres & IP 
    4. Reserv addres > Add> Paste MAC addres & IP. save.
    done, your pc have been added as admin." ;
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Set Up Arduino IDE</title>
</head>
<body>
        Menambahkan board ESP8266 & library
    1. Buka Arduino IDE > Menu File > Preferences > copas "http://arduino.esp8266.com/stable/package_esp8266com_index.json"
    2. Buka menu tools > board > board manager > cari ESP8266, instal versi 2.5.2
    3. Buka menu sketch > include library > library manager 
       cari: 
       1. Adafruit MLX90614 Library
       2. MAX30100Lib
       3. Keypad
    
        Meng-compile / upload program 
    1. untuk coding_arduinomega
        board > Arduino Mega or Mega 2560
    2. untuk coding_nodemcuesp
        board > esp8266 generic

        jangan lupa server di codingan_nodemcuesp di sesuaikan dengan alamat IP komputer server 
        yang digunakan.

        setup switch untuk upload program 
    1. esp8266
        switch 5,6,7 ON - sisanya off.
        switch TX RX ke RXD0 TXD0
    2. arduino mega 
        switch 3,4 ON - sisanya off.
        switch TX RX ke RXD3 TXD3

        setup switch untuk running program
        switch 1,2,3,4 ON - sisanya off
        switch TX RX ke RXD3 TXD3

</body>
</html>
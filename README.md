# IP & port parser on C++


### RU:
Выполните следующие действия, чтобы использовать эту программу: 

Создайте файл с именем pars.txt и запишите в него IP-адреса и порты, разделенные двоеточием (:), каждая пара на новой строке. Например: 
```
192.168.0.1:8080
10.0.0.2:8000
```

Компилируйте программу с использованием компилятора C++ (например, g++) и выполните команду:
```
g++ separate_ip_and_ports.cpp -o separate_ip_and_ports
```

Это создаст исполняемый файл separate_ip_and_ports.

Запустите программу, выполнив команду:
```
./separate_ip_and_ports
```

Она разделит IP-адреса и порты, отсортирует их и создаст два файла: ip.txt со списком отдельных IP-адресов и port.txt со списком отдельных портов.

Файл ip.txt будет содержать:
```
10.0.0.2
192.168.0.1
```

Файл port.txt будет содержать:
```
8000
8080
```

Обратите внимание, что программа предполагает, что каждая строка в файле pars.txt содержит одну пару IP-адреса и порта, разделенных двоеточием.

### EN:

Follow the steps below to use this program: 

Create a file called pars.txt and write the IP addresses and ports in it, separated by a colon (:), each pair on a new line. For example: 
```
192.168.0.1:8080
10.0.0.2:8000
```

Compile the program using a C++ compiler (e.g. g++) and run the command:
```
g++ separate_ip_and_ports.cpp -o separate_ip_and_ports
```

This will create an executable file called separate_ip_and_ports.

Run the program by running the command:
```
./separate_ip_and_ports
```

It will separate IP addresses and ports, sort them and create two files: ip.txt with a list of individual IP addresses and port.txt with a list of individual ports.

The ip.txt file will contain:
```
10.0.0.2
192.168.0.1
```

The port.txt file will contain:
```
8000
8080
```

Note that the program assumes that each line in the pars.txt file contains one pair of IP address and port, separated by a colon.

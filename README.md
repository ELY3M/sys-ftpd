# sys-ftpd

#### Previously sys-ftpd-light

This is a lightweight FTP server that runs in the background on your Nintendo Switch.

 - It's a lightweight version of mtheall's [ftpd](https://github.com/mtheall/ftpd) app run as a background service (sysmodule).
 - Originally forked from jakibaki's [sys-ftpd](https://github.com/jakibaki/sys-ftpd) in an attempt to improve peformance and stability.  

Since it's lightweight, it occupies less memory on your console at the cost of transferring files a bit slower. If you want to transfer large files, I would suggest you install mtheall's [ftpd](https://github.com/mtheall/ftpd) separately and run it whenever you need to make a large file transfer.

## How to use
1. Go to the [latest release](https://github.com/ELY3M/sys-ftpd/releases/latest) and download **out.zip** (not the source code).
2. Extract the contents of the ZIP to the **root** of your Nintendo Switch's SD card.  
   This should merge with your existing `atmosphere` and `config` folders.
3. Navigate to `sdmc:/config/sys-ftpd/config_template.ini` and set your desired username and password for the FTP server.
   - After editing, **rename the file** to `config.ini` so sys-ftpd will load it.
   - Alternatively, you can enable anonymous mode, which allows anyone on your network to connect without credentials. *(Not recommended — unsafe.)*
4. Boot or reboot your Nintendo Switch into CFW as usual.
5. Once your console is connected to a network, connect to it with any FTP client on a device within the same network.
   - Your Switch’s IP address is shown in **System Settings → Internet → Connection Status → IP Address** (typically `192.168.X.X`).
   - The FTP port can be set in `config.ini` (default is **5000**).
   - The connection address should look like:  
     ```
     192.168.X.X:5000
     ```
     Use the username and password you configured in `config.ini`.
6. You can now remotely access your Nintendo Switch files through FTP.


## Other

Sysmodule program ID: **420000000000000E**

---

Config Example (Located on your sd in `sdmc:/config/sys-ftpd/config_template.ini`):

```
[User]
user:=jeremy

# user:= -> Login username

[Password]
password:=ilovecars

# password:= -> Login password

[Port]
port:=5000

# port:=5000 -> opens the server on port 5000 (using the console's IP address).

[Anonymous]
anonymous:=0

# anonymous:=1 -> Anyone can connect to the server. (dangerous!)
# anonymous:=0 -> Only allows logging into the ftpd server with the correct username and password. user and password (in fields above) must be set.

[LED]
led:=1

# led:=1 -> LED flashes on connect (default)
# led:=0 -> LED does not flash on connect
```

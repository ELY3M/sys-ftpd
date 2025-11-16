# sys-ftpd

#### Previously sys-ftpd-light

This is a lightweight FTP server that runs in the background on your Nintendo Switch.

 - It's a lightweight version of mtheall's [ftpd](https://github.com/mtheall/ftpd) app run as a background service (sysmodule).
 - Originally forked from jakibaki's [sys-ftpd](https://github.com/jakibaki/sys-ftpd) in an attempt to improve peformance and stability.  

Since it's lightweight, it occupies less memory on your console at the cost of transferring files a bit slower. If you want to transfer large files, I would suggest you install mtheall's [ftpd](https://github.com/mtheall/ftpd) separately and run it whenever you need to make a large file transfer.

## How to use
1. Go to the [latest release](https://github.com/ELY3M/sys-ftpd/releases/latest) and download the sys-ftpd out.zip folder. (not the source code)
2. Extract the contents of the folder to the root of your Nintendo Switch's SD card. (it should overlap with your existing atmosphere and config folders)
3. Go to config/sys-ftpd/config.ini and set your username and password for the FTP server. (otherwise it won't let you connect)
   - Alternatively you can enable anonymous mode, which will let anyone in the network connect to your FTP server without credentials. (unsafe)
4. Boot/reboot your Nintendo Switch into CFW as usual.
5. Once your console is connected to a network, you can connect to your server with any FTP client (you can find them online) from any computer within the same network.
   - The IP address of your Nintendo Switch can be found in your console's System Settings -> Internet -> Connection Status -> IP address. (it usually looks like 192.168.X.X)
   - The port can be found and modified in the config.ini mentioned above. (it's 5000 by default)
   - The resulting address should look something like `192.168.X.X:5000`, where your username and password are your `user` and `password` from config.ini respectively.
6. You should now be able to enjoy accessing your Nintendo Switch files remotely.

## Other

Sysmodule program ID: **420000000000000E**

---

Config Example (Located on your sd in `sdmc:/config/sys-ftpd/config.ini`):

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

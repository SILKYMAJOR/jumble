# jumble  
## 001  
sysctl kernel.randomize_va_space=0  
gcc -fno-stack-protector -z execstack -o test test.c -no-pie  
cat exploit.bin - | ./test

What is wrong?

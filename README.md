# jumble  
## 001  
sysctl kernel.randomize_va_space=0  
gcc -fno-stack-protector -z execstack -o test test.c -no-pie  
cat exploit.bin - | ./test  
or  
cat exploit1.bin - | ./test  
or  
cat exploit2.bin - | ./test

What is wrong?

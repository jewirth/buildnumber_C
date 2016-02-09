clear
vim foo1.c
gcc -D __MYVAR=$((`cat nextbuildnumber.txt`)) foo1.c -o foo1
echo $((`cat nextbuildnumber.txt` + 1)) > nextbuildnumber.txt
./foo1

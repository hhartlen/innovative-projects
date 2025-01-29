all: main lab2fixed

main: lab2.c
	gcc -o main lab2.c

lab2fixed: lab2fixedcode.c
	gcc -o lab2fixed lab2fixedcode.c

clean:
	rm -f main lab2fixed


test: clean main.o
	bash test.sh "1556 363 1877 4456 -150 -38 -333 222 1 -1 -33333 4445 1556 1556 1556 -1337 0 0" "-33333 -1337 -333 -150 -38 -1 0 0 1 222 363 1556 1556 1556 1556 1877 4445 4456"
	bash test.sh "1556 363 1877 4456 -150 -38 -333 443 1204 31555 -123 -22" "-333 -150 -123 -38 -22 363 443 1204 1556 1877 4456 31555"
	bash test.sh "156 -156 156 -156 156 156 156 -156" "-156 -156 -156 156 156 156 156 156"
	bash test.sh "156 360 187 446 -150 -380 -330 2220 01 -10 -333 445 156 156 156" "-380 -333 -330 -150 -10 1 156 156 156 156 187 360 445 446 2220"

main.o:
	gcc main.c -o main.o

clean:
	rm -rf *.o *~ main
	

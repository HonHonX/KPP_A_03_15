default: euklid

euklid.o: euklid.c
	gcc -c euklid.c -o euklid.o

euklid: euklid.o
	gcc euklid.o -o euklid

clean:
	-rm -f euklid.o
	-rm -f euklid

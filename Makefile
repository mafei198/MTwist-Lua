all:
	gcc -undefined dynamic_lookup -dynamiclib -I/usr/local/include/ --shared -fPIC -O2 -o mtwist.so mtwist_lua.c

linux:
	gcc -I/usr/local/include/ --shared -fPIC -O2 -o mtwist.so mtwist_lua.c

CCNFLAGS= gcc -Wall -g

FUNCS= power.o basicMath.o

all: mains maind

main.o: main.c
	$(CCNFLAGS) -c main.c -o main.o

libmyMath.so: $(FUNCS)
	$(CCNFLAGS) -shared $(FUNCS) -o libmyMath.so

libmyMath.a: $(FUNCS)
	ar rcs libmyMath.a $(FUNCS) 
	
mymaths: libmyMath.a

mymathd: libmyMath.so
		
mains: main.o libmyMath.a 
	$(CCNFLAGS) main.o libmyMath.a -o mains
	
maind: main.o libmyMath.so
	$(CCNFLAGS) main.o ./libmyMath.so -o maind

clean: 
	rm maind mains *.so *.o *.a 

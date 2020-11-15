CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_POWER=power.o
OBJECT_BASIC_MATH=basicMath.o
ALL_LIB_OBJECTS=power.o basicMath.o
FLAGS= -Wall -g


all: mymaths mymathd mains maind


%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

mymaths: libmyMath.a

libmyMath.a: $(ALL_LIB_OBJECTS)
	$(AR) rcu $@ $(ALL_LIB_OBJECTS)


mymathd: libmyMath.so

libmyMath.so: $(ALL_LIB_OBJECTS)
	$(CC) -shared -o $@ $(ALL_LIB_OBJECTS)

maind: libmyMath.so $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o $@ $(OBJECTS_MAIN) libmyMath.so

mains: libmyMath.a $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o $@ $(OBJECTS_MAIN) libmyMath.a


clean:
	rm *.o libmyMath.a libmyMath.so mains maind


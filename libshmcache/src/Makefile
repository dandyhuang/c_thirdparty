.SUFFIXES: .c .o .lo

COMPILE = $(CC) -Wall -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE -g -O3
FASTCOMMONPATH = ../../libfastcommon
INC_PATH = -I/usr/local/include \
		   -I../include \
		   -I$(FASTCOMMONPATH)/include
          
LIB_PATH = -lm -lpthread -L$(FASTCOMMONPATH)/lib -Wl,-Bstatic libfastcommon.a 
OUT_LIB_PATH=../lib

SHMCACHE_STATIC_OBJS = shmcache.o shmopt.o shm_striping_allocator.o shm_object_pool.o \
					   shm_hashtable.o shm_value_allocator.o shm_op_wrapper.o shm_lock.o \
                       shmcache_ini_annotation.o

ALL_OBJS = $(SHMCACHE_STATIC_OBJS)

STATIC_LIBS = libshmcache.a
ALL_LIBS = $(STATIC_LIBS)

all: $(ALL_LIBS)
libshmcache.a: $(SHMCACHE_STATIC_OBJS)
	ar rcs $@ $(SHMCACHE_STATIC_OBJS)
	rm -rf $(OUT_LIB_PATH)
	mkdir $(OUT_LIB_PATH)
	mv $@ $(OUT_LIB_PATH)
.o:
	$(COMPILE) -o $@ $<  $(SHMCACHE_STATIC_OBJS) $(LIB_PATH) $(INC_PATH)
.c:
	$(COMPILE) -o $@ $<  $(SHMCACHE_STATIC_OBJS) $(LIB_PATH) $(INC_PATH)
.c.o:
	$(COMPILE) -c -o $@ $<  $(INC_PATH)
.c.lo:
	$(COMPILE) -c -fPIC -o $@ $<  $(INC_PATH)
clean:
	rm -f $(ALL_OBJS) $(ALL_PRGS) $(ALL_LIBS)


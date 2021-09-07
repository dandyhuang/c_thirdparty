.SUFFIXES: .c .o
CC = gcc
COMPILE = $(CC) -g -O1 -Wall -fPIC -rdynamic -D_FILE_OFFSET_BITS=64 -g -DDEBUG_FLAG
INC_PATH = -I/usr/local/include \
           -I../include \
		   -I../../libfastcommon/include
LIB_PATH = -Wl,-Bstatic -L../lib -lshmcache -L../../libfastcommon/lib -lfastcommon -Wl,-Bdynamic -lpthread -ldl -lm

TARGET_PATH = $(DESTDIR)/usr/local/bin/

TARGET_PRGS = shmcache_set shmcache_get shmcache_delete shmcache_remove_all \
			  shmcache_stats shmcache_dump

ALL_PRGS = $(TARGET_PRGS)

all: $(ALL_PRGS)
.c:
	$(COMPILE) -o $@ $< $(LIB_PATH) $(INC_PATH)
.c.o:
	$(COMPILE) -c -o $@ $<  $(INC_PATH)
clean:
	rm -f $(ALL_PRGS)


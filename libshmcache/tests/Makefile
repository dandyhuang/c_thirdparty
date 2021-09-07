OUTPUT=bin/cache_test
VPATH = ./ 
		
CC = gcc
CXX = g++
CFLAGS = -g -m64 -std=c++11  -w -Wall  -Wno-format -Wno-comment -fpermissive #-DALG_DEBUG #-DPERF_TEST -pg
LDFLAGS = -g -lz -rdynamic

LIBINCLUDE=..
THIRD_LIB= /data/rtrs/public_lib/third_lib/
LIBPATH=../lib/
FASTCOMMONPATH=../../libfastcommon
PROTOPATH=${THIRD_LIB}/protobuf-3.6.0
PROTOCOLPATH=./Protocol

AROPT=-curv
AR = ar

INCLUDE = -I$(LIBINCLUDE)/include  \
		  -I$(PROTOPATH)/include \
		  -I$(FASTCOMMONPATH)/include \
		  -I$(PROTOCOLPATH)
   
CPPINCS := $(foreach dir, $(VPATH), -I$(dir))

LIBS =$(LIBPATH)/libshmcache.a $(FASTCOMMONPATH)/lib/libfastcommon.a ${PROTOPATH}/lib/libprotobuf.a $(PROTOCOLPATH)/.lib/libproto.a  -Wl,-Bdynamic -lpthread  -ldl -lz -lssl -lcrypto

CPPFILES := $(foreach dir, $(VPATH), $(wildcard $(dir)/*.cc $(dir)/*.cpp))
OBJECTS := $(patsubst %.cpp, %.o, $(filter %.cpp,$(CPPFILES)))
OBJECTS += $(patsubst %.cc, %.o, $(filter %.cc,$(CPPFILES)))

${OUTPUT}:${OBJECTS}
	${CXX} ${LDFLAGS} ${OBJECTS} ${LIBS} -o ${OUTPUT}

%.o: %.cpp
	${CXX} -c ${CFLAGS} $(INCLUDE) $(CPPINCS) $< -o $@

%.o: %.c
	$(CC) -c  $(CFLAGS) $(INCLUDE) $(CPPINCS) $< -o $@

%.o: %.cc
	${CXX} -c $(CFLAGS) $(INCLUDE) $(CPPINCS) $< -o $@

clean :
	rm -f ${OBJECTS} ${OUTPUT} 



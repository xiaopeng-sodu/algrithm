CC=gcc
OBJECT=main
SRC_PATH=.
CFLAGS= -g3 -O -Wall

.PHONY:clean

src = main.c qsort.c insertsort.c selectsort.c bubsort.c mergesort.c heapsort.c sort_list.c shellsort.c

$(SRC_PATH)/$(OBJECT): $(foreach v, $(src), $(SRC_PATH)/$(v))
	$(CC) $(CFLAGS) -o $@ $^ -I$(SRC_PATH)

clean : 
	rm -f $(SRC_PATH)/$(OBJECT)
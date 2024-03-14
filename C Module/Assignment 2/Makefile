CC =gcc
GOAL =main
CSRC = $(GOAL).c
CSRC+=mymath.c
COBJS=$(CSRC: .c=.o)
#linking
$(GOAL): $(COBJS)
	$(CC) -o $@ $^

# $@ - target file ka naam liko
# $^ sare ke sare dependecy(here cobjes ko type krna at a time)


#compile
%.o: %.c
	$(CC) -c $<
#ek ek kar compile krna h

#run

run:
	./$(GOAL)
clean:
	rm $(GOAL) $(COBJS)
	


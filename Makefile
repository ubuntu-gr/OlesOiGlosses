CC=gcc
CXX=g++
ALL=paradeigma_c paradeigma_cc

all: $(ALL)

paradeigma_c: paradeigma.c
	$(CC) -o paradeigma_c $^

paradeigma_cc: paradeigma.cc
	$(CXX) -o paradeigma_cc $^

clean:
	rm -f paradeigma_c paradeigma_cc

run: paradeigma_c paradeigma_cc
	@echo Πρόγραμμα σε C
	./paradeigma_c
	@echo
	@echo Πρόγραμμα σε C++
	./paradeigma_cc
	@echo
	@echo Πρόγραμμα σε Perl
	./paradeigma.pl

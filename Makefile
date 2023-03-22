all:main 
	main:main.o sqstack.o
	$(CC) $^ -o $@
	 

cleam:
	rm *.o main -rf
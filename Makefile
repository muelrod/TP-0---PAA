compile: main.c quadro.c
	gcc main.c quadro.c -o main

run:
	./main

both: 
	make compile && make run
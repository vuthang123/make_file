create_object_file: src/main.c
	gcc -c src/main.c -o output/main.o
build: output/main.o
	gcc output/main.o -o output/main.exe
run: output/main.o
	./output/main.exe
# (asterisk *) delete all have in folder
clean: output/main.o
	rm output/*
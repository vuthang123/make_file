PRO_DIR := .
PROJ_NAME := GPIO
OUTPUT_PATH := $(PRO_DIR)/output 

create_object_file: src/main.c
	gcc -c src/main.c -o output/main.o
build: output/main.o
	gcc output/main.o -o output/main.exe
# (asterisk *) delete all have in folder
.PHONY: clean
clean: output/main.o
	@rm output/*
run: output/main.o
	./output/main.exe
print-%: 
	@echo $@
# @ an cau lenh khi thu hien
# @echo $@
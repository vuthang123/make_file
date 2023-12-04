create_object_file: src/main.c
	gcc -c src/main.c -o output/main.o
build: output/main.o
	gcc output/main.o -o output/main.exe
# (asterisk *) delete all have in folder
.PHONY: clean
clean: output/main.o
	rm output/*
run: output/main.o
	./output/main.exe
# gia su co mot file clean ben ngoai
# directory thi no sex khong run duoc cau lenh make clean 
# the nen can phai co tu khoa PHONY de nhan biet clean co su
# dung cau lenh do trong make file de make file nhan bt clean laf tu khoa
# duoc su dung trong make 
# fatal error 
#  make clean
# -->>>make: *** No rule to make target 'clean'.  Stop. the nen phai can tu khoa PHONY
# khong nhan biet duoc action

playground:
	gcc -lseccomp ./src/main.c -o $@

clean:
	@rm playground

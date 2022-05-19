PROG=guess-number
CC=gcc

${PROG}: ${PROG}.c
	${CC} -o ${PROG} ${PROG}.c
	sudo mv ${PROG} /usr/bin

uninstall:
	sudo rm /usr/bin/guess-number

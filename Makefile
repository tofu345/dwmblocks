PREFIX  := /usr/local
CC      := cc
CFLAGS  := -pedantic -Wall -Wno-deprecated-declarations -Os
LDFLAGS := -lX11

# FreeBSD (uncomment)
#LDFLAGS += -L/usr/local/lib -I/usr/local/include
# # OpenBSD (uncomment)
#LDFLAGS += -L/usr/X11R6/lib -I/usr/X11R6/include

all: options dwmblocks

options:
	@echo dwmblocks build options:
	@echo "CFLAGS  = ${CFLAGS}"
	@echo "LDFLAGS = ${LDFLAGS}"
	@echo "CC      = ${CC}"

dwmblocks: dwmblocks.c blocks.def.h
	${CC} -o dwmblocks dwmblocks.c ${CFLAGS} ${LDFLAGS}

clean:
	rm -f *.o *.gch dwmblocks

install: dwmblocks
	mkdir -p ${DESTDIR}${PREFIX}/bin
	install -m 0755 dwmblocks ${DESTDIR}${PREFIX}/bin
	install -m 0755 blocks/dwmblocks-* ${DESTDIR}${PREFIX}/bin
	install udev/99-dwmblocks-bat.rules /etc/udev/rules.d/

uninstall:
	rm -f ${DESTDIR}${PREFIX}/bin/dwmblocks \
		${DESTDIR}${PREFIX}/bin/dwmblocks-* \
		/etc/udev/rules.d/99-dwmblocks-bat.rules

.PHONY: all options clean install uninstall

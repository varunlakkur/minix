.PATH: ${MINIXSRCDIR}/lib/nbsd_libcompat_minix/include

INCSDIR= /usr/netbsd/include

INCS+= configfile.h termcap.h
INCS+= 	compat/a.out.h compat/regexp.h compat/syslog.h \
	compat/pwd.h

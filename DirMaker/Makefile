OOBJECTS =  main.o
LDFLAGS = -L./lib -Wl,-rpath=./lib
LDLIBS = -lole32 -lcomdlg32 -lfileIO -lcreateStructure -lmenu -lUI -lbasicf -ldirmaker
LIBS = lib/libfileIO.dll lib/libcreateStructure.dll lib/libmenu.dll lib/libUI.dll lib/libbasicf.dll lib/dirmaker.dll
DirMaker.exe: $(OOBJECTS)
	gcc -o $@ $^ $(LDFLAGS) $(LDLIBS)
	@cp  $(LIBS) .
	
%.o: %.c
	gcc -c $^
clean:
	rm -r *.exe *.o *.dll

	
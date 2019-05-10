
#//
#// Copyright (C) 2005
#// Packet Engineering, Inc. All rights reserved.
#//
#// Redistribution and use in source and binary forms, with or without
#// modification is not permitted unless authorized in writing by a duly
#// appointed officer of Packet Engineering, Inc. or its derivatives
#//
#// Description:
#//
#////////////////////////////////////////////////////////////////////////////

LIBNAME = test_c

CC = g++

.SUFFIXES: .cpp .h

FLAGS = -g

OBJDIR = ./obj

CREATEOBJDIR = $(shell if [ -d $(OBJDIR) ]; then echo ""; else mkdir -p $(OBJDIR); fi)

LIBS = 

DLIBS = 

INCDIRS = 

#
# objects and targets
#
OBJECTS = $(patsubst %.cpp,$(OBJDIR)/%.o,$(wildcard *.cpp))

TARGETLIB = lib$(LIBNAME).so

#
# Rules for normal comile and link 
#
all:: $(TARGETLIB) 

$(TARGETLIB): $(OBJECTS)
	$(CC) -shared -o $(TARGETLIB) $(OBJECTS) 

$(OBJECTS): $(OBJDIR)/%.o: %.cpp
	$(CREATEOBJDIR)
	$(CC) -c -fpic -shared -rdynamic $(FLAGS) $< $(INCDIRS) -o $@

clean:
	rm -rf $(OBJDIR)/*.o $(TARGETLIB) 

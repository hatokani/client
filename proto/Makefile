COMPILER = clang++
CFRAG = -std=c++14 -O2 -Wall -pipe
INCDIR = /home/hatokani/protobuf-2.6.1/src
SRCDIR = .
OBJDIR = /home/hatokani/git/client/obj
SOURCES = $(wildcard $(SRCDIR)/*.cc)
LIBS = $(wildcard $(SRCDIR)/*.h)
OBJECTS = $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.cc=.o)))
TARGET = /home/hatokani/a.out

$(TARGET): $(OBJECTS) $(LIBS)
	$(COMPILER) -I$(INCDIR) -o $@ $(OBJECTS)
$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	$(COMPILER) -I$(INCDIR)  $(CFRAG) -o $@ -c $<

clean:
	-rm -f $(OBJECTS) $(TARGET)

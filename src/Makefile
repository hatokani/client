COMPILER = clang++
CFLAGS = -std=c++14 -O2 -Wall -pipe 
TARGET = ../client
INCLUDE = -I/usr/include -I/home/hatokani/protobuf-2.6.1/src
SRCDIR = .
LIBS = $(wildcard $(SRCDIR)/*.h)
OBJDIR = ../obj
SOURCES = $(wildcard $(SRCDIR)/*.cc)
OBJECTS = $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.cc=.o))) 
OBJS = $(wildcard $(OBJDIR)/*.o)

$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	clang-format -i $< $(LIBS)
	$(COMPILER) $(INCLUDE) $(CFLAGS) -o $@ -c $<

$(TARGET): $(OBJECTS)
	$(COMPILER) -o $@ $(OBJS) -lprotobuf

clean:
	-rm -f $(OBJECTS) $(TARGET)

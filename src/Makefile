COMPILER = clang++
CFLAGS = -std=c++14 -O2 -Wall -pipe 
TARGET = ../client
INCLUDES = ../../protobuf-3.0.0/src
SRCDIR = .
OBJDIR = ../obj
SOURCES = $(wildcard $(SRCDIR)/*.cc)
LIBS = $(wildcard $(SRCDIR)/*.h) $(wildcard $(INCLUDES)/*.h)
OBJECTS = $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.cc=.o)))

$(TARGET): $(OBJECTS) $(LIBS)
	$(COMPILER) -o $@ $(OBJECTS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	clang-format -i $(SOURCES) $(LIBS)
	$(COMPILER) $(CFRAGS) -o $@ -c $<
clean:
	-rm -f $(OBJECTS) $(TARGET)
